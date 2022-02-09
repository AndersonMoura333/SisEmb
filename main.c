#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n){
    int f1=0, f2=1,f3;
    if(n <= 0){
        return -1;
    } else if(n == 1){
        return 1;
    } else{
        while(f2 < n){
            f3 = f2 + f1;
            f1=f2;
            f2=f3;
        }
        return f3;
    }
}
int main()
{
    int n, f1=0, f2=1,f3;
    printf("Digite quantos termos da sequencia de Fibonacci voce quer:\n");
    scanf("%d", &n);
    int resultado =fibonacci(n);
    if(resultado> 0){
        printf("%d", resultado);
    }else{
        printf("numero invalido!");
    }

    return 0;
}
