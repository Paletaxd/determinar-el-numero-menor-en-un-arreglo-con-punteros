#include <iostream>
#include <conio.h>

using namespace std;

int main(void) {

	int qnt;
	int array[256];
	int *ptr;
	int low = 99999;
	int pos;

	cout << "\nIngrese el numero de elementos para el arreglo: ";
	cin >> qnt;

	cout << "" << endl;

	for (int i = 0; i < qnt; i++) {
		cout << "Ingrese un numero[" << i << "]: ";
		cin >> array[i];
	}

	ptr = array;

	for (int i = 0; i < qnt; i++) {
		if (*ptr < low) {
			low = *ptr;
			pos = i;
		}
		ptr++;
	}

	cout << "\nEl numero menor del arreglo es: array[" << pos << "]: " << low << endl;

	getch();
	return 0;
}