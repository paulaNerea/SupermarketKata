#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct
{
    int ID; 
    float precio; //entre 0 y 100
    char nombre[20]; //sacado del arreglo nombres[5][20]
}typedef Producto;

struct Nodo
{
    Producto P;
    struct Nodo *Siguiente;
}typedef Nodo;

char nombres[10][20] = {"Leche", "Arroz", "Harina", "Fideos", "Legumbres", "Azúcar", "Sal", "Aceite", "Jugo", "Pan"};

Producto cargarValores(int ID, float precio, char nombre[]);
Nodo *crearListaVacia();
Nodo *crearNodo(Producto producto);
void insertarNodo(Nodo **lista, Nodo *nuevoNodo);
void mostrarProducto(Producto producto);
void mostrarLista(Nodo *lista);

int main(){
    srand(time(NULL));

    Nodo *productos = crearListaVacia();

    for (int i = 0; i < 20; i++)
    {
        int indice = rand() % 10;
        Producto producto = cargarValores(i, rand () % 101, nombres[indice]); 
        insertarNodo(&productos, crearNodo(producto));
    }

    mostrarLista(productos);
    
    return 0;
}

Nodo *crearListaVacia()
{
    return NULL;
}

Nodo *crearNodo(Producto producto)
{
    Nodo *nodo = (Nodo *)malloc(sizeof(Nodo));

    nodo->P.ID = producto.ID;
    strcpy(nodo->P.nombre, producto.nombre);
    nodo->P.precio = producto.precio;
    nodo->Siguiente = NULL;

    return nodo;
}

void insertarNodo(Nodo **lista, Nodo *nuevoNodo)
{
    nuevoNodo->Siguiente = *lista;
    *lista  = nuevoNodo ;
}

Producto cargarValores(int ID, float precio, char nombre[])
{
    Producto aux;

    aux.ID = ID;
    aux.precio = precio;
    strcpy(aux.nombre, nombre);

    return aux;
}

void mostrarProducto(Producto producto)
{   
    printf("=======================================\n");
    printf("ID = [%d] - Nombre: %s - Precio: $%.2f \n", producto.ID, producto.nombre, producto.precio);
    printf("=======================================\n");
}

void mostrarLista(Nodo *lista)
{
    int i = 0;
    while (lista != NULL)
    {
        printf("    PRODUCTO [%d] \n", i++);
        mostrarProducto(lista->P);
        lista = lista->Siguiente;
    }
}
