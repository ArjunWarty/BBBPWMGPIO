#include<iostream>
#include"pwm.h"      //placed in the current directory for ease of use

using namespace exploringBB;
using namespace std;

int main(){
// PWM pwm("pwm_test_P9_22.15");  // example alternative pin
   PWM pwm("pwm_test_P9_42.12");  // P9_42 MUST be loaded as a slot before use
   pwm.setPeriod(100000);         // Set the period in ns
   pwm.setDutyCycle(25.0f);       // Set the duty cycle as a percentage
   pwm.setPolarity(PWM::ACTIVE_LOW);  // using active low PWM
   pwm.run();                     // start the PWM output
}
