#include <stdio.h>
#include <conio.h>

int exercicio_dois(int n){

    int quadrado = n * n;
    int cubo = pow(n,3);

    printf("%d \n", quadrado);
    printf("%d", cubo);

    return 1;

}

int exercicio_tres(int ano){

    int ano_atual = 2022;

    int idade = ano_atual - ano;

    printf("sua idade é %d", idade);

    return 1;


}

int exercicio_quatro(int c){

    float f = c * 1.8 + 32;

    printf("%f", f);

    return 1;

 }

int exercicio_cinco(int a, int b, int c){

    int media = (a * 2 + b * 3 + c * 5)/10;

    printf("%d", media);

    return 1;


 }



int main(){

    int valor;
    printf("Qual e o valor para o exercicio? ");

    scanf("%f", &valor);

    exercicio_cinco(valor);


    return 1;


}
