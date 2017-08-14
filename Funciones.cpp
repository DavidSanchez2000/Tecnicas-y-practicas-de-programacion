# include <iostream>
#include "Funciones.h"
using namespace std;
int Potencia (int a , int n){
	if(n==0){
		return 1;
	}
	else{
		return a*Potencia(a,n-1);
	}
}

int BusquedaSecuencial(int a[],int n, int k){
	for(int i=0; i < k ; i ++){
		if(a[i] == n ){
		
			cout << "Encontrado!!!! :v ";
			return 0;
		}
}
cout << "Numero No Encontrado";
return 0;
}
