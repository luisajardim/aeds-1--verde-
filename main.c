#include <stdio.h>
#include <stdlib.h>

//Ler a base e a altura de um retângulo e mostrar o seu perímetro, área e diagonal.
int main(){
  //VARIAVEIS
   float base, altura, perimetro, area ,diagonal;

  //ENTRADA DE DADOS
  //printf("digite a base do triagulo: ");
  scanf("%f", &base);
 // printf("digite a altura do triangulo: ");
  scanf("%f", &altura);
  //CALCULO
    //diagonal
    diagonal = sqrt(base * base + altura * altura);
    //perimetro:
    perimetro = 2 * (base + altura);
    //area:
    area = base * altura;
  //SAIDA DE DADOS
  printf("Perimetro: %.2f\n", perimetro);
  printf("Area: %.2f\n", area);
  printf("Diagonal: %.2f\n", diagonal);
  //FIM DO PROGRAMA
    return 0;
}
