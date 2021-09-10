#include <stdio.h>
#include <iostream>

using namespace std;

int main ()
	int op
	cout<<"1. Calcular el area de un cuadrado" << endl;
	cout<<"2. Calcular el area de un triangulo" <<endl;
	cout<<"3. Calcular el area de un circulo" <<endl;
	cout<<endl;
	cout<<"elija una opcion"<<endl;
	cin>>op;
	int lado,base,altura,radio;
	switch(op)
	{
		case 1 :cout<<" Ingrese el lado del cuadrado \n" ;
			cin>>lado;
			cout<<"el area del cuadrado es: " <<lado*lado;
			break;
		case 2 :cout<< "ingrese la base del triangulo \n" ;
			cin>>base;
			cout<< "ingrese la altura dek triangulo \n" ;
			cin>>altura;
			cout<<"El area del triangulo es: "<<base*altura/2;
			break;
