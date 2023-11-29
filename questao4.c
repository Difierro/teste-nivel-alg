#include <stdio.h>

int main (){
    int numUm, numDois, soma, n;
    //aqui ele pede os numeros
    printf("Digite o primeiro numero");
    scanf("%d", &numUm);
    printf("Digite o segundo numero");
    scanf("%d", &numDois);

    for (int i = numDois; i >= numUm; i--){
        n++;
    };// esse laço é para calcular a posição final n do ultimo digito,  ou seja, a distancia entre o numUm e o numDois.

    soma = (((numUm + 1) + (numDois - 1)) * (n - 2) )/2; 
    // na soma, usa-se a formula para calcular a soma dde elementos de uma PA e como queremos somar apenas os numeros entre o numUm e o numDois, adicionamos 1 ao numUm e retiramos 1 do numDois. Como avançamos 1 numero e voltamos 1, a distancia n foi reduzida em dois para nao acrescentar o numUm e numDois,e considerar somente os numeros entre eles.

    printf("%d", soma);
    return 0;
}