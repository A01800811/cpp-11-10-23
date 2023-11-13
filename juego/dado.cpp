#include <iostream>
using std::cout;
using std::endl;
#include "dado.h"
#include <cstdlib>

int Dado::lanzar()
{
    caras = 6;
    return rand() % caras + 1;
}
void Dado::ser_caras(int n)
{
    caras = n;
}
int Dado::get_caras()
{
    return caras;
}
void Dado::imprimir()
{
    cout << "Soy un dado y tengo " << caras << "caras" << endl;
}