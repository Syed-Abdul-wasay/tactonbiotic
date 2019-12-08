// Include the Servo library 
#include <Servo.h> 
// Declare the Servo pin 
int servoPin1 = 9; 
int servoPin2 = 8;
// Create a servo object 
Servo Servo1;
Servo Servo2; 
String state = ""; 
void setup() { 
   // We need to attach the servo to the used pin number 
   Serial.begin(9600);
   Serial.setTimeout(5);
   Servo1.attach(servoPin1); 
   Servo2.attach(servoPin2);
}
void loop(){ 

    if(Serial.available() > 0){
      
       state = Serial.readString();
       Serial.print(state);
       if (state == "open")
       {
          Servo1.write(0); 
         Servo2.write(180); 
         delay(1000); 
        }
       if (state == "close") 
       {
         Servo1.write(180); 
         Servo2.write(0); 
         delay(1000); 
        }
        
      }
 
}
