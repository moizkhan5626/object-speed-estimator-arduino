# 🚗 Real-Time Object Speed Estimator

A real-time embedded systems project that measures the speed of a moving object using an Arduino Uno, an HC-SR04 ultrasonic sensor, and a Flying Fish IR obstacle sensor.

---

## 📖 Overview

This project estimates the speed of a moving object by measuring the time it takes to travel between two sensors positioned 28 cm apart.

The ultrasonic sensor starts the timer when an object enters a 15 cm detection zone, while the IR sensor stops the timer when the object reaches the finish point. The Arduino then calculates the object's speed and displays the results in the Serial Monitor.

The project was developed through multiple iterations involving testing, debugging, sensor calibration, and interface refinement.

---

## 📸 Project Images

### Hardware Setup

![Hardware Setup](Images/setup.jpg)

### Wiring

![Wiring](Images/wiring.jpg)

### Serial Monitor Output

![Serial Monitor](Images/serial-monitor.png)

---

## 🎥 Demonstration

Project demonstration video:

[demo.mp4](Videos/demo.mp4)

---

## ✨ Features

* Real-time object speed estimation
* HC-SR04 ultrasonic sensor integration
* Flying Fish IR sensor integration
* Stopwatch-style lap timing
* Automatic lap detection
* Automatic reset mechanism
* Clean Serial Monitor interface
* Event-driven timing using `millis()`

---

## 🛠 Hardware Used

| Component                 | Quantity |
| ------------------------- | -------- |
| Arduino Uno               | 1        |
| HC-SR04 Ultrasonic Sensor | 1        |
| Flying Fish IR Sensor     | 1        |
| Breadboard                | 1        |
| Jumper Wires              | Several  |
| USB Cable                 | 1        |

---

## 🔌 Circuit Connections

### HC-SR04 Ultrasonic Sensor

| Sensor Pin | Arduino Uno Pin |
| ---------- | --------------- |
| VCC        | 5V              |
| GND        | GND             |
| TRIG       | D9              |
| ECHO       | D10             |

### Flying Fish IR Sensor

| Sensor Pin | Arduino Uno Pin |
| ---------- | --------------- |
| VCC        | 5V              |
| GND        | GND             |
| OUT        | D2              |

---

## 📏 Sensor Placement

* Distance between sensors: **28 cm**
* Ultrasonic trigger distance: **15 cm**

The ultrasonic sensor acts as the starting point while the IR sensor acts as the finish line.

---

## ⚙️ How It Works

### Step 1 — Idle State

The Arduino waits for an object to enter the ultrasonic sensor's detection range.

### Step 2 — Lap Start

When the object comes within 15 cm:

* Lap begins
* Stopwatch starts
* Timer updates every 0.25 seconds

### Step 3 — Lap Finish

When the object reaches the IR sensor:

* Stopwatch stops
* Travel time is calculated
* Speed is calculated

Formula used:

Speed = Distance ÷ Time

### Step 4 — Reset

The system waits until the object leaves both sensors before allowing another measurement.

---

## 📂 Project Structure

```text
Real-Time-Object-Speed-Estimator/
│
├── Arduino_Code/
│   └── Object_Speed_Estimator/
│       └── Object_Speed_Estimator.ino
│
├── Docs/
│   └── Project_Report.pdf
│
├── Images/
│   ├── setup.jpg
│   ├── wiring.jpg
│   └── serial-monitor.png
│
├── Videos/
│   └── demo.mp4
│
├── README.md
└── LICENSE
```

---

## 💻 Development Process

The initial implementation was developed with AI assistance and then refined through testing, debugging, calibration, and iterative improvements.

The project evolved through multiple development cycles until the hardware and software worked reliably together.

---

## 🧩 Challenges Faced

### Continuous Triggering

The ultrasonic sensor repeatedly detected the same object, causing unwanted measurements.

### Trigger Distance Calibration

Different trigger distances were tested before selecting a stable value of 15 cm.

### Sensor Synchronization

Both sensors needed to work together accurately to produce reliable timing results.

### Serial Monitor Flooding

Early versions continuously printed data, making the output difficult to read.

The interface was redesigned into a clean stopwatch-style display.

### Real-World Testing

Testing with moving objects revealed timing and detection issues that required several rounds of refinement.

---

## 📚 Lessons Learned

Through this project I gained practical experience in:

* Arduino Programming
* Sensor Integration
* Embedded Systems
* Hardware Debugging
* Sensor Calibration
* Real-Time Timing with `millis()`
* State-Based Programming
* Technical Documentation
* Iterative Problem Solving

---

## 📄 Documentation

A complete project report is available in:

```text
Docs/Project_Report.pdf
```

---

## 🚀 Future Improvements

* OLED display integration
* Bluetooth connectivity
* ESP32 web dashboard
* SD card data logging
* Interrupt-based IR detection
* Average, minimum, and maximum speed statistics
* Multiple lap support

---

## 👨‍💻 Author

**Mohammed Moiz Khan**

NED University of Engineering & Technology

---

## ⭐ Support

If you found this project useful or interesting, consider starring the repository.
