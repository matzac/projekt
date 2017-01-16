#ifndef OBIEKT_H
#define OBIEKT_H

#include "stdafx.h"
#include "vector"
#include "string"
#include "fstream"
#include "iostream"
#include "conio.h"
#include "windows.h"
using namespace std;

const int UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77;

class Obiekt{
public: 
	COORD wsp;

	Obiekt(int x, int y){
		this->wsp.X = x;
		this->wsp.Y = y;
	}

	void move(char a);

	void show();
	static void gotoxy(int x, int y);
};

#endif