#include "stdafx.h"
#include "iostream"
#include "Obiekt.h"
#include "windows.h"
void Obiekt::gotoxy(int x, int y)
{
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


char getxy(int x, int y)
{
	Obiekt::gotoxy(x, y);
	char c = '\0';
	CONSOLE_SCREEN_BUFFER_INFO con;
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hcon != INVALID_HANDLE_VALUE &&GetConsoleScreenBufferInfo(hcon, &con))
	{
		DWORD read = 0;
		if (!ReadConsoleOutputCharacterA(hcon, &c, 1, con.dwCursorPosition, &read) || read != 1)
			c = '\0';
	}
	return c;
}

char getxy()
{
	char c = '\0';
	CONSOLE_SCREEN_BUFFER_INFO con;
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hcon != INVALID_HANDLE_VALUE &&GetConsoleScreenBufferInfo(hcon, &con))
	{
		DWORD read = 0;
		if (!ReadConsoleOutputCharacterA(hcon, &c, 1, con.dwCursorPosition, &read) || read != 1)
			c = '\0';
	}
	return c;
}

void Obiekt::move(char a){
		switch (a)
	{
	case UP: { wsp.Y -= 2;
				break; }
	case DOWN: { wsp.Y += 2;
				break; }
	case LEFT: { wsp.X -= 2;
		break; }
	case RIGHT: { wsp.X += 2;
		break; }
	}
}

void Obiekt::show(){
	gotoxy(wsp.X, wsp.Y);
	cout<<'W';
}