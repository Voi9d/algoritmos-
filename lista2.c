#include <stdio.h>
#include <math.h>
int exercicio_um(int x){

if(x<0){
    x = x * x;
    return x;
}

x = sqrt(x);
return x;


}

int main(){
    int numero = -9;
    numero = exercicio_um(numero);
    printf("%d", numero);

}
