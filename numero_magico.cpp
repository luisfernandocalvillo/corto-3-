#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/* esta es la funcion con la que va a trabajar mi programa */

void adivinado(int num)
{
    int inten = 5, adivi = 93;
    do
    {
        cin >> num; 

        /* aqui hago la opcion de si se quiere salir el usuario del programa
        y cuando precione el numero cero se ternina el programa */  

        if (num == 0)
        {
            cout << "vuelva pronto!!" << endl << endl;
            break;
        }

        /* esta poarte se ejecuta cuando el numero ingresado por el usuario
        es mayo al que quiere adivinar y se imprime en la pantalla el mensaje */

        if (num > adivi)
        {
            cout << endl << "El numero a adivinar es menor, intenta de nuevo" << endl;
            inten--;
            cout << "tienes " << inten << " intentos restantes" << endl;
        }
        
        /* aqui es lo mismo que arriba pero al contrario*/

        if (num < adivi)
        {
            cout << endl << "El numero a adivinar es mayor, intenta de nuevo" << endl;
            inten--;
            cout << "tienes " << inten << " intentos restantes" << endl; 
        }
        
        /* y este es el caso en que adivinara el numero */

        if (num == adivi)
        {
            cout << endl << "Felicidades! adivinaste el numero" << endl << endl;
        }
        
    } while (inten > 0 && num != adivi);
    
}

/* este es el codigo principal*/

int main()
{
    int numero_magico;
    cout << endl << endl << "BIENVENIDO A NUMERO MAGICO" << endl << endl;
    cout << "Juega y adivina el numero!" << endl;
    cout << "Escoge un numero entre el 1 al 100, OJO tines 5 intentos para poder ganar" << endl;
    cout << "Y si por algun motivo ya no quieres jugar preciona 0" << endl;
    cout << "inserta tu numero: ";
    /* aqui mando a llamar a la funcion "adivinando" que es donde se ejecuta todo el proceso */
    adivinado(numero_magico);
}