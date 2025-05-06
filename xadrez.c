#include <stdio.h>

int main (){

int torre = 0;
int rainha = 0;
int bispo = 0;


//Xadrez

printf("Xadrez Game:\n\n\n");

//Mover torre 5 casas para a direita.

printf("Movimentação da torre:\n\n");

for (torre ; torre<5 ; torre++){

    
    printf("Direita\n");


}

//Quebra de linha enre os movimentos da torre e da rainha.

    printf("\n");

//Mover a rainha 8 casas para a esquerda.


printf("Movimentação da rainha:\n\n");

while (rainha < 8){

    printf("Esquerda\n");

    rainha++;


}

//Quebra de linha entre os movimentos da rainha e o bispo.

    printf("\n");

//Mover o bispo 5 casas na diagonal superior direita

printf("Movimentação do bispo:\n\n");

do {

 
    printf("Direita\n");
    printf("Cima\n");

    bispo++;


} while (bispo < 5);

 





    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
