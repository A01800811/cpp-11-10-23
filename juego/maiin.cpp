#include "dado.h"
#include "jugador.h"

int maint()
{
 Dado midado;   
 midado.set_caras(8);
 midado.imprimir();

 for (int i = 0; i < 5; i++)
 {
    cout << midado.lanzar() << endl;
 }

Jugador yo;
yo.setnombre("Antonio");
yo.imprimir();
yo.mover();
yo.imprimir();
yo.mover();
yo.imprimir();
