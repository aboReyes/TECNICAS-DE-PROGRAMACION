/*
*Autor: Diego Axel Lopez Reyes
*Titulo: Clase 02
*Fecha: 22/08/25
*/
#include <iostream>
#include <iomanip>
using namespace std;
#include "Bibliotecas/FuncionesAuxiliares.h"

int main(int argc, char **argv) {
    int numero;
    long long fact;
    cout<<"Ingrese el numero a calcular: ";
    cin>>numero;

    fact = factorial(numero);
    cout<<"El factorial de "<<numero<<" es: "<<fact<<endl;
    return 0;
}
