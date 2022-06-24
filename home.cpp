#include<iostream>
#include<graphics.h>

int main(){
	int gd = DETECT, gm;
	initgraph(&gd, &gm, " ");
	
	rectangle(100,100,200,200);
	rectangle(200,100,300,200);
	line(150, 50, 100, 100);
	line(150, 50, 200, 100);
	line(150, 50, 250, 50);
	line(250, 50, 300, 100);
	rectangle(120,200,145,115);
	rectangle(230, 130, 260, 160);
	
	getch();
	closegraph();
	
}

