// (c) Escreva um programa, em C++, e realize testes para verificar se sua análise está correta.

#include <iostream> // habilita ler dados
#include <climits> // Fornece as constantes de limite dos tipos inteiros
#include <chrono> 
/* Fornece ferramentas para medir tempo de execução. 
É usada para capturar o instante antes e depois do algoritmo rodar*/

int main() {
    // Tamanhos de teste crescentes
    int tamanhos[] = {1000, 10000, 100000, 1000000, 10000000};
    int qtd = 5;

    for (int t = 0; t < qtd; t++) {
        int n = tamanhos[t];
        int* A = new int[n]; // int* = endereço na memória. 'Memory leak' - memória fica ocupada mesmo após o programa não precisar mais dela.

        // Preenche o array com valores de exemplo
        for (int i = 0; i < n; i++) {
            A[i] = i + 1;
        }

        // Inicia a contagem de tempo
        auto inicio = std::chrono::high_resolution_clock::now();

        // Algoritmo principal
        int maiorSoma = INT_MIN;
        for (int i = 0; i < n - 1; i++) {
            int soma = A[i] + A[i + 1];
            if (soma > maiorSoma) {
                maiorSoma = soma;
            }
        }

        // Finaliza a contagem de tempo
        auto fim = std::chrono::high_resolution_clock::now();
        auto duracao = std::chrono::duration_cast<std::chrono::microseconds>(fim - inicio);

        std::cout << "n = " << n
                  << " | Maior soma = " << maiorSoma
                  << " | Tempo = " << duracao.count() << " us"
                  << std::endl;

        delete[] A;
    }

    return 0;
}