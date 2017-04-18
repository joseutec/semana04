#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    
    
    
    int arreglo[5] = {3,4,5,6,7};
    
    //acceder a los valores
    cout<< x<< endl;
    
    //acceder a un arreglo
    cout<< arreglo[0] << endl; // accediendo al primer arreglo (el arreglo emiez con 0 )
    cout<< arreglo[4] << endl; // accediendo al ultimo arreglo
    
    // bucle
    for(auto i: arreglo)
    {
        cout<< i <<endl;
    }
    
    
    
    
    
    
    return 0;
}