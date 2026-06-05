#pragma once
#pragma once
#include "Cancion.h"

// Definimos el Nodo del árbol
struct Nodo {
    Cancion cancion;
    Nodo* izq;
    Nodo* der;

    // Constructor del nodo
    Nodo(Cancion c) {
        cancion = c;
        izq = nullptr;
        der = nullptr;
    }
};

class ArbolBST {
private:
    Nodo* raiz; // El inicio de nuestro árbol, oculto al exterior

    // ---------------------------------------------------------
    // MÉTODOS RECURSIVOS PRIVADOS (El "motor" del árbol)
    // ---------------------------------------------------------
    Nodo* insertarRec(Nodo* nodo, Cancion c);
    Nodo* buscarRec(Nodo* nodo, int id);
    Nodo* eliminarRec(Nodo* nodo, int id);
    Nodo* encontrarMinimo(Nodo* nodo); // Función auxiliar para eliminar

    void inOrdenRec(Nodo* nodo);
    void preOrdenRec(Nodo* nodo);
    void postOrdenRec(Nodo* nodo);

    int alturaRec(Nodo* nodo);
    int cardinalidadRec(Nodo* nodo);

    // Helpers recursivos para la teoría de conjuntos
    void copiarArbolRec(Nodo* nodoDestino);
    void interseccionAuxRec(Nodo* nodoActual, ArbolBST& otroArbol, ArbolBST& resultado);
    void diferenciaAuxRec(Nodo* nodoActual, ArbolBST& otroArbol, ArbolBST& resultado);

public:
    // Constructor
    ArbolBST();

    // ---------------------------------------------------------
    // MÉTODOS PÚBLICOS (La "interfaz" que usarás en el main)
    // ---------------------------------------------------------
    void insertar(Cancion c);
    bool buscar(int id);
    void eliminar(int id);

    void mostrarInOrden();
    void mostrarPreOrden();
    void mostrarPostOrden();

    int obtenerAltura();
    int obtenerCardinalidad();

    // Operaciones de conjuntos que devuelven un nuevo árbol resultante
    ArbolBST unir(ArbolBST& otroArbol);
    ArbolBST intersectar(ArbolBST& otroArbol);
    ArbolBST diferenciar(ArbolBST& otroArbol);
};