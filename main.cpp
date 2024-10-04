#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{  vector<int>  v;
    int numero;

    do{
        cout << "Numero [0 termina] : ";
        cin >> numero;
        if( numero !=0)
            v.push_back(numero);
    }while(numero !=0);
    //---- ahora impriminos los datos de vector
    cout << "\n";
    for(int i=0; i< v.size(); i++)
        cout << setw(5)  << v[i];
   //---- ahora recorremos desde el inicio (begin) hasta el final (end)
   cout << "\n";
   for( auto iteradorcito = begin(v); iteradorcito!= end(v); iteradorcito++    )
       cout << setw(5) << *iteradorcito;

    return 0;
}
