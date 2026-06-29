# 🚗 Real-Time Object Speed Estimator

A real-time embedded systems project that measures the speed of a moving object using an Arduino Uno, an HC-SR04 ultrasonic sensor, and a Flying Fish IR obstacle sensor.

---

## 📖 Overview

This project estimates the speed of a moving object by measuring the time it takes to travel between two sensors placed **28 cm apart**.

The ultrasonic sensor starts the timer when an object enters a **15 cm detection range**, while the IR sensor stops the timer when the object reaches the finish line. The Arduino calculates the object's speed and displays the result in the Serial Monitor.

The project was developed through multiple iterations involving testing, debugging, sensor calibration, and interface refinement.

---

## ✨ Features

* 🚀 Real-time object speed estimation
* 📏 HC-SR04 ultrasonic sensor integration
* 🎯 Flying Fish IR sensor integration
* ⏱ Stopwatch-style lap timing
* 🔄 Automatic lap detection
* ♻ Automatic reset mechanism
* 💻 Clean Serial Monitor interface
* ⚡ Event-driven timing using `millis()`

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

* Distance between both sensors: **28 cm**
* Ultrasonic trigger distance: **15 cm**

The ultrasonic sensor marks the starting point while the IR sensor marks the finish line.

---

## ⚙️ Working Principle

1. The Arduino waits for an object to enter the ultrasonic sensor's detection range.
2. Once detected within **15 cm**, the stopwatch starts.
3. The object travels **28 cm** toward the IR sensor.
4. The IR sensor detects the object and stops the stopwatch.
5. The Arduino calculates the object's speed using:

**Speed = Distance ÷ Time**

6. The final lap time and speed are displayed in the Serial Monitor.

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
│
├── Videos/
│
├── README.md
└── LICENSE
```

---

## 💻 Development Process

The initial implementation was developed with AI assistance.

The final system was achieved through continuous testing, debugging, calibration, and iterative improvements. Rather than using the generated code directly, the project evolved through multiple development cycles until the hardware and software worked reliably together.

---

## 🧩 Challenges Faced

* Continuous triggering caused repeated measurements.
* Trigger distance required calibration for stable detection.
* Synchronizing the ultrasonic and IR sensors.
* Preventing duplicate lap recordings.
* Designing a clean and minimal Serial Monitor interface.
* Testing with moving objects to improve timing accuracy.

---

## 📚 Skills Demonstrated

* Arduino Programming
* Embedded Systems
* Sensor Integration
* Hardware Debugging
* Sensor Calibration
* Real-Time Programming
* State-Based Programming
* Technical Documentation
* Problem Solving
* Human-AI Collaborative Development

---

## 📄 Documentation

A detailed project report is available in the **Docs** folder.

---

## 🚀 Future Improvements

* OLED display
* Bluetooth connectivity
* ESP32 web dashboard
* SD card data logging
* Interrupt-based IR detection
* Average, minimum, and maximum speed statistics
* Multi-lap support

---

## 👨‍💻 Author

**Mohammed Moiz Khan**

BS Physics
NED University of Engineering & Technology

---

## ⭐ Support

If you found this project interesting, consider giving it a ⭐ on GitHub.
