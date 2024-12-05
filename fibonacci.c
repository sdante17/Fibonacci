#include <stdio.h>

int fibonacci(int N){
    if(N == 0){
        return 0;
    }

    if(N == 1){
        return 1;
    }

    if(N > 1){
        return fibonacci(N - 1) + fibonacci(N - 2);
    }
     
}

int main(){
    int N;

    printf("Digite um valor: ");
    scanf("%d", &N);

    int resultado = fibonacci(N);

    printf("O %dº termo da sequencia de Fibonacci eh: %d\n", N, resultado);

    return 0;
}