#include <graphics.h>
#include <stdlib.h>
#include <dos.h>
#include <conio.h>

void textScreenSaver() {
    int gd = DETECT, gm;
    char text[] = "BUGGATI!";
    int maxX, maxY, midX, midY;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    maxX = getmaxx();
    maxY = getmaxy();
    midX = maxX / 2;
    midY = maxY / 2;

    while (!kbhit()) {
        setcolor(rand() % 15 + 1);
	settextstyle(rand() % 10, rand()%10, rand() % 4 + 1);
        outtextxy(rand() % maxX, rand() % maxY, text);
	delay(200);  // Adjust the delay to control the speed
	//cleardevice();
    }
    closegraph();
}

int main() {
    textScreenSaver();
    return 0;
}
