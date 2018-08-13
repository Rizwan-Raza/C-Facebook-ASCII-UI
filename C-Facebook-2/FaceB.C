#include<stdio.h>
#define BACK 15
#define HEAD 12
#define BRDR 1
#define BXRDR 7
#define TXET 0
#include"rizzu\T2GCC.H"
#include"rizzu\grphcs.h"
#include<conio.h>
#include"rizzu\alphaxy.h"
int main()
{
	int i;
	char un[10]={"Anonymous"},pass[22]={"*********************"};
	setbkcolor(BACK);
	setConSize(148,44);
	clrscr();
	setbkcolor(BACK);
	drawbgcolor(1,1,147,7,1,1);
	//drawBox2(2,3,21,1,1,15);
	textcolor(15);
	gotoxy(44,4);
	printf("facebook");
	gotoxy(92,2);
	printf("Email or Phone");
	gotoxy(116,2);
	printf("Password");
	gotoxy(92,6);
	printf("%c Keep me logged in.",177);
	gotoxy(116,6);
	textcolor(11);
	printf("Forgot your password");
	gotoxy(140,4);
	printf("Log In");
	drawBox(91,3,22,1,1,15);
	drawBox(115,3,22,1,1,15);
	drawBox(139,3,6,1,1,15);
	drawBox2(1,1,146,41,BACK,TXET);
	drawXline212(1,7,146,BACK,TXET);
//	drawYline112(49,7,35,BACK,TXET);
	draw_W(12,8,' ',12,0);
	draw_e(21,8,' ',12,0);
	draw_l(27,8,' ',12,0);
	draw_c(32,8,' ',12,0);
	draw_o(38,8,' ',12,0);
	draw_m(44,8,' ',12,0);
	draw_e(54,8,' ',12,0);
	draw_t(64,8,' ',12,0);
	draw_o(70,8,' ',12,0);
	draw_T(15,16,' ',12,0);
	draw_h(22,16,' ',12,0);
	draw_e(28,16,' ',12,0);
	draw_B(38,16,' ',12,0);
	draw_a(44,16,' ',12,0);
	draw_b(50,16,' ',12,0);
	draw_a(56,16,' ',12,0);
	draw_single_qoute(62,16,' ',12,0);
	draw_s(66,16,' ',12,0);
	draw_F(22,24,' ',12,0);
	draw_a(26,24,' ',12,0);
	draw_c(32,24,' ',12,0);
	draw_e(38,24,' ',12,0);
	draw_b(44,24,' ',12,0);
	draw_o(50,24,' ',12,0);
	draw_o(56,24,' ',12,0);
	draw_k(62,24,' ',12,0);
	draw_B(3,33,' ',0,7);
	draw_y(9,33,' ',0,7);
	draw_colon(15,33,' ',0,7);
	draw_R(21,33,' ',1,7);
	draw_i(27,33,' ',1,7);
	draw_z(32,33,' ',1,7);
	draw_w(38,33,' ',1,7);
	draw_a(46,33,' ',1,7);
	draw_n(52,33,' ',1,7);
	draw_R(62,33,' ',1,7);
	draw_a(68,33,' ',1,7);
	draw_z(74,33,' ',1,7);
	draw_a(80,33,' ',1,7);
	textcolor(TXET);
    textbackground(BACK);
	gotoxy(92,9);
	printf("Create an account");
	gotoxy(91,11);
	printf("It's free and always will be.");
	drawBox(90,12,19,1,BACK,BXRDR);
	drawBox(111,12,19,1,BACK,BXRDR);
	for(i=1;i<=3;i++)
	{
		drawBox(90,12+3*i,40,1,BACK,BXRDR);
	}
	drawBox(90,26,6,1,BACK,BXRDR);
	drawBox(98,26,4,1,BACK,BXRDR);
	drawBox(104,26,5,1,BACK,BXRDR);
	textcolor(TXET);
	gotoxy(91,13);
	printf("First name");
	gotoxy(112,13);
	printf("Surname");
	gotoxy(91,16);
	printf("Email or mobile number");
	gotoxy(91,19);
	printf("Re-enter email or mobile number");
	gotoxy(91,22);
	printf("New password");
	gotoxy(91,25);
	printf("Birthday");
	gotoxy(91,27);
	printf("Month%c",31);
	gotoxy(99,27);
	printf("Day%c",31);
	gotoxy(105,27);
	printf("Year%c",31);
	textcolor(BRDR);
	gotoxy(112,26);
	printf("Why do I need to");
	gotoxy(112,27);
	printf("provide my date");
	gotoxy(112,28);
	printf("of birth?");
	gotoxy(95,30);
	textcolor(TXET);
	printf("o Female   o Male ");
	gotoxy(91,32);
	printf("By clicking create account,you are agree");
	gotoxy(91,33);
	printf("to our ");
	textcolor(BRDR);
	printf("Terms");
	textcolor(TXET);
	printf(" and that you have read our");
	gotoxy(91,34);
	textcolor(BRDR);
	printf("Data Policy");
	textcolor(TXET);
	printf(", including our ");
	textcolor(BRDR);
	printf("Cookie Use.");
	drawBox(99,36,17,1,2,15);
	gotoxy(100,37);
	printf("Create an account");
	drawXline111(90,39,36,BACK,BXRDR);
	textcolor(1);
	gotoxy(91,40);
	printf("Create a Page");
	textcolor(TXET);
	printf(" for a celebrity,");
	gotoxy(91,41);
	printf("band or business.");
	gotoxy(92,4);
	textcolor(15);
	textbackground(1);
	fflush(stdin);
	gets(un);
	gotoxy(116,4);
	for(i=0;i<22;i++)
	{
		pass[i]=getche();
		if(pass[i]=='\0'||pass[i]=='\n'||pass[i]=='\r'||pass[i]=='\f')
            break;
		delay(100);
		gotoxy(116+i,4);
		printf("%c",249);
	}
	pass[i]=0;
	gotoxy(42-i/2,6);
	printf("Your Password is %s",pass);
	getche();
	gotoxy(1,2);
	return 0;
}
