#include <stdio.h>
#include <stdlib.h>

int main() {

  //Variáveis que podem user usadas
  //Atribuindo com {0} ele zera todos os bits para que não haja lixo de memória
  unsigned int x[200] = {0};
  int y, i;

  //Leitura dos números e marcação dos bits correspondentes no vetor
  while (1) {
    printf("Digite um número (0 a 5000): ");
    scanf("%d", &y);

    if (y == -1) break;

    x[y/32] = x[y/32] | (1 << (y % 32));
  }

  //Imprime os números que foram marcados no vetor
  for (i = 0; i <= 5000; i++) {
    if ((x[i/32] >> i) & 1) {
      printf("%d\n", i);
    }
  }

  return 0;
}