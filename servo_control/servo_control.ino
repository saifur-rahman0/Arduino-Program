#include <Servo.h>
float ByteReceived;
Servo s;
void setup() {
  // put your setup code here, to run once:
  s.attach(9);
  pinMode(13, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:  

  
    // ByteReceived = Serial.parseFloat();
    // s.write(ByteReceived);
    // Serial.println(ByteReceived);
    // delay(1000);
    
    // if(ByteReceived == 0) // Single Quote! This is a character.
    // {
    //   digitalWrite(13,0);
    //   Serial.print(" LED OFF ");
    //   s.write(0);
    //   delay(1000);
    // }
    
    // if(ByteReceived > 0)
    // {
    //   digitalWrite(13,1);
    //   Serial.print(" LED ON");
    //   s.write(180);
    //   delay(1000);
    // }
    
    // Serial.println();
    // s.write(0);
    // delay(1000);
    // s.write(90);
    // delay(1000);

  for(int i=0; i<= 180; i+=5){
    Serial.println(i);
    s.write(i);
    delay(15);
  }

  for(int i=180; i >= 0; i-=5){
    Serial.println(i);
    s.write(i);
    delay(15);
  }
  

}
