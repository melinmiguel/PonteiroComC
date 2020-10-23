#include <stdlib.h>
#include <stdio.h>

//total funcional
void ler(int *numero){
int i;
    printf("digite o seu numero!: \n");
    scanf("%d", &i);
    *numero = i;
}


int perfeito (int num){
    if (num >2){
        return 0;
    }
    return 1;
}


int main (){

int numero;

ler(&numero);

printf("\n\no numero digitado foi: %d\n\n", numero);

if(perfeito(1) == 0)
    printf(" e maior q 2");
}

