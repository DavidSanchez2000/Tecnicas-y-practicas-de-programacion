#include "Funciones.h"
#include "Funciones.cpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
	int a[]= {2,3,1,4,7,9};
	int e = Potencia(3,4);
	cout << e<<"\n";
	
	int x = BusquedaSecuencial(a,8,6);
	cout << x;
	return 1;
	
}
