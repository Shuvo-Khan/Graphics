#include<iostream>
#include<graphics.h>
using namespace std;
 
void drawcircle(int x0, int y0, int radius)
{
    int x = radius;
    int y = 0;
    int err = 0;
 
    while (x >= y)
    {
putpixel(x0 + x, y0 + y, 11);
putpixel(x0 + y, y0 + x, 11);
putpixel(x0 - y, y0 + x, 11);
putpixel(x0 - x, y0 + y, 11);
putpixel(x0 - x, y0 - y, 11);
putpixel(x0 - y, y0 - x, 11);
putpixel(x0 + y, y0 - x, 11);
putpixel(x0 + x, y0 - y, 11);
 
if (err <= 0)
{
    y += 1;
    err += 2*y + 1;
}
 
if (err > 0)
{
    x -= 1;
    err -= 2*x + 1;
}
    }
}
 
int main()
{
int gdriver=DETECT, gmode, error, x, y, r;
initgraph(&gdriver, &gmode, "char");
 
cout<<"Enter radius of circle: ";
cin>>r;
 
cout<<"Enter co-ordinates of center(x and y): ";
cin>>x>>y;
drawcircle(x, y, r);
 
getch();
closegraph();
}
