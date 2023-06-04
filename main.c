/*
int suma(u,v);
int dOrigen(v);
int pVectorial(u,v);*/

#include <stdio.h>
#include "operaciones.h"

int main() {

    Punto u = {1,2,3};
    Punto v = {4,5,6};

    Punto resSuma =suma(u,v);
    float resDisO = distanciaO(u);
    Punto resProdVec = prodVectorial(u,v);

    printf("siendo u=(%d,%d,%d) y v=(%d,%d,%d): \n",u.x,u.y,u.z,v.x,v.y,v.z);
    printf("u+v=(%d,%d,%d)\n",resSuma.x,resSuma.y,resSuma.z);
    printf("La distancia al origen de u es: %.2f \n",resDisO);
    printf("uxv=(%d,%d,%d)\n",resProdVec.x,resProdVec.y,resProdVec.z);

    return 0;
}