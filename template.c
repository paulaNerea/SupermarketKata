#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct
{
    int ID; 
    float precio; //entre 0 y 100
    char nombre[20]; //scado del arreglo nombres[5][20]
}typedef producto;

char nombres[5][20] = {"Leche", "Arroz", "Harina", "Fideos", "Legumbres"};

producto cargarValores(int ID, float precio, char nombre[]);
void mostrarProducto(producto producto);

int main(){
    srand(time(NULL));

    int id = 0;
    producto producto1 = cargarValores(id, rand () % 101, nombres[1]); 
    mostrarProducto(producto1);
    return 0;
}

producto cargarValores(int ID, float precio, char nombre[])
{
    producto aux;

    aux.ID = ID;
    aux.precio = precio;
    strcpy(aux.nombre, nombre);

    return aux;
}

void mostrarProducto(producto producto)
{
    printf("ID = [%d] - Nombre: %s - Precio: $%.2f \n", producto.ID, producto.nombre, producto.precio);
}
