#include <stdio.h>

int calcularGCD(int x, int y) {

    if (x == 0) {
        return y;
    }
    if (y == 0) {
        return x;
    }
    return calcularGCD(y, x % y);
}
int coeficienteBinomial(int n, int m){
    if (m > n) {
        return 0;
    }
    if (m == 0 || m == n) {
        return 1;
    }
    return coeficienteBinomial(n - 1, m - 1)
           + coeficienteBinomial(n - 1, m);
}

int encontraMaiorElementoNoVetor(int a[], int inicio, int fim){
    if (fim - inicio == 1)  return a[inicio];
    int m= (inicio + fim) / 2;
    int x= encontraMaiorElementoNoVetor(a, inicio, m);
    int y= encontraMaiorElementoNoVetor(a, m, fim);
    int result;
    if(x>y){
        result = x;
    }else{
        result = y;
    }
    return result;
}

int main() {
    printf("%d\n",calcularGCD(270,192));
    printf("%d\n",calcularGCD(35,10));
    printf("%d\n",calcularGCD(10,15));
    printf("%d\n",calcularGCD(31,2));
    int vetor[5] = {1,2,4,3,2};
    printf("%d\n", encontraMaiorElementoNoVetor(vetor, 0, 5));



    return 0;
}
