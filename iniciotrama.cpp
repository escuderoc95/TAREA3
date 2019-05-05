#include "trama.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

using namespace std;


int main()
{
   const int size=20;
   int arreglo[size];
   int repetir=1;


   inicializar(arreglo,size);
   imprimir(arreglo,size);
   cout<<endl;
   cout<<"Cantidad de veces que desea cifrar la trama: "<<endl;
   cin>>repetir;

   cout<<endl;

   cipherData(arreglo,repetir);


   
   return 0;
   
}
