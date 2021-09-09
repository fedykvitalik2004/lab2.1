//Lab_02.cpp
//Федик Віталій
//Лабораторна робота №2.1.
//Лінійні програми
//Варіант 11
#include <iostream>
using namespace std;
int main()
{
	double x; //вхідний параметр
	double z1; //результат обчислення 1-го виразу
	double z2; //результат обчислення 2-го виразу
	cout << "x="; cin >> x;
	z1 = (1 - 2 * sin(x) * sin(x)) / (1 + sin(2 * x));
	z2 = (1 - tan(x)) / (1 + tan(x));
	cout << endl;
	cout << "z1=" << z1 << endl;
	cout << "z2=" << z2 << endl;
	cin.get();
	return 0;
}