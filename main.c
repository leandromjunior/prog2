#include <stdio.h>

int main(void) {
 /* 1- Leia uma matriz 5 x 5. Leia também um valor X. O programa deverá fazer
uma busca desse valor na matriz e, ao final, escrever a localização (linha x coluna) ou uma mensagem de “não encontrado”. */
#define TAM 2
int mat[TAM][TAM], x, i,j, posi, posj;
//ler a matriz
for(i=0;i<TAM;i++){
  for(j=0;j<TAM;j++){
    printf("Informe um valor [%d][%d]:", i,j);
    scanf("%d", &mat[i][j]);
  }
}
printf("Insira um valor inteiro:");
scanf("%d", &x);
int k =0;
 for(i=0;i<TAM;i++){
  for(j=0;j<TAM;j++){
    if(x == mat[i][j]){
    //Flag
      k = 5555;
    //Variáveis de posições para receber o valor de i e j e imprimir no printf
    posi = i;
    posj = j; 
 }
  }
 } 
if(k==5555){
  printf("linha[%d] coluna[%d]", posi,posj);
}
else{
  printf("Não Encontrado");
}
  return 0;
}