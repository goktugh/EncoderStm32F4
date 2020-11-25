#include <Stm32F4_Encoder.h>

/*
   =========================================================
  TIM2 <---- Pinout ----> STM32F407V
  CH_A    <-->  PA0
  CH_B    <-->  PA1
  TIM3 <---- Pinout ----> STM32F407V
  CH_A    <-->  PA6
  CH_B    <-->  PA7
  TIM4 <---- Pinout ----> STM32F407V
  CH_A    <-->  PD12
  CH_B    <-->  PD13
  TIM8 <---- Pinout ----> STM32F407V
  CH_A    <-->  PC6
  CH_B    <-->  PC7

  =========================================================


*/



Encoder EncoderInit;


void setup() {

  Serial.begin(115200);  //Serial Pins <--> PA9,PA10
  rcc_config();

  //Set starting count value
  EncoderInit.SetCount(Tim2, 0);
  EncoderInit.SetCount(Tim3, 0);
  EncoderInit.SetCount(Tim4, 0);
  EncoderInit.SetCount(Tim8, 0);
}

// the loop function runs over and over again forever
void loop() {

  Serial.print(EncoderInit.GetCount(Tim2));
  Serial.print(" ");
  Serial.print(EncoderInit.GetCount(Tim3));
  Serial.print(" ");
  Serial.print(EncoderInit.GetCount(Tim4));
  Serial.print(" ");
  Serial.println(EncoderInit.GetCount(Tim8));



}
