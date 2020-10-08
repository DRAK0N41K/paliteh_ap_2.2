#include <iostream>
#include <Windows.h>

#include <cmath>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.);
	double x;
	//double z1;
	double z2;
	cout << "x = ";
	cin >> x;
	
	//z1 = 2 * pow(sin(3 * Pi - 2*x), 2) * pow(cos(5 * Pi + 2*x), 2);
	z2 = (1 / 4) - (1 / 4) * sin((5 / 2) * Pi - 8*x);
	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;	cin.get();
	return 0;
}