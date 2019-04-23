#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
	int a = 1;
	int n;
	int suma = 0;

	cout << "Ingrese n: " << endl;
	cin >> n;

	if (n < 0 || a < 0) {
		cout << "ERROR INGRESE OTRO VALOR" << endl;
	}
	else
	{
		while (a<=n)
		{
			suma = suma + 2 * a;
			a++;
		}
	}
	system("pause");
	return 0;

}