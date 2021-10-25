#include <stdio.h>
#include <stdlib.h>
#define Tamanho 10
#define t 10

void main()
{

int escolha=1;

// se a escolha for diferente de 5, ele continua... o que inicialmente é verdade
// pois escolha é igual a 1
while (escolha!=7)
{

printf("\n\n ---------- MENU INICIAL ----------");

printf("\n 1 - Ordenacao por Troca ");
printf("\n 2 - Bubble Sort  ");
printf("\n 3 - Quick Sort ");
printf("\n 4 - Insertion Sort ");
printf("\n 5 - Selection Sort ");
printf("\n 6 - Fechar Programa ");
printf("\n 7 - Fechar Programa ");
printf("\n\n Escolha uma opcao: ");
scanf("%d",&escolha);

printf("\n\n");

// estrutura switch
switch (escolha) {

case 1:
{  int vetor[15], aux;

   for(int i = 0; i < 15; i++) {
     printf("Digite o numero %d do vetor: ", i);
     scanf("%d", &vetor[i]);
   }

   for(int x = 0; x < 15; x++){
      for(int y = x; y < 15; y++){
        if(vetor[x] > vetor[y]){
            aux = vetor[x];
            vetor[x] = vetor [y];
            vetor[y] = aux;
        }
      }
   }

   printf("\n\n Vetor Ordenado: ");
   printf("\n\n");


   for(int i = 0; i < 15; i ++){
       printf("numero %d eh: %d \n", i, vetor[i]);
   }



printf("\n\n Opcao escolhida: Ordenacao por troca ");

break;
}

case 2:
{
    int numeros[Tamanho];
    int i, aux, contador;

    printf("Entre com numeros para preencher o array:\n");
    for(i = 0; i < Tamanho; i++){
        scanf("%d", &numeros[i]);
    }
    printf("A ordem atual dos itens no array eh:\n");

    for(i = 0; i < Tamanho; i++){
        printf("%4d", numeros[i]);
    }

     // Algoritmo para fazer a ordenação BubbleSort:

      for(contador = 1; contador < Tamanho; contador++){
        for(i = 0; i < Tamanho - 1; i++){
            if(numeros[i] > numeros[i + 1]){
                aux = numeros[i];
                numeros[i] = numeros[i + 1];
                numeros[i + 1] = aux;
            }
        }
      }

      printf("\nElementos do array organizados de froma crescente:\n");

      for(i = 0; i < Tamanho; i++){
         printf("%4d", numeros[i]);
      }

      printf("\n");

      return 0;
printf("\n\n Bubble Sort: 2 ");
break;
}

case 3:
{
   /* int dividir(int vetor[],int esq, int dir){
        int aux;
        int cont = esq;

        for(int i = esq + 1; i <= dir; i++){
            if(vetor[i]< vetor[esq]){
                cont++;
                aux = vetor[i];
                vetor[i] = vetor[cont];
                vetor[esq] = aux;

            }
        }
        aux = vetor[esq];
        vetor[esq] = vetor[cont];
        vetor[cont] = aux;


        return cont;
    }

    void quick(int vetor[], int esq, int dir){
        int pos;
        if(esq < dir){
            pos = dividir(vetor,esq,dir);
            quick(vetor,esq,pos-1);
            quick(vetor,pos+1,dir);
        }
    }

    int vetor[] = {3,5,8,1,9,2,4,7,0,6};
    int n = 10;

    quick(vetor,0,n);

    printf("\n\n\n");

    for(int i = 0; i < n; i++)
        printf("%d , ", vetor[i]);

        printf("\n\n\n");

        system("pause");

printf("\n\n Quick Sort:  ");
break;*/
}

case 4:
{
    int v[t] = {8,9,1,2,6,7,5,0,3,4};
    int aux, i, j;

    for(j = 0; j <= t - 1; j++){
        aux = v[j];
        i = j -1;

           while((i >= 0) && (v[i] > aux)){

              v[i+1] = v[i];
              v[i] = aux;
              i--;
           }
    }

   for(i = 0; i <= t -1; i++){
    printf("%5d", v[i]);
   }
   printf("\n\n");




printf("\n\n Insertion Sort: ");
break;
}

case 5:
{
    void selecao(int Vet[], int n){

       int Menor, aux;

       for(int i = 0; i < n - 1; i++){
           Menor = i;
        for(int j = i + 1; j < n; j++){
            if(Vet[Menor] > Vet[j])
                Menor = j;
        }
        if(i != Menor){
            aux = Vet[i];
            Vet[i] = Vet[Menor];
            Vet[Menor] = aux;
        }
       }


    }

    int select(){

    int n = 9;
    int Vetor[9] = { 3,6,5,1,2,8,7,9,4};

    selecao (Vetor,n);

    printf("\n\n");

    for(int i = 0; i < n; i++){
        printf("%d , ",Vetor[i]);
    }

    system("pause");
    return 0;

    }





printf("\n\n Selection Sort  ");
break;
}

case 6:
{


printf("\n\n   ");
break;
}
// opção padrão
default:
{
//clrscr();

// se for escolhida a opção 7, ele pula o while utilizando continue para isso
if( escolha==7)
{
continue;
}
// caso o usuário digite um numero acima de N, ele irá informar que nao existe essa opção
printf("\n\n Nenhuma opcao foi escolhida ");
break;
}

}

}

if( escolha==7)
printf("\n\n O Programa foi fechado");

getch();

}






