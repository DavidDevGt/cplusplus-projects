#include <iostream>
#include <cmath>

bool esPrimo(int N) {
    if (N <= 1) return false;
    if (N <= 3) return true;
    if (N % 2 == 0 || N % 3 == 0) return false;
    
    for (int i = 5; i <= std::sqrt(N); i+= 6)
    {
        if (N % i == 0 || N % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    int N;
    std::cout << "Ingrese un número positivo: ";
    std::cin >> N;

    if (N < 1)
    {
        std::cout << "El número ingresado no es positivo." << std::endl;
        return 1;
    }

    if (esPrimo(N))
    {
        std::cout << N << " es un número primo." << std::endl;
    }
    else
    {
        std::cout << N << " no es un número primo." << std::endl;
    }

    return 0;
}