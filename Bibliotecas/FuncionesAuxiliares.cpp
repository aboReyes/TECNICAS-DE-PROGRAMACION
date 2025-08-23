//
// Created by DIEGO on 22/08/2025.
//

#include "FuncionesAuxiliares.h"

long long factorial(int numero) {
    long long fact = 1;

    for (int i = 1; i <= numero; i++) {
        fact *=i; //fact = fact * i;
    }
    return fact;
}