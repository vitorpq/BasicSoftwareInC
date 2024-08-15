#include <stdio.h>

void incrementar(int *num){
    *num = *num +1;
    printf("Dentro da função incrementar: num = %d\n", num);
}

int main(){
    int x = 10;

    printf("Antes de chamar a função: x= %d\n", x);
    incrementar(&x);
    printf("Depois de chamar a função: x= %d\n", x);
    return 0;
}