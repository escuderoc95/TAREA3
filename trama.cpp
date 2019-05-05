//#include "trama.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

void cipherData(int trama[20], int repeticion)
{
    int trama1[20];
    int copiatrama[20];
    const int size=20;

 for(int i=0;i<size;i++)
  {
        trama1[i]=trama[i];
   }
    for(int i=0;i<repeticion;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(j==0)
            {
                copiatrama[j]=trama1[19]-trama1[1];
            }
            else if(j==19)
            {
                copiatrama[j]=trama1[18]+trama1[0];
            }
            else if(j%2==0)
            {
                copiatrama[j]=trama1[j-1]-trama1[j+1];
            }
            else
            {
                copiatrama[j]=trama1[j-1]+trama1[j+1];
            }
        }
    }
    cout<<"Trama Completa Despues del Cifrado: "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<copiatrama[i]<<" ";
    }
    cout<<endl;
}
void inicializar(int *arreglo_aleatorio, const int size)
{
    srand( static_cast<unsigned>(time(nullptr)));
    for(int i=0;i<size;i++)
    {
        *arreglo_aleatorio=(rand()%500-1);
        arreglo_aleatorio++;
    }
}
void imprimir(int *arreglo, const int size)
{
    cout<<"La Trama Original:"<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<*arreglo<<" ";
        arreglo++;
    }
    cout<<endl;
}




