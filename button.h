// Truong Quoc Huy 1511305
#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>


#define BUTTON1 12
#define BUTTON2 4
#define LED1 1
#define LED2 3
#define LED3 15
#define LED4 13
#define LED5 12
#define LED6 14
#define LED7 2


void readButton1();
void readButton2();
void xuatled(unsigned int);

extern boolean fbutton1, fbutton2, fbutton1pressed1s, fbutton1pressed3s, fbutton2pressed1s, fbutton2pressed3s;
extern unsigned int count1, count2, count3, count4, count5, count6, value;

#endif
