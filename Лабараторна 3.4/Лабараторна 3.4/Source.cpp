// Lab_03_4.cpp
// < Царук В'ячеслав >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 25
#include <iostream>
using namespace std;
int main()
{
	double R; // значення радіуса
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y <= sqrt(R*R-x*x) && y <= x+R && x<=0) || 
		(y <= sqrt(R * R - x * x) && y >=0 && x >= 0 ))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}