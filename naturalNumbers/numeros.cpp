#include <iostream>

int sumaPrimerosNumeros(int N) {
    return (N * (N + 1)) / 2;
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

    int suma = sumaPrimerosNumeros(N);
    std::cout << "La suma de los primeros " << N << " números naturales es: " << suma << std::endl;

    return 0;
}