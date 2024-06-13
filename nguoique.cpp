#include <bits/stdc++.h>
#include <graphics.h>
#include <conio.h>
using namespace std;
void nguoi1(int x){
	circle(40+x,293,27);
	line(40+x,320,40+x,426);
	line(40+x,426,13+x,479);
	line(40+x,426,67+x,479);
}
void nguoi2(int x){
	circle(506-x,293,27);
	line(506-x,320,506-x,426);
	line(506-x,426,480-x,479);
	line(506-x,426,533-x,479);
}
void nguoi2_2(int x){
	circle(406-x,293,27);
	line(415-x,320,453-x,426);
	line(453-x,426,373-x,479);
	line(453-x,426,480-x,479);
}
void kiem2(int x,int y){
	line(466-x,400-y,440-x,373-y);
	line(440-x,373-y,445-x,365-y);
	line(440-x,373-y,433-x,380-y);
	line(445-x,365-y,420-x,333-y);
	line(433-x,380-y,408-x,346-y);
	line(420-x,333-y,410-x,330-y);
	line(408-x,346-y,410-x,330-y);
}
void cungten2(int x){
	arc(93+x,346,270,90,28);
	line(93+x,320,93+x,373);
	line(93+x,346,133+x,346);
	line(133+x,346,125+x,333);
	line(133+x,346,125+x,360);
}
void muiten(int x){
	line(146+x,346,176+x,346);
	line(176+x,346,166+x,336);
	line(176+x,346,166+x,356);
}
void muiten2(int x){
	line(426-x,440,440-x,479);
	line(430-x,479,445-x,450);
	line(440-x,470,420-x,460);
}
void nguoithang(int x){
	circle(53-x,293,27);
	line(53-x,320,53-x,426);
	line(53-x,346,27-x,346);
	line(53-x,373,27-x,373);
	line(27-x,346,27-x,353);
	line(27-x,373,27-x,366);
	line(53-x,426,13-x,479);
	line(53-x,426,80-x,479);
}
void draw(int x,int y){
	setcolor(WHITE);
	arc(100-x,100+y,0,180+45,15);
	arc(130-x,100+y,0-45,180,15);
	moveto(89-x,109+y);
	lineto(115-x,130+y);
	lineto(140-x,109+y);
}
void sao(){
	int i=200;
	while(i--){
		int x1=rand()%640;
		int y1=rand()%480;
		int mau=rand()%15;
		putpixel(x1,y1,mau);
		putpixel(x1-1,y1,mau);
		putpixel(x1+1,y1,mau);
		putpixel(x1,y1-1,mau);
		putpixel(x1,y1+1,mau);
		delay(1);
	}
}
main(){
	initwindow(640,480);
//man1 
	nguoi1(0);
	line(40,346,13,373);
	line(13,373,67,400);
	line(40,346,67,400);
	//cung ten 1
	arc(67,400,250,70,28);
	line(80,375,56,427);
	line(67,400,106,426);
	line(106,426,95,410);
	line(106,426,90,425);
	// nguoi 2
	circle(506,293,27);
	line(506,320,506,426);
	line(506,346,480,373);
	line(506,346,533,373);
	line(506,426,480,479);
	line(506,426,533,479);
	//kiem 1
	line(493,373,453,373);
	line(453,373,453,363);
	line(453,373,453,383);
	line(453,363,413,363);
	line(453,383,413,383);
	line(413,363,400,373);
	line(413,383,400,373);
	delay(2000);
	cleardevice();
//man 2
	//nguoi 1
	nguoi1(0);
	line(40,346,93,346);
	line(40,346,66,373);
	line(66,373,93,346);
	cungten2(0);
	//nguoi2
	nguoi2(26);
	line(480,346,453,386);
	line(480,346,493,373);
	line(493,373,466,400);
	kiem2(0,0);
	for(int i=0;i<=240;i+=40){
		muiten(i);
		delay(500);
		cleardevice();
		nguoi1(0);
		line(40,346,93,346);
		line(40,346,66,373);
		line(66,373,93,346);
		cungten2(0);
		nguoi2(26);
		line(480,346,453,386);
		line(480,346,493,373);
		line(493,373,466,400);
		kiem2(0,0);
	}
	muiten2(0);
	delay(50);
	cleardevice();
// man 3
	// nguoi1
	nguoi1(0);
	line(40,346,93,346);
	line(40,346,66,373);
	line(66,373,93,346);
	cungten2(0);
	// nguoi2
	int k;
	k=55;
	kiem2(55,0);
	nguoi2_2(0);
	line(480-k,346,453-k,386);
	line(480-k,346,493-k,373);
	line(493-k,373,466-k,400);
	for(int i=0;i<=200;i+=40){
		muiten(i);
		delay(500);
		cleardevice();
		nguoi1(0);
		line(40,346,93,346);
		line(40,346,66,373);
		line(66,373,93,346);
		cungten2(0);
		int k;
		k=55;
		kiem2(55,0);
		nguoi2_2(0);
		line(480-k,346,453-k,386);
		line(480-k,346,493-k,373);
		line(493-k,373,466-k,400);
	}
	muiten2(60);
	delay(50);
	cleardevice();
// man 4
	// nguoi1
	nguoi1(k);
	line(40+k,346,93+k,346);
	line(40+k,346,66+k,373);
	line(66+k,373,93+k,346);
	cungten2(50);
	// nguoi2
	int a;
	a=110;
	kiem2(a,0);
	nguoi2_2(a/2);
	line(480-a,346,453-a,386);
	line(480-a,346,493-a,373);
	line(493-a,373,466-a,400);
	for(int i=60;i<=140;i+=40){
		muiten(i);
		delay(500);
		cleardevice();
		nguoi1(k);
		line(40+k,346,93+k,346);
		line(40+k,346,66+k,373);
		line(66+k,373,93+k,346);
		cungten2(50);
		int a;
		a=110;
		kiem2(a,0);
		nguoi2_2(a/2);
		line(480-a,346,453-a,386);
		line(480-a,346,493-a,373);
		line(493-a,373,466-a,400);
	}
	muiten2(120);
	delay(100);
	cleardevice();
// man 5
	// nguoi 1
	nguoi1(k);
	line(40+k,346,93+k,346);
	line(40+k,346,66+k,373);
	line(66+k,373,93+k,346);
	cungten2(50);
	// nguoi2
	int b;
	b=165;
	kiem2(b,0);
	nguoi2_2(a);
	line(480-b,346,453-b,386);
	line(480-b,346,493-b,373);
	line(493-b,373,466-b,400);
	muiten(60);
	delay(50);
	cleardevice();
	nguoi1(k);
	line(40+k,346,93+k,346);
	line(40+k,346,66+k,373);
	line(66+k,373,93+k,346);
	cungten2(50);
	kiem2(b,0);
	nguoi2_2(a);
	line(480-b,346,453-b,386);
	line(480-b,346,493-b,373);
	line(493-b,373,466-b,400);
	muiten2(185);
	delay(100);
	cleardevice();
// man 6
	//nguoi1
	nguoi1(k);
	line(40+k,346,93+k,346);
	line(40+k,346,66+k,373);
	line(66+k,373,93+k,346);
	cungten2(50);
	//nguoi2
	nguoi2_2(185);
	line(240,346,220,400);
	line(240,346,200,400);
	line(220,400,180,400);
	line(180,410,180,390);
	line(180,410,140,410);
	line(180,390,140,390);
	line(120,400,140,410);
	line(120,400,140,390);
	cleardevice();
// man 7
	// nguoi 1
	nguoi1(k);
	line(40+k,346,93+k,346);
	line(40+k,346,66+k,373);
	line(66+k,373,93+k,346);
	cungten2(50);
	//nguoi 2
	int l;
	l=25;
	nguoi2_2(185+l);
	line(240-l,346,220-l,400);
	line(240-l,346,200-l,400);
	line(220-l,400,180-l,400);
	line(180-l,410,180-l,390);
	line(180-l,410,140-l,410);
	line(180-l,390,140-l,390);
	line(120-l,400,140-l,410);
	line(120-l,400,140-l,390);
	delay(1000);
	cleardevice();
// man 8
	// nguoi 1
	circle(80,453,27);
	line(107,453,320,479);
	line(147,458,106,479);
	line(147,458,157,430);
	//nguoi2
	nguoi2_2(185+l);
	line(240-l,346,220-l,400);
	line(240-l,346,200-l,400);
	line(220-l,400,180-l,400);
	line(180-l,410,180-l,390);
	line(180-l,410,140-l,410);
	line(180-l,390,140-l,390);
	line(120-l,400,140-l,410);
	line(120-l,400,140-l,390);
	delay(1000);
	// man 9
	circle(80,293,27);
	line(80,320,80,426);
	line(80,373,53,346);
	line(80,373,107,346);
	line(80,426,53,479);
	line(80,426,107,479);
	delay(100);
	cleardevice();
// man10
	nguoithang(-50);
	draw(80,250);
	delay(100);
	cleardevice();
// manket
	sao();
	circle(320,293,27);
	line(320,320,320,426);
	line(320,373,293,346);
	line(320,373,347,346);
	line(320,426,293,479);
	line(320,426,347,479);
	kiem2(160,40);
	settextstyle(3,0,5);
	outtextxy(80,200," code by nhom 14 (-^-)");
	getch();
	closegraph();
}
