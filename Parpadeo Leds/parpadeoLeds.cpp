#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

#include <U8glib.h>
#include <LEDBiColor.h>

double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
double cantidadDeSegundos;

int puertoA = 10;
int puertoB = 20;
int puertoC = 30;
int puertoD = 40;
int puertoE = 50;
int puertoF = 60;
int puertoG = 0;
int puertoH = 1;
LEDBiColor ledbicolor = LEDBiColor();

        String strValue;

        U8GLIB_SH1106_128X64 u8g(U8G_I2C_OPT_NONE);

				void draw(){u8g.setFont(u8g_font_unifont);
    								    u8g.setPrintPos(0, 12);
								    u8g.print(strValue);}

void setup(){
    	pinMode(8, OUTPUT);
    if(u8g.getMode() == U8G_MODE_R3G3B2){
    		u8g.setColorIndex(255);}
    	else if (u8g.getMode() == U8G_MODE_GRAY2BIT){
    		u8g.setColorIndex(3);}
    	else if (u8g.getMode() == U8G_MODE_BW){
    		u8g.setColorIndex(1);}
    	else if (u8g.getMode() == U8G_MODE_HICOLOR){
    		u8g.setHiColorByRGB(255,255,255);}
    cantidadDeSegundos = 3;
    for(int __i__=0;__i__<cantidadDeSegundos;++__i__)
    {
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
          strValue = String("Encender Rojo");
                  u8g.firstPage();
    				  do{draw();}
        					while(u8g.nextPage());
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
          strValue = String("Encender Verde");
                  u8g.firstPage();
    				  do{draw();}
        					while(u8g.nextPage());
        _delay(1);
          strValue = String("Desactivar");
                  u8g.firstPage();
    				  do{draw();}
        					while(u8g.nextPage());
        if(0 == 1){
            if(1 == 1){
                ledbicolor.encenderRojo(10);
            }
            if(1 == 2){
                ledbicolor.encenderVerde(10);
            }
        }
        if(0 == 0){
            ledbicolor.apagar(10);
        }
        _delay(1);
        if(0 == 1){
            if(2 == 1){
                ledbicolor.encenderRojo(10);
            }
            if(2 == 2){
                ledbicolor.encenderVerde(10);
            }
        }
        if(0 == 0){
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