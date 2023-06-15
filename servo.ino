//sketch created by Akshay Joseph follow me on Instagra: five_volt_player

#include<Servo.h>
Servo Myservo;
int pos=0;

void setup()
{
  pinMode(2,INPUT);
  Myservo.attach(3);
}

void loop()
{
  if(digitalRead(2)==LOW){
    Myservo.write(20);
    
  }
  else
    
 Myservo.write(0);  

}
