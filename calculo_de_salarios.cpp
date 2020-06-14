#include <iostream>
#include <math.h>

using namespace std;

// esta es la funcion para el salario total
void salario_toal(int horas, int extra)
{
    float valor_extra;
    valor_extra = 2.50;
    float valor_hora;
    valor_hora = 1.75;
    float salario;
    salario = (horas * valor_hora + extra * valor_extra);
    cout << endl << "El salario total es de: $" << salario << endl;
}

// funcion para calcular salario real que toma en cuenta todo lo anterior
// ya que se necesita para calcular el salario real 
void salario_real(int horas, int extra)
{
    float valor_extra;
    valor_extra = 2.50;
    float valor_hora;
    valor_hora = 1.75;
    float salario;
    salario = (horas * valor_hora + extra * valor_extra); 
    float descuento_afp;
    descuento_afp = salario * 0.04;
    float descuento_seguro;
    descuento_seguro = salario * 0.0625;
    float renta;
    renta = salario * 0.1;
    float real;
    real = (salario - descuento_seguro - descuento_afp);
    if (real > 500) // aqui hago la condicion de que si la persona gana mas de 500 
    {              // se le cobrara el impuesto de renta
        cout << "El salario real es de: $" << real - renta << endl << endl;
    }else
    {
        cout << "El salario real es de: $" << real << endl << endl;
    }
}

/* codigo principlal */

int main()
{
    int H;
    int HE; 
    int i, empleados;
    cout << endl << "BOLETAS DE PAGO" << endl;
    cout << endl << "Ingrese el numero de empleados: ";
    cin >> empleados;
    for (int i = 0; i < empleados; i++) // pido el numero de empleados que va tener la empresa
    {
        cout << endl << "Ingrese horas trabajadas: ";
        cin >> H;
        cout << "Ingrese horas extra: ";
        cin >> HE;
        salario_toal(H, HE); /* mando a llamar a la funcion "salario total" */
        salario_real(H, HE); /* mando a llamar a la funcion "salario real" */
    }
}