#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

#include <LEDBiColor.h>

double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
int puertoA = 10;

int puertoB = 20;
int puertoC = 30;
int puertoD = 40;
int puertoE = 50;
int puertoF = 60;
int puertoG = 0;
int puertoH = 1;
LEDBiColor ledbicolor = LEDBiColor();

void setup(){
    for(int __i__=0;__i__<10;++__i__)
    {
        _delay(1);
        if(1 == 1){
            if(2 == 1){
                ledbicolor.encenderRojo(10);
            }
            if(2 == 2){
                ledbicolor.encenderVerde(10);
            }
        }
        if(1 == 0){
            ledbicolor.apagar(10);
        }
        _delay(1);
        if(1 == 1){
            if(1 == 1){
                ledbicolor.encenderRojo(10);
            }
            if(1 == 2){
                ledbicolor.encenderVerde(10);
            }
        }
        if(1 == 0){
            ledbicolor.apagar(10);
        }
    }
}

void loop(){
    _loop();
}

void _delay(float seconds){
    long endTime = millis() + seconds * 1000;
    while(millis() < endTime)_loop();
}

void _loop(){
}