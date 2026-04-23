/*3. Escreva um algoritmo que leia um array A de n números inteiros e retorne a maior diferença de 2 (dois) elementos
consecutivos de A.*/

#include <iostream> // habilita cin e cout
#include <climits> // habilita INT_MIN = menor número possível inteiro

int main() {
    int n;
    std::cout << "Digite o tamanho do array: ";
    std::cin >> n;

    int A[n];
    std::cout << "Digite os " << n << " elementos:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> A[i];
    }

    int maiorSoma = INT_MIN;

    for (int i = 0; i < n - 1; i++) {
        int soma = A[i] + A[i + 1];
        if (soma > maiorSoma) {
            maiorSoma = soma;
        }
    }

    std::cout << "Maior soma de 2 elementos consecutivos: " << maiorSoma << std::endl;

    return 0;
}