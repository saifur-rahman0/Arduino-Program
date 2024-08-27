#include <Servo.h>
int sensValue= 0;
Servo s;
void setup() {
  // put your setup code here, to run once:
  s.attach(9);
  pinMode(3, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensValue= analogRead(A0);
  int ser=0;
  if(sensValue <= 100){
    s.write(10);
    ser = 1;
  }
  else{
    ser= 0;
    s.write(35);
  }
  digitalWrite(3, 1);
  Serial.print("Sensor: ");
  Serial.print(sensValue);
  Serial.print("  flag: ");
  Serial.println(ser);
 
  delay(50);
 

}
