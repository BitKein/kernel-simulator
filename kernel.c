#include <stdio.h>
#include <stdlib.h>
//#include <pthread.h>
#include <unistd.h>
#include <stdbool.h>

struct PCB{
        unsigned int pid;
    };

    struct PQ{
        unsigned int tam;
        struct PCB *primero;
        struct PCB *ultimo;
    };

    struct Machine{
        struct CPU **cpus;
    };

    struct CPU{
        struct core **cores;
    };

    struct core{
        struct hilo **hilos;
    };

    struct hilo{
        struct PCB *proc_en_ejec;
    };


int main(){

    int FREQ, NUM_CPU, NUM_CORES, NUM_THR;
    int i,j,k;
    bool seguir=0;

    struct Machine *machine;

    //recibir paramtros de configuracion
    while(!seguir){
        printf("Introduzca la frecuencia del reloj (min 1GHz, max 1000GHz):");
        scanf("%d",&FREQ);
        if(FREQ<1 || FREQ>1000) printf("ERROR: Fuera de los limites.\n");
        else seguir=1;
    }
    seguir=0;
    
    while(!seguir){
        printf("Introduzca el numero de procesadores: (max 64)");
        scanf("%d",&NUM_CPU);
        if(NUM_CPU>64) printf("ERROR: Fuera de los limites.\n");
        else seguir=1;
    }
    seguir=0;
    
    while(!seguir){
        printf("Introduzca el numero de cores de cada procesador: (max 64)");
        scanf("%d",&NUM_CORES);
        if(NUM_CORES>64) printf("ERROR: Fuera de los limites.\n");
        else seguir=1;
    }
    seguir=0;

    while(!seguir){
        printf("Introduzca el numero de hilos de cada core: (max 64)");
        scanf("%d",&NUM_THR);
        if(NUM_THR>64) printf("ERROR: Fuera de los limites.\n");
        else seguir=1;
    }
    seguir=0;

   
    //inicializar estructuras de datos
    machine=(struct Machine*)malloc(sizeof(struct Machine));
    struct CPU lista_cpus[NUM_CPU];
    machine->cpus=lista_cpus;
    for(i=0;i<NUM_CPU;i++){
        machine->cpus[i]->cores=(struct core*)malloc(sizeof());
        for(j=0;j<NUM_CORES;j++){
            for(k=0;k<NUM_THR;k++){

            }
        }
    }

    //lanzar hilos

    return 0;
}