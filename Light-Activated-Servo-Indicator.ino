#include <Servo.h>
int servoPin = 6;
Servo myServo;
int lightPin = A0;
int baudRate = 115200;
String message = "Enter an Angle between 0 and 180";
int lightValue;
int delayTime = 1000;
int value;
void setup() {
  pinMode(lightPin,INPUT);
  myServo.attach(servoPin);
  Serial.begin(baudRate);
 
}

void loop() {
   lightValue = analogRead(lightPin);
  Serial.println(lightValue);
  delay(delayTime);
  Serial.println(message);
  delay(delayTime);
  
  if (lightValue >= 400 && lightValue <500){
    
      analogWrite(servoPin,180);
      Serial.println(" Sun shine day   ");

  }
  else if (lightValue <=100){
     analogWrite(servoPin,0);
      Serial.println("Complete darkness ");
  }
  else if (lightValue <=200 && lightValue > 100){
     analogWrite(servoPin,60);
      Serial.println(" Moon light ");
      }
  else if (lightValue <400 && lightValue > 300){
     analogWrite(servoPin,120);
      Serial.println("Cloudy day ");
      }
    else {
      Serial.println("WRONG INPUT !");
    }

 
}