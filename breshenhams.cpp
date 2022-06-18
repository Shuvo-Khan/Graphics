#include<iostream>
#include<graphics.h>
using namespace std;

int main(){
     int gd = DETECT,gm;
     initgraph(&gd, &gm," ");
     float x1,y1,x2,y2;
     int colorCode;

     cout <<"Enter the X1: \n";
     cin >> x1;
     cout <<"Enter the X2: \n";
     cin >> x2;
     cout <<"Enter the Y1: \n";
     cin >> y1;
     cout <<"Enter the Y2: \n";
     cin >> y2;
     cout <<"Enter the color code: \n";
     cin >> colorCode;

     float dellX = abs(x2-x1);
     float dellY = abs(y2-y1);
     float m = dellY/dellX;
     float pk = (2*dellY) - dellX;

     bool conditionForLoop = true;
     for(int i = 0; conditionForLoop == true; i++){
        putpixel(x1,y1,colorCode);

        if(x1 == x2 || y1 == y2){
            conditionForLoop = false;
        }
        if(pk < 0){
            pk = pk + (2*dellY);
            x1 = x1+1;
            y1 = y1;
        }
        else{
            pk = pk+(2*dellY) - (2*dellX);
            x1 = x1+1;
            y1 = y1+1;
        }
        delay(100);
     }









}
