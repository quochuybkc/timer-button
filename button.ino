#include "button.h"
#include <Ticker.h>

enum {state1, state2, state3, state4, state5, state6, state7} estate;

Ticker ticker1, ticker2;

void setup() {
  Serial.begin(115200);
  // set IO pin
  pinMode(BUTTON1,INPUT);
  pinMode(BUTTON2,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(LED7,OUTPUT);

  // set timer interrupt
  ticker1.attach_ms(10,readButton1);
  ticker2.attach_ms(10,readButton2);
}

void loop() {
  // put your main code here, to run repeatedly:
  switch(estate){
    case state1:
      if(fbutton1 || fbutton1 && fbutton2){             
        value++;
        estate = state2;
      }
      if(fbutton2 && value > 0){
        value--;      
        estate = state3;       
      }
      break;
    case state2:     
      if(!fbutton1){
        estate = state1;      
      }else if(fbutton1pressed1s){
        estate = state4;
      }
      break;
    case state3:
      if(!fbutton2){
        estate = state1;      
      }else if(fbutton2pressed1s){
        estate = state6;
      }
      break;    
    case state4:
      if(count2==50){
        value++;
        count2=0;
      }
      if(fbutton1pressed3s){
        estate = state5;
      }
      if(!fbutton1){
        estate = state1;
      }
      break;
    case state5:
      if(count3==10){
        value++;
        count3=0;
      }
      if(!fbutton1){
        estate = state1;
      }   
      break;
    case state6:
      if(count4 == 50 && value > 0){
        value--;
        count4=0;
      }
      else if(fbutton2pressed3s){
        estate = state7;
      }
      if(!fbutton2){
        estate = state1;
      }
      break;
    case state7:
      if(count5 == 10 && value > 0){
        value--;
        count5=0;
      }
      if(!fbutton2){
        estate = state1;
      }
      break;
       
  }
  //xuatled(value);
}
