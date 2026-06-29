/*
==========================================
OBJECT SPEED ESTIMATOR
Arduino Uno
HC-SR04
TRIG -> D9
ECHO -> D10
Flying Fish IR
OUT -> D2
Sensor Distance : 28 cm
Trigger Distance: 15 cm
==========================================
*/
const int trigPin = 9;
const int echoPin = 10;
const int irPin = 2;
const float triggerDistance = 15.0;
const float sensorDistance = 28.0;
bool lapRunning = false;
bool waitingReset = false;
unsigned long startTime;
unsigned long lastUpdate;
int lap = 1;
//----------------------------------------
float getDistance() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
long duration = pulseIn(echoPin, HIGH, 30000);
if (duration == 0)
return 999;
return duration * 0.0343 / 2.0;
}
//----------------------------------------
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(irPin, INPUT);
Serial.begin(9600);
Serial.println("OBJECT SPEED ESTIMATOR");
Serial.println();
Serial.println("Ready...");
Serial.println();
}
//----------------------------------------
void loop() {
float distance = getDistance();
// ---------------- Start Lap ----------------
if (!lapRunning && !waitingReset && distance <= triggerDistance) {
lapRunning = true;
startTime = millis();
lastUpdate = startTime;
Serial.print("Lap ");
Serial.print(lap);
Serial.println(" Started...");
Serial.println();
}
// ---------------- Stopwatch ----------------
if (lapRunning) {
unsigned long now = millis();
if (now - lastUpdate >= 250) {
lastUpdate += 250;
float elapsed = (lastUpdate - startTime) / 1000.0;
Serial.print(elapsed, 2);
Serial.println(" s");
}
// ---------------- Finish Lap ----------------
if (digitalRead(irPin) == LOW) {
float totalTime = (millis() - startTime) / 1000.0;
float speed = sensorDistance / totalTime;
Serial.println();
Serial.print("Lap ");
Serial.println(lap);
Serial.print("Final Time : ");
Serial.print(totalTime, 3);
Serial.println(" s");
Serial.print("Speed : ");
Serial.print(speed, 2);
Serial.println(" cm/s");
Serial.println();
lap++;
lapRunning = false;
waitingReset = true;
}
}
// ---------------- Reset ----------------
if (waitingReset) {
if (digitalRead(irPin) == HIGH && distance > triggerDistance) {
waitingReset = false;
}
}
}