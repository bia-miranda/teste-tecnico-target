#include <stdio.h>

int fibonacci(valor) {
  // primeiro verifica se o número é negativo. Se for, ele não aceita
  if (valor < 0) {
    return 0;
  }

  // valores inciais da sequencia
  int a = 0, b = 1, c;

  // soma as variáveis
  while (b <= valor) {
    c = b;
    b = a + b;
    a = c;
  }

  // verifica se n é um dos números gerados
  return (b == valor || a == valor);
}

int main(void) {
  int num;

  // solicita ao usuário para inserir um número
  printf("Digite um número: ");
  scanf("%d", &num);

  // verifica e exibe a mensagem
  if (fibonacci(num)) {
    printf("O número %d pertence à sequência de Fibonacci.\n", num);
  } else {
    printf("O número %d não pertence à sequência de Fibonacci.\n", num);
  }
}
