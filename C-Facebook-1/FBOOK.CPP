#include<stdio.h>
#define BACK 11
#define HEAD 12
#define BRDR 1
#define TXET 0
#include"rizzu\T2GCC.H"
#include"rizzu\grphcs.h"
#include<conio.h>
#include"rizzu\alphaxy.h"
int main()
{
	int i;
	char un[10]={"Anonymous"},pass[10]={"*********"};
	clrscr();
	setbkcolor(11);
	setConSize(80,32);
	drawbgcolor(1,1,79,7,1,1);
	drawBox2(2,3,21,1,1,15);
	gotoxy(4,4);
	printf("Welcome to Facebook\n");
	gotoxy(26,2);
	printf("Email or phone no.\n");
	gotoxy(50,2);
	printf("Password:\n");
	gotoxy(26,6);
	printf("%c Keep me logged in.\n",177);
	gotoxy(50,6);
	printf("Forgot your password?\n");
	gotoxy(74,4);
	printf("Login\n");
	drawBox(25,3,22,1,1,15);
	drawBox(49,3,22,1,1,15);
	drawBox(73,3,5,1,1,15);
	drawBox2(1,1,78,29,BACK,TXET);
	drawXline212(1,7,78,BACK,TXET);
	drawYline112(49,7,23,BACK,TXET);
	draw_T(15,8,'T',12,0);
	draw_h(22,8,'h',12,0);
	draw_e(28,8,'e',12,0);
	draw_B(7,16,'B',12,0);
	draw_a(13,16,'a',12,0);
	draw_b(20,16,'b',12,0);
	draw_a(26,16,'a',12,0);
	draw_single_qoute(32,16,'\'',12,0);
	draw_s(37,16,'s',12,0);
	draw_F(3,24,'F',12,0);
	draw_a(7,24,'a',12,0);
	draw_c(14,24,'c',12,0);
	draw_e(20,24,'e',12,0);
	draw_b(26,24,'b',12,0);
	draw_o(32,24,'o',12,0);
	draw_o(38,24,'o',12,0);
	draw_k(44,24,'k',12,0);
	gotoxy(60,8);
	textcolor(TXET);
	textbackground(BACK);
	printf("Sign Up");
	gotoxy(50,10);
	printf("It's free and always will be.");
	drawBox(50,11,13,1,BACK,TXET);
	drawBox(65,11,13,1,BACK,TXET);
	for(i=1;i<=3;i++)
	{
		drawBox(50,11+3*i,28,1,BACK,TXET);
	}
	drawBox(59,23,6,1,BACK,TXET);
	drawBox(67,23,4,1,BACK,TXET);
	drawBox(73,23,5,1,BACK,TXET);
	gotoxy(51,12);
	printf("First name");
	gotoxy(66,12);
	printf("Last name");
	gotoxy(51,15);
	printf("Email or mobile number");
	gotoxy(51,18);
	printf("Re-enter email or mobile no.");
	gotoxy(51,21);
	printf("New password");
	gotoxy(50,24);
	printf("Birthday");
	gotoxy(60,24);
	printf("Month%c",31);
	gotoxy(68,24);
	printf("Day%c",31);
	gotoxy(74,24);
	printf("Year%c",31);
	gotoxy(51,26);
	printf("o Male %c  o Female %c",11,12);
	drawBox(57,28,11,1,2,15);
	gotoxy(58,29);
	printf("  Sign Up  ");
	gotoxy(26,4);
	textcolor(15);
	textbackground(1);
	fflush(stdin);
	gets(un);
	gotoxy(50,4);
	for(i=0;i<10;i++)
	{
		pass[i]=getche();
		if(pass[i] == 13) {
			pass[i]='\0';
			break;			
		}
		delay(500);
		gotoxy(50+i,4);
		printf("%c",249);
	}
	pass[i]=0;
	textcolor(TXET);
	textbackground(BACK);
	gotoxy(40 - 17 -i/2,32);
	printf("Your Password is %s",pass);
	getche();
	return 0;
}
