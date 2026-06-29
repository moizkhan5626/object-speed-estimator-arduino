# 🚗 Real-Time Object Speed Estimator

A real-time embedded systems project that measures the speed of a moving object using an Arduino Uno, an HC-SR04 ultrasonic sensor, and a Flying Fish IR obstacle sensor.

---

## 📖 Overview

This project estimates the speed of a moving object by measuring the time it takes to travel between two sensors positioned **28 cm apart**.

The ultrasonic sensor starts the timer when an object enters a **15 cm detection zone**, while the IR sensor stops the timer when the object reaches the finish point. The Arduino then calculates the object's speed and displays the results in the Serial Monitor.

The project was developed through multiple iterations involving testing, debugging, sensor calibration, and user interface refinement.

---

## ✨ Features

* Real-time object speed estimation
* HC-SR04 ultrasonic sensor integration
* Flying Fish IR sensor integration
* Stopwatch-style lap timing
* Automatic lap detection
* Automatic system reset
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

| HC-SR04 Pin | Arduino Uno Pin |
| ----------- | --------------- |
| VCC         | 5V              |
| GND         | GND             |
| TRIG        | D9              |
| ECHO        | D10             |

### Flying Fish IR Sensor

| IR Sensor Pin | Arduino Uno Pin |
| ------------- | --------------- |
| VCC           | 5V              |
| GND           | GND             |
| OUT           | D2              |

---

## 📏 Sensor Placement

* Distance between Ultrasonic Sensor and IR Sensor: **28 cm**
* Ultrasonic Trigger Distance: **15 cm**

The ultrasonic sensor acts as the starting point of the lap, while the IR sensor acts as the finish line.

---

## ⚙️ How It Works

### Step 1 — Ready State

The Arduino waits for an object to enter the ultrasonic sensor's detection range.

### Step 2 — Lap Start

When an object comes within **15 cm** of the ultrasonic sensor:

* The lap begins.
* The stopwatch starts.
* The Serial Monitor displays:

```text
Lap 1 Started...
```

### Step 3 — Timing

The stopwatch updates every **0.25 seconds** while the object moves toward the IR sensor.

Example:

```text
0.25
0.50
0.75
1.00
```

### Step 4 — Lap Finish

When the IR sensor detects the object:

* The stopwatch stops.
* Travel time is calculated.
* Speed is calculated using:

```text
Speed = Distance / Time
```

The final lap time and speed are displayed in the Serial Monitor.

### Step 5 — Reset

The system waits for the object to leave both sensors before allowing a new lap to begin.

---

## 📸 Project Images

### Hardware Setup

![Hardware Setup](Images/setup.jpg)

### Wiring

![Wiring](Images/wiring.jpg)

### Serial Monitor Output

![Serial Monitor](Images/serial-monitor.png)

---

## 🎥 Demo

Project demonstration video:

`Videos/demo.mp4`

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

The project evolved through multiple versions before reaching a stable and reliable final design.

---

## 🧩 Challenges Faced

During development, several engineering challenges were encountered:

* Continuous sensor triggering caused repeated measurements.
* Trigger distance required calibration for reliable detection.
* Synchronizing the ultrasonic and IR sensors.
* Preventing duplicate lap recordings.
* Creating a clean and minimal Serial Monitor interface.
* Testing the system with moving objects at different speeds.

---

## 📚 Lessons Learned

This project helped me gain practical experience with:

* Arduino programming
* Sensor integration
* Real-time timing using `millis()`
* State-based programming
* Hardware debugging
* Sensor calibration
* Embedded systems development
* Iterative engineering and problem solving
* Human-AI collaborative software development

---

## 🚀 Future Improvements

* OLED display integration
* Bluetooth connectivity
* ESP32 Wi-Fi dashboard
* SD card data logging
* Interrupt-based IR detection
* Average, minimum, and maximum speed statistics
* Multi-lap timing system

---

## 📄 Documentation

A detailed project report is available in:

```text
Docs/Project_Report.pdf
```

---

## 👨‍💻 Author

**Mohammed Moiz Khan**

If you found this project interesting, feel free to ⭐ star the repository.
