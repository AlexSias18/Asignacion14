#include<iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main() {
	int a, n;
	int suma = 0, b = 1, f = 1;
	cout << "Ingrese el valor de a: " << endl;
	cin >> a;
	cout << "Ingrese el valor de n: " << endl;
	cin >> n;
	if (a > 0 && n > 0)
	{
		while (f <= n)
		{
			suma = suma + (a*b);
			b = 3 * f;
			f++;
		}
		cout << "La suma final es: " << suma << endl;
	}
	else
	{
		cout << "Ingrese los valores nuevamente " << endl;
	}

	system("pause");
}