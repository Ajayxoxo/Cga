#include<conio.h>
#include<dos.h>
#include<graphics.h>
void car(int x=0)
{
	rectangle(x+200,250,x+350,280);
	rectangle(x+240,230,x+310,250);
	circle(x+230,290,10);
	circle(x+320,290,10);
}

void main()
{

	int gd=DETECT,gm,x;
	initgraph(&gd,&gm,"C:\\TC\\BGI");


	for(int i=-290;i<=300;i++)
	{
		setcolor(BLACK);
		car(i);
		setcolor(WHITE);
		car(i+1);
		delay(20);
	}
	getch();
}