#include<iostream>

using namespace std;

void main()
{
	int primVariable = 10; //declaracion de variable
	int* puntero = &primVariable; //obtiene la direccion de primVariable  y la guarda en un puntero

	cout << "Primer valor antes del cambio "<< primVariable << endl; //imprime el primer valor de primVariable 
	cout << "Cambia el valor por:";//imprime un texto
	cin >> *puntero;//recibe lo que ingresa el usuario en el puntero por lo que este afecta a primVariable 
	cout << "Valor despues del cambio "<< primVariable << endl; //imprime el nuevo valor de primVariable 

}