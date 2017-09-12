#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 3
typedef struct
{
    int legajo[3];
    char nombre[3][50];
    float peso[3];
    char sintoma[3][30];
} ePaciente;

void mostrarPaciente(ePaciente);
void mostrarTodosLosPacientes(ePaciente[], int);
void cargarTodosLosPacientes(ePaciente[], int);
void inicializar(ePaciente[], int);
int main()
{

   ePaciente listaPacientes[TAM];
   int i;


    cargarTodosLosPacientes(listaPacientes,TAM);
   mostrarTodosLosPacientes(listaPacientes, TAM);


    return 0;
}

void mostrarPaciente(ePaciente paciente)
{
     printf("%d-%s-%f-%s\n", paciente.legajo, paciente.nombre, paciente.peso,paciente.sintoma);
}

void mostrarTodosLosPacientes(ePaciente lista[], int tam)
{
   int i;

    for(i=0; i<tam; i++)
   {
       mostrarPaciente(lista[i]);
   }
}

/*void cargarTodosLosPacientes(ePaciente lista[], int tam)
{
    int i;

     for(i=0; i<tam; i++)
   {
       printf("Ingrese legajo: ");
       scanf("%d", &lista[i].legajo);
       printf("Ingrese nombre: ");
       fflush(stdin);
       gets(lista[i].nombre);
       printf("Ingrese peso: ");
       scanf("%f", &lista[i].peso);
       printf("Ingrese sintoma: ");
       fflush(stdin);
       gets(lista[i].sintoma);
   }
}*/
    int legajo[3]={100,101,102};
    char nombre[3][50]={"Damian","Susana","Ignacio"};
    float peso[3]={88,67,70};
    char sintoma[3][30]={"Dolor de garganta","Dolor de cabeza","Fiebre"};

void inicializar (ePaciente lista[], int tam)
{
    int i;
    for (i=0;i<tam;i++)
    {
        listaPacientes[i].legajo=legajo[i];
    }
}
