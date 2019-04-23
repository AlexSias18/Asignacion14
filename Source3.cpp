#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int x = 1;
	int b = 1;
	int n, a;
	int suma = 0;

	cout << "Ingrese el valor de n:" << endl;
	cin >> n;
	cout << "Ingrese el valor de a:" << endl;
	cin >> a;

	if (n < 0 || a < 0)
	{
		cout << "ERROR INGRESE OTRO VALOR" << endl;


	}
	else
	{
		while (x <= n)
		{
			suma = suma + a * (b);
			b = 2 * x;
			x++;
		}

		cout << "La suma final : " << suma << endl;
	}
	system("pause");
	return 0;
}