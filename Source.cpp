// Lab_05_3.cpp 
// < Базарник Максим > 
// Лабораторна робота № 5.3 
//  Функції, що містять розгалуження та цикли з рекурентними співвідношеннями
// Варіант 1
#include <iostream>
#include <cmath>
using namespace std;
double z(const double x);
int main()
{
	double kp, kk, g;
	int n;
	cout << "kp = "; cin >> kp;
	cout << "kk = "; cin >> kk;
	cout << "n = "; cin >> n;
	double dg = (kk - kp) / n;
	double k = kp;
	while (k <= kk)
	{
		g = z(2 * k + 1) + pow(z((2 * k - 1) + sqrt(z(k))), 2);
		cout << k << " " << g << endl;
		k += dg;
	}
	return 0;
}
double z(const double x)
{
	if (abs(x) >= 1)
		return (cos(x) + 1) / (exp(x) + pow(sin(x), 2));
	else
	{
		double S = 0;
		int j = 0;
		double a = x;
		S = a;
		do
		{
			j++;
			double R = -x * x / (2 * j * (2 * j + 1));
			a *= R;
			S += a;
		} while (j < 5);
		return S;
	}
}
