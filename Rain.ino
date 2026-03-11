// ============================================
// Project  : Rain Detection Auto Roof
// Author   : Daniel
// GitHub   : https://github.com/danibae006
// Repo     : https://github.com/danibae006/rain-detection-auto-roof
//
// For wiring & connections, visit the repo (https://github.com/danibae006/rain-detection-auto-roof)
// above and read the README file.
// It contains full wiring diagrams,
// component list, and setup instructions.
// ============================================

#include <Servo.h>

Servo myServo;

const int rainPin  = 2; // Rain sensor DO pin
const int servoPin = 9; // Servo signal pin

bool rainDetectedOnce = false;

void setup() {
  pinMode(rainPin, INPUT);
  myServo.attach(servoPin);

  myServo.write(90); // Initial position
}

void loop() {
  int rainState = digitalRead(rainPin);

  if (rainState == LOW) { // Rain detected
    if (!rainDetectedOnce) {
      myServo.write(90);       // First rain
      rainDetectedOnce = true;
      delay(1000);
    } else {
      myServo.write(180);      // Continuous rain
    }
  } else { // No rain (sensor dry)
    myServo.write(90);         // Back to normal
    rainDetectedOnce = false;
  }

  delay(500);
}
