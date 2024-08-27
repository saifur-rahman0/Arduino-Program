#include <Wire.h>

#include <MPU6050.h>

#include <Servo.h>

Servo s1, s2;

int s1_pin = 9, s2_pin= 10;

MPU6050 sensor;

int16_t ax, ay, az;

int16_t gx, gy, gz;

void setup()

{

  s1.attach(s1_pin);
  s2.attach(s2_pin);

  Wire.begin();

  Serial.begin(9600);

  Serial.println("Initializing the sensor");

  sensor.initialize();

  Serial.println(sensor.testConnection() ? "Successfully Connected" : "Connection failed");

  delay(1000);

  Serial.println("Taking Values from the sensor");

  delay(1000);
}


void loop()

{

  sensor.getMotion6(&ax, &ay, &az, &gx, &gy, &gz);

  ax = map(ax, -17000, 17000, 0, 180);
  ay= map(ay, -17000, 17000, 0, 180);

  Serial.print("X= ");
  Serial.print(ax);
  Serial.print(" Y= ");
  Serial.println(ay);

  s1.write(ax);
  s2.write(ay);

  delay(10);
}