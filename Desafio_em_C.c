#include <stdio.h> // biblioteca padrão do C - funções como printf e scanf são definidas aqui
#include <string.h> // biblioteca para tratamento de stream de texto - funções como strcpy, strcat, strcmp e strlen são as mais usuais.
#include <stdlib.h> // biblioteca para manipulação de memoria e conversão de tipos - funções como malloc e free são as mais usuais.

//prototipação
void mensagem(char *nome,char *rank);

int main(void) {
  int xp;
  char *nome_heroi;
  nome_heroi = malloc(7 * sizeof(char));
  
  /* 
  declarei o tamanho da string por meio de malloc para relembrar essa forma de alocação. Num caso onde o tamanho de nome é fixo, osu seja, não ultrapassa um determinado valor, o uso de um array é mais aplicavel em c.
  ex: char nome_heroi[30]
  30 caracteres costuma sobrar, considerando que seja só o primeiro nome.
  usando o malloc, mantive o limite do tamanho do nome como algo fixo, com no maximo 6 caracteres mais o caracter terminação de uma string: '\0', totalizando 7 char's alocados para a variável.
*/
  
  xp = 11000;
  strcpy(nome_heroi, "Arthur");
  // atribuição de valor as variaveis

  // teste logico usando a noção de englobamento
  if(xp > 10000){
    mensagem(nome_heroi, "Radiante");
  } else if(xp > 9000) {
    mensagem(nome_heroi, "Imortal");
  } else if(xp > 8000) {
    mensagem(nome_heroi, "Ascendente");
  } else if(xp > 7000) {
    mensagem(nome_heroi, "Platina");
  } else if(xp > 5000) {
    mensagem(nome_heroi, "Ouro");
  } else if(xp > 2000) {
    mensagem(nome_heroi, "Prata");
  } else if(xp > 1000) {
    mensagem(nome_heroi, "Bronze");
  } else {
    mensagem(nome_heroi, "Ferro");
  }

  return 0;
}

void mensagem(char *nome,char *rank){
  printf("O Herói de nome %s está no nível de %s",nome,rank);
}
// função simples para exibir mensagem. 