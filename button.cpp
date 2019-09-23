#include "button.h"

boolean fbutton1 = false, fbutton2 = false, fbutton1pressed1s = false, fbutton1pressed3s = false, fbutton2pressed1s = false, fbutton2pressed3s = false;
int firstRead1 = 1, secondRead1 = 1, firstRead2 = 1,secondRead2 = 1;
unsigned int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0;
unsigned int value = 0;

// read button 1 func
void readButton1(){
    firstRead1 = secondRead1;
    secondRead1 = digitalRead(BUTTON1);
    if(secondRead1 == firstRead1){
        if(!firstRead1){
            fbutton1 = true;      
            count1++;
            if(count1 >= 100){
                fbutton1pressed1s = true;
                count2++;
                if(count2 > 50){
                    count2 = 0;
                }
            }else if(count1 >= 300){
                fbutton1pressed3s = true;
                count3++;
                if(count3 > 10){
                    count3 = 0;
                }        
            }
        }else{
            fbutton1 = false;
            fbutton1pressed1s = false;
            fbutton1pressed3s = false;
            count1 = 0;
            count2 = 0;
            count3 = 0;
    }
  }   
}

// read button 2 func
void readButton2(){
    firstRead2 = secondRead2;
    secondRead2 = digitalRead(BUTTON2);
    if(secondRead2 == firstRead2){
        if(!firstRead2){
            fbutton2 = true;
            count6++;
            if(count6 >= 100){
                fbutton2pressed1s = true;
                count4++;
                if(count4 > 50){
                    count4 = 0;
                }
            }else if(count6 >= 300){
                fbutton2pressed3s = true;
                count5++;
                if(count5 > 10){
                count5 = 0;
                }        
            }
        }else{
            fbutton2 = false;
            fbutton2pressed1s = false;
            fbutton2pressed3s = false;
            count6 = 0;
            count4 = 0;
            count5 = 0;
    }
    }   
}

// xuat gia tri dem ra 7 led
void xuatled(unsigned int val) {
    digitalWrite(LED1,!bitRead(val,0));
    digitalWrite(LED2,!bitRead(val,1));
    digitalWrite(LED3,!bitRead(val,2));
    digitalWrite(LED4,!bitRead(val,3));
    digitalWrite(LED5,!bitRead(val,4));
    digitalWrite(LED6,!bitRead(val,5));
    digitalWrite(LED7,!bitRead(val,6));
}
