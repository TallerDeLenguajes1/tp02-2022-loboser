#include <stdio.h>
#include <stdlib.h>

char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

struct compu
{
    int velocidad;      //entre 1 y 3 Gherz
    int anio;           //entre 2015 y 2022
    int cantidad;       //entre 1 y 8
    char *tipo_cpu;     //valores del arreglo tipos
};

void listaDePcs(struct compu pc){
    printf("Tipo de Procesador: %s\n", pc.tipo_cpu);
    printf("Anio: %d\n", pc.anio);
    printf("Velocidad de procesamiento: %d\n", pc.velocidad);
    printf("Cantidad de Nucleos: %d\n\n", pc.cantidad);
}

void pcMasVieja(struct compu pc){
    printf("\n\nPC mas Vieja: \n\n");
    printf("Tipo de Procesador: %s\n", pc.tipo_cpu);
    printf("Anio: %d\n", pc.anio);
    printf("Velocidad de procesamiento: %d\n", pc.velocidad);
    printf("Cantidad de Nucleos: %d\n\n", pc.cantidad);
}

void pcMasRapida(struct compu pc){
    printf("\n\nPC mas Rapida: \n\n");
    printf("Tipo de Procesador: %s\n", pc.tipo_cpu);
    printf("Anio: %d\n", pc.anio);
    printf("Velocidad de Procesamiento: %d\n", pc.velocidad);
    printf("Cantidad de Nucleos: %d\n\n", pc.cantidad);
}

int main(){
    srand(time(NULL));
    struct compu pc[5];
    int aux;
    int bandera;

    for (int i = 0; i < 5; i++)
    {
        pc[i].velocidad = 1 + rand() % 3;
        pc[i].anio = 2015 + rand() % 8;
        pc[i].cantidad = 1 + rand() % 8;
        pc[i].tipo_cpu = tipos[rand() % 6];
    }

    printf("Lista completa de PCs: \n\n\n");

    for (int i = 0; i < 5; i++)
    {
        listaDePcs(pc[i]);
    }

    aux = 9999;
    for (int i = 0; i < 5; i++)
    {
        if (pc[i].anio < aux)
        {
            aux = pc[i].anio;
            bandera = i;
        }
    }

    pcMasVieja(pc[bandera]);

    aux = 0;
    for (int i = 0; i < 5; i++)
    {
        if (aux < pc[i].velocidad)
        {
            aux = pc[i].anio;
            bandera = i;
        }
    }

    pcMasRapida(pc[bandera]);

    getchar();
    return 0;
}