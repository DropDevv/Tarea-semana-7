#include <iostream>

using namespace std;

int main()
{
	int numero = 10; //declaracion de variable

	int* puntero = &numero; //puntero declarado

	//mostrar la direccion de la variable numero mediante el puntero
	cout << "Direccion de memoria de la variable 'numero': " << puntero << endl;

	//mostrar el valor de la variable numero mediante el puntero
	cout << "Valor de la variable 'numero' mediante el puntero: " << *puntero << endl;

	return 0;
}
