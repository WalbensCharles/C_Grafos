#include "Circulo.h"

#include <iostream>
using namespace std;

int main(){

    Circulo c(2);
    c.imprimir_area();


    cout<< "digite um numero ";
    int raio;
    cin>> raio;

    Circulo c2(raio);
    c2.imprimir_area();
    return 0;
}
