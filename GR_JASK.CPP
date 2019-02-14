#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void line_dda(int x1,int y1,int x2,int y2){
float x_rate=x2-x1;
float y_rate=y2-y1;

float steps;
if(abs(x_rate)>abs(y_rate))
steps=abs(x_rate);
else
steps=abs(y_rate);

float x_inc=x_rate/(1.0*steps) ;
float y_inc=y_rate/(1.0*steps);

for(int v=0;v<=steps;v++)
{
	putpixel(int(x1+0.5),int(y1+0.5),7);
	x1=x1+x_inc;
	y1=y1+y_inc;

}
return;
}






int main(){
int gd=DETECT,gm,color;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
//line(225,35,500,35);
// delay(10000)

int tx=0	,ty=-50;

printf("JASKARAN SINGH\n");
printf("02814802717");


line_dda(0+tx,350+ty,5000+tx,350+ty);
circle(150+tx,300+ty,50);
circle(450+tx,300+ty,50);
line_dda(500+tx,300+ty,500+tx,200+ty);
line_dda(100+tx,300+ty,100+tx,200+ty);
line_dda(100+tx,200+ty,200+tx,200+ty);
line_dda(500+tx,200+ty,400+tx,200+ty);
line_dda(400+tx,200+ty,400+tx,100+ty);
line_dda(200+tx,200+ty,200+tx,100+ty);
line_dda(400+tx,100+ty,200+tx,100+ty);
line_dda(300+tx,100+ty,300+tx,200+ty);
line_dda(200+tx,300+ty,400+tx,300+ty);
line_dda(200+tx,200+ty,500+tx,200+ty);
getch();
closegraph();



return 0;
}