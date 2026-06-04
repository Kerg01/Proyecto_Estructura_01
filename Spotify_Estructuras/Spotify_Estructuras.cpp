#include <iostream>
#include <string>
using namespace std;

struct Cancion {
    int id;
    string nombre;
    string artista;
    string genero;
    string duracion;
};

struct Nodo {
    Cancion cancion;
    Nodo* izq;
    Nodo* der;

    // Constructor para inicializar fácilmente el nodo
    Nodo(Cancion c) {
        cancion = c;
        izq = nullptr;
        der = nullptr;
    }
};
