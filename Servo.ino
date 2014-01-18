#include <Servo.h>

Servo Charizard;

int sensorPin = A0;    // select the input pin for the potentiometer
    // select the pin for the LED

int pos;

void setup() {
  Charizard.attach(9);

}

void loop() {
  pos = map(analogRead(A0),0,1023,0,180);
  
  Charizard.write(pos);
                
}
