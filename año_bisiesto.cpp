#include <iostream>
#include <locale.h>

using namespace std;

/* esta es la funcion dodnde se desarrolla todo el proceso */

void bisiesto(int fecha)
{
    /* aqui se establece la ecuacion de como el año ingresado NO es bisiesto 
    de que si "fecha" no es multiplo de 4 o si la "fecha" es multiplo de 100 y si no lo es de 400
    no va ser un año bisiesto */

    if (fecha % 4 != 0 or (fecha % 100 == 0 && fecha % 400 != 0))
    {
        cout << endl << "El anio " << fecha << " NO es bisiesto" << endl << endl;
    }else
    {
        cout << endl << "El anio " << fecha << " SI es bisiesto" << endl << endl;
    }
}

/* este es el codigo principal */

int main()
{
    int fecha;
    cout << endl << "Determina si un anio es bisiesto" << endl;
    cout << "ingresa un anio: ";
    cin >> fecha;
    /* aqui mando a llamar a la funcion "bisiesto" y le pongo 
    la variable declarada en mi main llamada fecha */
    bisiesto(fecha);
}