#include <Servo.h>

// Define the pin connected to the ESC
int escPin = 9;
pinMode(escPin, OuTPUT);

// Create a Servo object
Servo esc;

void setup() {
  // Attach the ESC to the pin
  esc.attach(escPin);

  // Send maximum throttle signal to ESC for calibration
  esc.writeMicroseconds(2000);
  delay(2000); // Delay for ESC to recognize maximum throttle signal

  // Send minimum throttle signal to ESC for calibration
  esc.writeMicroseconds(1000);
  delay(2000); // Delay for ESC to recognize minimum throttle signal
}

void loop() {
  // Set the throttle position to a fixed value for continuous run
  esc.writeMicroseconds(1500); // Adjust this value for desired speed
  delay(5000);
}
