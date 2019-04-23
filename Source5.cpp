#include <iostream>
using namespace std;

// 1/a + 1/a + 1/a + 1/a

int main() {
	int n,a;	
	int i=0, suma = 0;


	cout << "Ingrese el valor de A ";
	cin >> a ;
	cout << "Ingrese el valor de N ";
	cin >> n;

	if (n >= 0 && a > 0) {
		while (i < n)
		{
			suma = suma + 1 / a;
			i++;
		}
		cout << suma;
	}
	else {
		cout << "Error";
	}

	return 0;
}