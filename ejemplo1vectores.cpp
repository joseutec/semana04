#include <iostream>
using namespace std;
#include <vector>
using namespace std;

int main()
{
    
    //crear el vector
    vector<int> vec; //c = {1,4,5,3,10,200,21};
    
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(5);
    
    // tamaño de vectores
    cout<<"el tamaño es:" << vec.size()<< endl;
    
    for(auto i: vec)
    {
        cout << i << endl;
    }
    
   return 0; 
    
    
    
}