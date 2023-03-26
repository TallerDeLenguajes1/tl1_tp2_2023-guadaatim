#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){

    int i;
    double vt[N];
    double *puntero;

    puntero = vt;

    srand(time(NULL));

    for (i = 0; i < N; i++)
    {   
        *puntero = 1 + rand() % 100;
        printf("\n%.2f ", *puntero);
        puntero++;
    }
    
    return 0;
}