#include <iostream>
using namespace std;

int main()
{
    int arreglo[10] = {1,4,5,3,10,20,200,11,66,67};
    
    // crear la variable max
   int max = arreglo [0];
   
   // recorriamos el arreglo
   for(auto i:arreglo)
   {
       // si la variable max es menor que i; max se convierte en i
       if(max < i)
       max = i;
   }
   
   //presentamos el máximo
   cout << "el valor maximo es:" << max <<endl;
}