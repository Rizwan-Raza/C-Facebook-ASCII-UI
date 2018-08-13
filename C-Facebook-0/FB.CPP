#include<iostream>
#include<conio.h>
#include<stdio.h>
#define BACK 0
#include"rizzu\t2gcc.h"
#include"rizzu\alphaxy.h"
using namespace std;
void drawBox(int,int,int,int);
void drawXline111(int,int,int);
void drawBox2(int,int,int,int);
void drawXline212(int,int,int);
void drawYline112(int,int,int);
int main()
{
	int i;
	char un[10]={"Anonymous"},pass[10]={"*********"};
	clrscr();
	drawBox2(5,2,21,1);
	gotoxy(7,3);
	cout<<"Welcome to Facebook"<<endl;
	gotoxy(32,3);
	cout<<"Username:"<<endl;
	gotoxy(52,3);
	cout<<"Password:"<<endl;
	drawBox(40,2,10,1);
	drawBox(61,2,10,1);
	drawBox(73,2,5,1);
	gotoxy(74,3);
	cout<<"Login"<<endl;
	drawBox2(1,1,78,21);
	drawXline212(1,5,78);
	drawYline112(49,5,17);
	draw_B(7,8,'B', 0, 15);
	draw_A(13,8,'A', 0, 15);
	draw_B(20,8,'B', 0, 15);
	draw_A(26,8,'A', 0, 15);
	draw_single_qoute(32,8,'\'', 0, 15);
	draw_S(37,8,'S', 0, 15);
	draw_F(2,16,'F', 0, 15);
	draw_A(6,16,'A', 0, 15);
	draw_C(13,16,'C', 0, 15);
	draw_E(19,16,'E', 0, 15);
	draw_B(25,16,'B', 0, 15);
	draw_O(31,16,'O', 0, 15);
	draw_O(37,16,'O', 0, 15);
	draw_K(43,16,'K', 0, 15);
	gotoxy(60,6);
	cout<<"Sign Up";
	gotoxy(50,7);
	cout<<"It's free and always will be.";
	drawBox(50,8,13,1);
	drawBox(65,8,13,1);
	for(i=1;i<=3;i++)
	{
		drawBox(50,8+3*i,28,1);
	}
	drawBox(59,20,6,1);
	drawBox(67,20,4,1);
	drawBox(73,20,5,1);
	gotoxy(51,9);
	cout<<"First name";
	gotoxy(66,9);
	cout<<"Last name";
	gotoxy(51,12);
	cout<<"Email or mobile number";
	gotoxy(51,15);
	cout<<"Re-enter email or mobile no.";
	gotoxy(51,18);
	cout<<"New password";
	gotoxy(51,21);
	cout<<"Birthday";
	gotoxy(60,21);
	cout<<"Month"<<(char)31;
	gotoxy(68,21);
	cout<<"Day"<<(char)31;
	gotoxy(74,21);
	cout<<"Year"<<(char)31;
	gotoxy(41,3);
	cin>>un;
	gotoxy(62,3);
	for(i=0;i<10;i++)
	{
		pass[i]=getch();
		gotoxy(62+i,3);
		cout<<"*"<<endl;
	}
	pass[i]=0;
	gotoxy(17-i/2,6);
	cout<<"Your Password is "<<pass<<endl;
	getch();
	return 0;
}



//Function to draw box using (x,y) coordinates and lenght and breadth of box
void drawBox(int x,int y,int lenght,int breadth)
{
	int i,j;
	char d=196,p=179,c11=218,c10=191,c01=192,c00=217;
	gotoxy(x,y);                    //left top corner.
	cout<<c11<<endl;                //left top corner.
	gotoxy(x+lenght+1,y);           //right top corner.
	cout<<c10<<endl;                //right top corner.
	gotoxy(x,y+breadth+1);          //left bottom corner.
	cout<<c01<<endl;                //left bottom corner.
	gotoxy(x+lenght+1,y+breadth+1); //right bottom corner.
	cout<<c00<<endl;                //right bottom corner.
	for(i=x+1;i<x+lenght+1;i++)
	{
		gotoxy(i,y);
		cout<<d<<endl;
		gotoxy(i,y+breadth+1);
		cout<<d<<endl;
	}
	for(j=y+1;j<y+breadth+1;j++)
	{
		gotoxy(x,j);
		cout<<p<<endl;
		gotoxy(x+lenght+1,j);
		cout<<p<<endl;
	}
}
//Function to draw line using (x,y) coordinates and lenght of the line.
void drawXline111(int x,int y,int lenght)
{
	int i;
	char d=196,c1=195,c0=180;
	gotoxy(x,y);                //left corner.
	cout<<c1<<endl;             //left corner.
	gotoxy(x+lenght+1,y);       //right corner.
	cout<<c0<<endl;             //right corner.
	for(i=1;i<lenght+1;i++)
	{
		gotoxy(x+i,y);
		cout<<d<<endl;
	}
}
//Function to draw box using (x,y) coordinates and lenght and breadth of box
void drawBox2(int x,int y,int lenght,int breadth)
{
	int i,j;
	char d=205,p=186,c11=201,c10=187,c01=200,c00=188;
	gotoxy(x,y);                    //left top corner.
	cout<<c11<<endl;                //left top corner.
	gotoxy(x+lenght+1,y);           //right top corner.
	cout<<c10<<endl;                //right top corner.
	gotoxy(x,y+breadth+1);          //left bottom corner.
	cout<<c01<<endl;                //left bottom corner.
	gotoxy(x+lenght+1,y+breadth+1); //right bottom corner.
	cout<<c00<<endl;                //right bottom corner.
	for(i=x+1;i<x+lenght+1;i++)
	{
		gotoxy(i,y);
		cout<<d<<endl;
		gotoxy(i,y+breadth+1);
		cout<<d<<endl;
	}
	for(j=y+1;j<y+breadth+1;j++)
	{
		gotoxy(x,j);
		cout<<p<<endl;
		gotoxy(x+lenght+1,j);
		cout<<p<<endl;
	}
}
//Function to draw horizontal line using (x,y) coordinates and lenght of the line.
void drawXline212(int x,int y,int lenght)
{
	int i;
	char d=196,c1=199,c0=182;
	gotoxy(x,y);                //left corner.
	cout<<c1<<endl;             //left corner.
	gotoxy(x+lenght+1,y);       //right corner.
	cout<<c0<<endl;             //right corner.
	for(i=1;i<lenght+1;i++)
	{
		gotoxy(x+i,y);
		cout<<d<<endl;
	}
}
//Function to draw vertical line using (x,y) coordinates and lenght of the line.
void drawYline112(int x,int y,int height)
{
	int i;
	char p=179,c1=194,c0=207;
	gotoxy(x,y);                //left corner.
	cout<<c1<<endl;             //left corner.
	gotoxy(x,y+height+1);       //right corner.
	cout<<c0<<endl;             //right corner.
	for(i=1;i<height+1;i++)
	{
		gotoxy(x,y+i);
		cout<<p<<endl;
	}
}
