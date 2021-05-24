
#include <Servo.h>
#include <Ultrasonic.h> 
#define trigger  5 
#define echo 6 

Servo servo;
Ultrasonic sensor(trigger,echo);

void setup()
{
 servo.attach(3);
 Serial.begin(9600);
 Serial.println("Começando a leitura de dados do sensor...");

}

void loop(){
  float cmMsec;
  int pos=0;
  long microsec = sensor.timing();
  cmMsec = sensor.convert(microsec, Ultrasonic::CM);
  Serial.println(cmMsec);
  delay(1000);
  if (cmMsec >= 16.00){
   for (pos = 0; (pos <= 180 && cmMsec>16);pos += 1) { 
    servo.write(pos);
                  
     delay(15);}
     for (pos = 80; (pos >= 180 && cmMsec<16); pos -= 1) { 
    servo.write(pos); 
                
       delay(15);  } 
  }
  else {
    
    Serial.println("Cheio!");
    
    }
}
