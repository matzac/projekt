// program.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include "iostream"
#include "windows.h"
#include "Plansza.h"
#include "Obiekt.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Plansza p = Plansza("plansza.txt");
	Obiekt wilk = Obiekt(3, 3);
	int i = 0;
	do{
		p.wyswietlPlansze();
		wilk.show();
		wilk.move(_getch());
	}
	while (i == 0);
	_getch();
	return 0;
}