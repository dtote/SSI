#pragma once
#include <iostream>
#include <string>
#include <vector>
//#include <random>

using namespace std;

class RC4 {

private:
    vector<int> S;                                  // Vector de estado S : contiene una permutación de todos los números enteros del 0 a 255
    vector<int> K;                                  // Vector de clave K
    int i_inx, j_inx;                               // Indices
public:

    RC4();                                          // Constructor por defecto
    RC4(vector<int> semilla_clave);                 // Constructor parametrizado
    ~RC4();                                         // Destructor

    void KSA(vector<int> semilla_clave);            // Inicializacion ( Key Scheduling Algorithm )
    int PRGA();                                     // Generación de secuencia cifrante
    vector<int> Cifrado(vector<int> mensaje);       // Cifrado
    vector<int> Descifrado(vector<int>mensaje);     // Descifrado

    void swap(const int index_s, const int index_k); // Swap
};


// El constructor parametrizado llamada al método KSA , para inicializar los vectores S y K

// A su vez KSA llama a el método Swap