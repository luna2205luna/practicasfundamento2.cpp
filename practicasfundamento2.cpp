#include <iostream>
using namespace std;
int main()
{
    int edad = 1;
    int respuesta = 0;

    cout<<"Programa para calcular si el individuo es mayor de edad\n";
    cout<<"Ingrese una edad\n";
    cin >> edad;

    if(edad<=0)
    {
        cout <<"La edad no es valida\n";
    }
    
    else if(edad < 18 )
    {
        cout <<"Usted es menor de edad\n";
    }

    else if(edad>=18)
        {
            cout <<"Usted es mayor de edad\n";
        }

return 0;
    }


