#include "stdafx.h"
#include "iostream"
#include "Plansza.h"

void Plansza::wyswietlPlansze(){
	Obiekt::gotoxy(1, 1);
	for (int i = 0; i < plansza.size(); i++){
		cout << plansza[i] << endl;
	}
}