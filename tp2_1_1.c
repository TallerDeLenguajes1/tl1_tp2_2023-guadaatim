#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){

    int i;
    double vt[N];

    for (i = 0; i < N; i++)
    {   
        srand(time(NULL));
        vt[i] = 1 + rand() % 100;
        printf("\n %.2f ", vt[i]);
    }
    

    return 0;
}