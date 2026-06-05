#pragma once
#include <string>

using namespace std;

struct Cancion {
    int id;               // Código o ID de la canción
    string nombre;        // Nombre de la canción
    string artista;       // Artista
    string genero;        // Género musical
    string duracion;      // Duración (ej. "3:45")
};