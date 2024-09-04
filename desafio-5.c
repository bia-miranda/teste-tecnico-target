#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
  int n = strlen(str); // pega o tamanho da string
  
  for (int i = 0; i < n / 2; i++) {
    char temp = str[i]; // guarda temporariamente o caractere atual
    str[i] = str[n - i - 1]; // atribui o caractere do final ao início
    str[n - i - 1] = temp;  // atribui o caractere do início ao final
  } 
}

int main() {

  char str[100];

  // recebe a string
  printf("Digite uma string: ");
  fgets(str, sizeof(str), stdin);

  // remove o caractere de nova linha do final da string, se existir
  str[strcspn(str, "\n")] = 0;

  // chama a função que inverte a string
  inverterString(str);

  // exibe a string invertida
  printf("String invertida: %s\n", str);

  return 0;
}
