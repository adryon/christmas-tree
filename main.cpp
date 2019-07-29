#include <iostream>
#include <windows.h>
#define l 6z00
#define p 300
#define o 150
#define s 70
using namespace std;

int n,lu,i=1,port[2][25]={{840,840,840,840,840,840,840,927,749,792,840,893,893,893,893,893,840,840,840,840,792,792,840,792,927},{o,o,p,o,o,l,o,o,o,o,l,o,o,o,o,o,o,o,o,o,o,o,o,p,450}};

void SetScreen(int x, int y, int color)
{
	COORD Position={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Position);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}

void DrawLights(int x, int y)
{
	SetScreen(36,5,x); cout<<"*"; SetScreen(35,6,x); cout<<"*"; SetScreen(34,7,x); cout<<"*"; SetScreen(33,8,x); cout<<"*"; SetScreen(31,9,x); cout<<"*";
	SetScreen(40,11,x); cout<<"*"; SetScreen(38,12,x); cout<<"*"; SetScreen(36,13,x); cout<<"*"; SetScreen(34,14,x); cout<<"*"; SetScreen(32,15,x); cout<<"*"; SetScreen(30,16,x); cout<<"*"; SetScreen(27,17,x); cout<<"*";
	SetScreen(44,19,x); cout<<"*"; SetScreen(42,20,x); cout<<"*"; SetScreen(40,21,x); cout<<"*";
	SetScreen(38,7,y); cout<<"*"; SetScreen(37,8,y); cout<<"*"; SetScreen(36,9,y); cout<<"*"; SetScreen(34,10,y); cout<<"*"; SetScreen(32,11,y); cout<<"*"; SetScreen(30,12,y); cout<<"*"; SetScreen(28,13,y); cout<<"*";
	SetScreen(42,15,y); cout<<"*"; SetScreen(40,16,y); cout<<"*"; SetScreen(38,17,y); cout<<"*"; SetScreen(36,18,y); cout<<"*"; SetScreen(34,19,y); cout<<"*"; SetScreen(32,20,y); cout<<"*"; SetScreen(30,21,y); cout<<"*";
}

void DeleteWish(int i)
{
	SetScreen(55,4+i,0); cout<<"               ";
	SetScreen(5,4-i,0); cout<<"             ";
	SetScreen(5,20+i,0); cout<<"               ";
	SetScreen(55,20-i,0); cout<<"           ";
}

void DrawWish(int i)
{
	SetScreen(55,4+i,107); cout<<"CRACIUN FERICIT";
	SetScreen(5,4-i,110); cout<<"FELIZ NAVIDAD";
	SetScreen(5,20+i,26); cout<<"MERRY CHRISTMAS";
	SetScreen(55,20-i,77); cout<<"JOYEUX NOEL";
}

void DrawTree()
{
	SetScreen(1,0,26); cout<<"Sima Tudor va ureaza tuturor un Craciun fericit si un an nou plin de bucurii.";
	SetScreen(35,3,254); cout<<" ";
	SetScreen(35,4,32); cout<<" ";
	SetScreen(34,5,32); cout<<"   ";
	SetScreen(33,6,32); cout<<"     ";
	SetScreen(32,7,32); cout<<"       ";
	SetScreen(31,8,32); cout<<"         ";
	SetScreen(29,9,32); cout<<"             ";
	SetScreen(32,10,32); cout<<"       ";
	SetScreen(30,11,32); cout<<"           ";
	SetScreen(28,12,32); cout<<"               ";
	SetScreen(26,13,32); cout<<"                   ";
	SetScreen(30,14,32); cout<<"           ";
	SetScreen(28,15,32); cout<<"               ";
	SetScreen(26,16,32); cout<<"                   ";
	SetScreen(24,17,32); cout<<"                       ";
	SetScreen(28,18,32); cout<<"               ";
	SetScreen(26,19,32); cout<<"                   ";
	SetScreen(24,20,32); cout<<"                       ";
	SetScreen(22,21,32); cout<<"                           ";
	SetScreen(32,22,64); cout<<"       ";
	SetScreen(32,23,64); cout<<"       ";
	SetScreen(32,24,64); cout<<"       ";
	SetScreen(41,24,203); cout<<(char)196<<(char)196<<(char)196<<(char)197<<(char)196<<(char)196<<(char)196;
	SetScreen(26,22,203); cout<<" "<<(char)179<<" "; SetScreen(26,23,203); cout<<(char)196<<(char)197<<(char)196; SetScreen(26,24,203); cout<<" "<<(char)179<<" ";
}

int main()
{
	DrawTree();
	while (1)
	{
		DeleteWish(i);
		i*=(-1);
		DrawWish(i);
		DrawLights(44,41); Beep(port[0][(n++)%25],port[1][(lu++)%25]); Sleep(s);
		DrawLights(43,46); Beep(port[0][(n++)%25],port[1][(lu++)%25]); Sleep(s);
		DrawLights(45,47); Beep(port[0][(n++)%25],port[1][(lu++)%25]); Sleep(s);
	}
	return 0;
}
