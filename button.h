// Truong Quoc Huy 1511305
#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>


#define BUTTON1 5
#define BUTTON2 16
#define LED1 15
#define LED2 13
#define LED3 12
#define LED4 14
#define LED5 2
#define LED6 0
#define LED7 4


void readButton1();
void readButton2();
void xuatled(unsigned int);

extern boolean fbutton1, fbutton2, fbutton1pressed1s, fbutton1pressed3s, fbutton2pressed1s, fbutton2pressed3s;
extern unsigned int count1, count2, count3, count4, count5, count6, value;

#endif
