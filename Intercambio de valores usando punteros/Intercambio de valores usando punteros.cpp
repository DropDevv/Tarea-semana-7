#include<iostream>

using namespace std;

void cambioValor(int* a , int* b)
{
	int temp = *a;// guarda el valor de la direccion de a en la variable temp
	*a = *b; //cambia los valores
	*b = temp; // cambia el valor en b por la varibale temp
}

void main()
{
	int a,b; //declaracion de variables

	cout << "Ingrese el valor de la variable 1:" << endl;//imprime un texto
	cin >> a;//guarda lo que ingreso el usuario
	cout << "Ingrese el valor de la variable 2:" << endl;//imprime un texto
	cin >> b;//guarda lo que ingreso el usuario
	cout << "Valores sin cambiar: "<<a<<" " << b << endl;//imprime un texto con los valores sin cambiar
	
	cambioValor(&a,&b); //ejecuta la funcion y pasanos la direccion de las variables
	cout << "Valores cambiados: " << a << " " << b << endl;//imprime un texto con los valores cambiados
}