# 🌧️ Rain Detection Auto Roof

An Arduino-based automatic roof/cover system that detects rain using a rain sensor and activates a servo motor to close the roof, protecting whatever is underneath.

## 📌 How It Works

A rain sensor module monitors moisture on its surface. When rain is detected (digital output goes LOW), the servo motor rotates to close the roof. When the rain stops and the sensor dries up, the servo returns to its default open position.

- **First rain detected** → Servo moves to 90° (initial close)
- **Continuous rain** → Servo moves to 180° (fully closed)
- **No rain / sensor dry** → Servo returns to 90° (open/normal)

## 🔧 Components

| Component              | Quantity |
|------------------------|----------|
| Arduino Uno            | 1        |
| Rain Sensor Module     | 1        |
| Servo Motor            | 1        |
| Jumper Wires           | As required |

## 📐 Wiring

| Component            | Arduino Pin |
|----------------------|-------------|
| Rain Sensor DO       | Pin 2       |
| Servo Signal         | Pin 9       |

## 🚀 Getting Started

1. Clone this repository:
   ```bash
   git clone https://github.com/danibae006/rain-detection-auto-roof.git
   ```
2. Open `Rain.ino` in the [Arduino IDE](https://www.arduino.cc/en/software).
3. Connect components according to the wiring table above.
4. Upload the sketch to your Arduino board.

## ⚙️ Configuration

Adjust servo angles to match your roof mechanism:

```cpp
myServo.write(90);   // Open / default position
myServo.write(180);  // Fully closed position
```

## 📄 License

MIT License — feel free to use and modify for your own projects.
