#include <StepperMotor.h>

StepperMotor motor(6,7,8,9);

void setup(){
  Serial.begin(9600);
  motor.setStepDuration(1);
}

void loop(){
  // 4096 is one rotation
  
  motor.step(4096);
//  delay(2000);
//  motor.step(-4100);
//  delay(2000);


//  motor.step(-68);
//  delay(1000);

//  motor.step(315);
//  delay(100);
}

