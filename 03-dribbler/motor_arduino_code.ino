#include <Servo.h>

Servo motor;

void setup() {
  motor.attach(10);  // Use the appropriate pin
}

void loop() {
  motor.writeMicroseconds(1500);  // Set the pulse width for the center position
  delay(1000);  // Wait for a second

  motor.writeMicroseconds(1000);  // Set the pulse width for minimum speed
  delay(1000);  // Wait for a second

  motor.writeMicroseconds(2000);  // Set the pulse width for maximum speed
  delay(1000);  // Wait for a second
}
