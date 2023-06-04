//
// Created by Ciro on 10/5/2023.
//

#include "operaciones.h"
#include<stdio.h>
#include <malloc.h>
#include <math.h>

Punto suma(Punto p0,Punto p1){
    Punto resultado;
    resultado.x = p0.x + p1.x;
    resultado.y = p0.y + p1.y;
    resultado.z = p0.z + p1.z;

   return resultado;
}

float distanciaO(Punto p0) {
    float disOrigen = sqrt((p0.x) * (p0.x) + (p0.y) * (p0.y) + (p0.z) * (p0.z));
    return disOrigen;
}

Punto prodVectorial(Punto p0, Punto p1) {
    Punto result;
    result.x = p0.y * p1.z - p0.z * p1.y;
    result.y = p0.z * p1.x - p0.x * p1.z;
    result.z = p0.x * p1.y - p0.y * p1.x;
    return result;
}
