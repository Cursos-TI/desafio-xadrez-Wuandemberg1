#include <stdio.h>


void movertorre (int casas) {
    if (casas > 0) {

        printf("Direita\n");
        movertorre (casas - 1);

    }

}

void moverrainha (int casas) {
    if (casas > 0) {

        printf("Esquerda\n");
        moverrainha (casas - 1);

    }

}

void moverbispo (int casas) {
    if (casas > 0) {

        printf("Direita\n");
        printf("Cima\n");
        moverbispo (casas - 1);

    }

}

void movercavalo1 (int casas) {
    if (casas > 0) {

        printf("Baixo\n");
        printf("Baixo\n");
        printf("Esquerda\n");
        moverbispo (casas - 1);

    }

}

void movercavalo2 (int casas) {
    if (casas > 0) {

        printf("Cima\n");
        printf("Cima\n");
        printf("Direita\n");
        moverbispo (casas - 1);

    }

}





int main (){

int torre = 0;
int rainha = 0;
int bispo = 0;
int movimentocompleto = 1;
int i;


//Xadrez

printf("Xadrez Game:\n\n\n");

//Mover torre 5 casas para a direita.

printf("Movimentação da torre:\n\n");

movertorre (5);



//Quebra de linha enre os movimentos da torre e da rainha.

    printf("\n");

//Mover a rainha 8 casas para a esquerda.


printf("Movimentação da rainha:\n\n");

moverrainha (8);

//Quebra de linha entre os movimentos da rainha e o bispo.

    printf("\n");

//Mover o bispo 5 casas na diagonal superior direita

printf("Movimentação do bispo:\n\n");

moverbispo (5);

//Quebra de linha enre os movimentos da torre e da rainha.

printf("\n");

//Mover o cavalo 2 casas para baixo e 1 casa para a esquerda.

printf("Movimentação do cavalo:\n\n");

printf("Escolha para qual o tipo de movimentação do cavalo você quer: ");
printf("\n\n");
printf("1. Duas casas para baixo e uma para esquerda\n");
printf("2. Duas casas para cima e uma para direita\n\n");
scanf("%d" , &movimentocompleto);
printf("Você escolheu a opção: %d\n", movimentocompleto);

printf("\n");

if (movimentocompleto == 1){


    movercavalo1 (1);



} else if (movimentocompleto == 2){

    movercavalo2 (1);

}




}






 














