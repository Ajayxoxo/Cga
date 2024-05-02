#include<iostream.h>
#include<dos.h>
#include<graphics.h>
#include<conio.h>
#include"buglett.h"


void BugattiDesign();
void animation();
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	cout<<getmaxx()/2<<" "<<getmaxy()/2;
	BugattiDesign();
	animation();
	getch();
}
void road()
{
int i,j;
	for(i=480,j=1;i>=380;i--,j++)
	{
		line(220+j,i,430-j,i);
		delay(1);
	}
}
void animation()
{
int i,j;
	for(i=0;i<=10;i++)
	{
		setcolor(WHITE);
		road();
		setcolor(BLACK);
		road();
	}
}

void BugattiDesign()
{
       //	line(0,479,700,479);
	//line(0,0,700,0);
	//upperbody
	ellipse(320,140,0,180,150,30);
	ellipse(320,180,180,360,170,30);
	line(170,140,150,180);
	line(470,140,490,180);
	//upperbody details
	ellipse(320,150,0,180,155,30);
	ellipse(320,175,180,360,165,30);
	//bonut
	ellipse(150,190,90,180,50,12);
	ellipse(490,190,0,90,50,12);

	ellipse(102,290,90,200,20,100);
	ellipse(540,290,340,90,20,100);

	//bumper
	ellipse(320,325,180,360,236,30);
	ellipse(321,350,180,360,232,30);

	//style
	line(320,210,320,265);
	ellipse(350,180,180,250,200,100);
	ellipse(290,180,290,360,200,100);
	line(85,260,270,300);
	line(370,300,560,260);
	//andrew tate
	//ellipse(0,360);

	//symbol
	ellipse(320,300,0,180,50,35);
	line(270,300,280,355);
	line(370,300,360,355);
	outtextxy(295,300,"BUGATTI");
	ellipse(320,303,0,360,37,9);

	//airintake
	ellipse(110,340,0,90,150,30);
	ellipse(260,310,180,270,150,30);
	//line(150,180,280,280);
	ellipse(530,340,90,180,150,30);
	ellipse(380,310,270,360,150,30);

	//road
	line(0,325,85,275);
	line(640,325,560,275);



}


