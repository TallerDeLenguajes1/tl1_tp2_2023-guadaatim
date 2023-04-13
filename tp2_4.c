#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMA 5

struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
}typedef compu;

void mostrar(compu pcs[], int tam);
void compuvieja(compu pcs[]);
void compurapida(compu pcs[]);

int main(){

    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    compu pc[TAMA];

    srand(time(NULL));

    for (int i = 0; i < TAMA; i++)
    {
        pc[i].anio = 2015 + rand() % 9;
        pc[i].cantidad = 1 +rand() % 8;
        pc[i].velocidad = 1 + rand() % 3;
        pc[i].tipo_cpu = &tipos[rand() % 7][0];
    }
    
    printf("\n-------PC-------");
    mostrar(pc, TAMA);
    compuvieja(pc);
    compurapida(pc);

    return 0;
}

void mostrar(compu pcs[], int tam)
{
    for (int i = 0; i < tam; i++)
    {   
        printf("\ncantidad: %d", pcs[i].cantidad);
        printf("\nanio: %d", pcs[i].anio);
        printf("\nvelocidad: %d GHz", pcs[i].velocidad);
        printf("\ntipo de cpu: %s", pcs[i].tipo_cpu);
        printf("\n--------------");
    }
    
}

void compuvieja(compu pcs[])
{   
    compu pcvieja[1];
    int x = 0;

    for (int i = 0; i < TAMA; i++)
    {
        if (x == 0)
        {
            pcvieja[0] = pcs[i];
            x++;
        } else
        {
            if (pcvieja[0].anio > pcs[i].anio)
            {
                pcvieja[0] = pcs[i];
            }
            
        }
        
    }

    printf("\n-------PC MAS VIEJA-------");
    mostrar(pcvieja, 1);
    
}


void compurapida(compu pcs[])
{
    compu pcrapida[1];
    int x = 0;

    for (int i = 0; i < TAMA; i++)
    {
        if (x == 0)
        {
            pcrapida[0] = pcs[i];
            x++;
        } else
        {
            if (pcrapida[0].velocidad < pcs[i].velocidad)
            {
                pcrapida[0] = pcs[i];
            }
            
        }
        
    }

    printf("\n-------PC MAS RAPIDA-------");
    mostrar(pcrapida, 1);
    

}