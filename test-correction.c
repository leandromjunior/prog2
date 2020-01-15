/*2 - Faça um programa para corrigir uma prova com 5 questões de múltipla
escolha (a, b, c, d ou e), em uma turma com 3 alunos. Cada questão da
prova vale 1 ponto. Ao final, mostre a pontuação dos 3 alunos. */

#include<stdio.h>

int main(void){
char mat[3][5], i,j;
char gabarito[5];
int cont=0;

for(i=0;i<3;i++){
  printf("Aluno %d", i);
  printf("\n");
  //Digitando as respostas
  for(j=0;j<5;j++){
    printf("Digite o resultado da questão %d:", j);
    scanf(" %c", &mat[i][j]);
  }
}
for(i=0;i<5;i++){
  printf("Digite o gabarito %d:", i);
  scanf(" %c", &gabarito[i]);
}

//comparar notas com gabarito
for(i=0;i<3;i++){
 //i
  for(j=0;j<5;j++){
  if(gabarito[j]==mat[i][j]){
    cont++;
  }
  }
  //i
  printf("O aluno %d aluno tirou: %d\n ",i, cont);
  cont = 0;
}
  return 0;
} 
