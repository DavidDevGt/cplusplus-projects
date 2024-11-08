#include <iostream>
#include <vector>
#include <algorithm>

// Tengo que recibir un vector de enteros 'arr' y deben
// estar ordenados, el tamoño del vector 'size' y el numero que quiero buscar 'target'
// Retorna el indice del elemento si lo encuentra, o -1 si no lo encuentra

int binarySearch(const std::vector<int> &arr, int target)
{
    int izquierda = 0;
    int derecha = arr.size() - 1;

    while (izquierda <= derecha)
    {
        // El indice lo calculo con la mitad de la suma de cada
        // indice, para evitar overflow en caso de que el vector sea muy grande
        int medio = izquierda + (derecha - izquierda) / 2;

        // Si lo encuentro, retornar el indice
        if (arr[medio] == target)
        {
            return medio;
        }

        // Si el elemento en el medio es menor que el target
        // entonces busco en la mitad derecha
        if (arr[medio] < target)
        {
            izquierda = medio + 1;
        }
        else
        {
            // Si el elemento en el medio es mayor que el target
            // entonces busco en la mitad izquierda
            derecha = medio - 1;
        }
    }

    // Si no lo encuentro, retorno -1
    return -1;
}

int main()
{
    std::vector<int> numeros = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}; // Vector de números ordenados
    int target;

    std::cout << "Ingrese el número que desea buscar: ";
    std::cin >> target;

    int resultado = binarySearch(numeros, target); // Buscar el número en el vector

    if (resultado != -1)
    {
        std::cout << "El número " << target << " se encuentra en la posición " << resultado << std::endl;
    }
    else
    {
        std::cout << "El número " << target << " no se encuentra en el vector" << std::endl;
    }

    return 0;
}