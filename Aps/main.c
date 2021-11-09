#include <stdio.h>
#include <stdlib.h>
#define Tamanho 493
#define t 10
#define TAM 5 //tamanho do balde

void main()
{

int escolha;

// se a escolha for diferente de 0, ele continua... o que inicialmente eh verdade
while (escolha!=0)
{
printf("\n\n ---------- MENU INICIAL ----------");

printf("\n 1 - Ordenacao por Troca ");
printf("\n 2 - Bubble Sort  ");
printf("\n 3 - Quick Sort ");
printf("\n 4 - Insertion Sort ");
printf("\n 5 - Selection Sort ");
printf("\n 6 - Binary InsertionSort");
printf("\n 7 - BucketSort");
printf("\n 8 - HeapSort");
printf("\n 9 - MergeSort (falta fazer)");
printf("\n 0 - sair");
printf("\n\n Escolha uma opcao: ");
scanf("%d",&escolha);

printf("\n\n");
// estrutura switch
switch (escolha) {

case 1:
{
    int vetor[] = {2,4,6,0,0,  342, 2  ,213, 321,123,123,54,63,2357,7456,534,52,8456,
    5,635,74,2345,645,234,645,78456,8,645,8,4567,3456,45,568,8967,56,345,7678,456,456,
    8576,76,754,435,7456,345,567867,97890,456,8,89670,9,78,645,4,1,23,4,5,6,7,8,98,9,90,
    2,543,65,34,567,756,33,44,55,66,77,88,99,23,34,44,754,54,76}, aux;

   //for(int i = 0; i < 15; i++) {
   //  printf("Digite o numero %d do vetor: ", i);
   //  scanf("%d", &vetor[i]);
   //}




   for(int x = 0; x < 83; x++){
      for(int y = x; y < 83; y++){
        if(vetor[x] > vetor[y]){
            aux = vetor[x];
            vetor[x] = vetor [y];
            vetor[y] = aux;
        }
      }
   }
   printf("\n\n Vetor Ordenado: ");
   printf("\n\n");

   for(int i = 0; i < 83; i ++){
       printf("numero %d eh: %d \n", i, vetor[i]);
   }

    printf("\n\n Opcao escolhida: Ordenacao por troca \n");
break;
}

case 2:
{

    //int numeros[Tamanho];
    int numeros[] = {0,1,3,2};

    int i, aux, contador;

    //printf("Entre com numeros para preencher o array:\n");
    //for(i = 0; i < Tamanho; i++){
    //    scanf("%d", &numeros[i]);
    //}
    printf("A ordem atual dos itens no array eh:\n");

    //for(i = 0; i < Tamanho; i++){
    //    printf("%4d", numeros[i]);
    //}

     // Algoritmo para fazer a ordenacao BubbleSort:

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
         printf("%4d ", numeros[i]);
      }

      printf("\n");

printf("\n\n Bubble Sort: 2 ");
return 0;
break;
}

case 3:
{/*
int main(){
   
    int vetor1[] = {475,	 21,	281,	445,	443,	455,	451,	183,	218,	277,
    291,	129,	403,	 45,	481,	465,	141,	202,	 88,	212,
    37,	433,	155,	173,	264,	 82,	424,	  5,	102,	479,
    122,	302,	423,	 65,	256,	374,	247,	474,	150,	 53,
    83,	 17,	222,	285,	105,	434,	496,	142,	366,	315,
    130,	232,	238,	134,	333,	259,	112,	454,	 60,	 35,
    18,	316,	408,	265,	289,	 58,	301,	391,	110,	382,
    473,	127,	104,	258,	253,	373,	187,	 32,	425,	165,
    467,	420,	243,	311,	438,	219,	347,	  3,	237,	387,
    385,	210,	 13,	489,	245,	 25,	220,	117,	428,	123};
   
   Quick(vetor1, 0, 99);
}

void Quick(int vetor[10], int inicio, int fim){
   
   int pivo, aux, i, j, meio;
   
   i = inicio;
   j = fim;
   
   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];
   
   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;
      
      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);
   
   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);   

} */
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
/*
int procurando_posicao(int a[], int item, int MIN, int MAX)
{
    if (MAX <= MIN)
        if (item > a[MIN])
            return MIN + 1;
        else
            return MIN;

    int meio = (MIN + MAX) / 2;
 
    if (item == a[MAX])
        return meio + 1;
 
    if (item > a[MAX])
        return procurando_posicao(a, item, meio + 1, MAX);

    return procurando_posicao(a, item, MIN, meio - 1);
}
 
void binary_insertion_sort(int a[], int n)
{
    int i, local, j, k, atual;
 
    for (i = 1; i < n; ++i)
    {
        j = i - 1;
        atual = a[i];
 
        // vai retornar a posicao certa6
        local = procurando_posicao(a, atual, 0, j);

        // vai mover os itens 1 posicao
        while (j >= local)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = atual;

    }
}
 
int main()
{
    int vetor1[] = {475,	 21,	281,	445,	443,	455,	451,	183,	218,	277,
        291,	129,	403,	 45,	481,	465,	141,	202,	 88,	212,
        37,	433,	155,	173,	264,	 82,	424,	  5,	102,	479,
        122,	302,	423,	 65,	256,	374,	247,	474,	150,	 53,
        83,	 17,	222,	285,	105,	434,	496,	142,	366,	315,
        130,	232,	238,	134,	333,	259,	112,	454,	 60,	 35,
        18,	316,	408,	265,	289,	 58,	301,	391,	110,	382,
        473,	127,	104,	258,	253,	373,	187,	 32,	425,	165,
        467,	420,	243,	311,	438,	219,	347,	  3,	237,	387,
        385,	210,	 13,	489,	245,	 25,	220,	117,	428,	123};

    //tamanho do a[]
    int n = sizeof(vetor1) / sizeof(vetor1[0]), i;

    //FUNCAO binary_insertion_sort VAI ORGANIZAR A LISTA PASSADA NO PARAMETRO
    binary_insertion_sort(vetor1, n);
 
    printf("lista certa: \n");
    for (i = 0; i < n; i++)
        printf("%d ", vetor1[i]);
 
    return 0;
}*/

printf("\n\n   ");
break;
}
case 7:
{
    /*
struct balde
{
    int qtd;
    int valores[TAM];
};

void bucketSort(int *v, int n)
{
     int i, j, maior, menor, nroBaldes, pos;
    struct balde *bd;
    //Acha o valor maior e menor
    maior = menor = v[0];
    for(i = 1; i < N; i++){
     if(V[i] > maior) maior = V[i];
     if(V[i] < menor) menor = V[i]; 
    }

//Inicializa baldes
nroBaldes = (maior - menor) / TAM + 1;
bd = (struct balde *) malloc(nroBaldes * sizeof(struct balde));
for(i = 0; i <nroBaldes; i++)
 bd[i].qtd = 0;

//Distribui os valores nos baldes
for(i = 0; i < N; i++){
    pos = (V[i] - menor)/TAM;
    bd[pos].valores[bd[pos].qtd] = V[i];
    bd[pos].qtd++;
}
//Ordena os baldes e coloca no array
pos = 0;
for(i = 0; < nroBaldes; i++){
    insertionSort(bd[i].valores, bd[i].qtd);
    for(j = 0; j < bd[i].qtd; j++){
        V[pos] = bd[i].valores[j];
        pos++
    }
}
 free(bd);
}*/

printf("\n\n   ");
break;
}
case 8:
{
    /*
void heapSort(int *Vetor, int N){
    int i, aux;
    //Cria a Heap do meio do vetor pra tras
    for (i = (N - 1)/2; i >= 0; i--){
        criaHeap(Vetor, i, N-1);
    }
    //busco o maior elemendo da heap e coloca na na ultima,
    //dps penultima e assim vai ate ordenar a heap
    for (i = N-1; i >= 1; i--){
        aux = Vetor[0];
        Vetor [0] = Vetor [i];
        Vetor [i] = aux;
        criaHeap(Vetor, 0, i - 1);
    }
}

void criaHeap(int *Vetor, int i , int fim){
    int aux = Vetor[i];
    int j = i * 2 + 1;
    while (j <= fim){
        if (j < fim){
            //Compara quem � maior entre os dois filhos do pai
            if(Vetor[j] < Vetor[j + 1]){
                j = j + 1;
            }
        }
        //Se o filho maior que o pai, o filho se torna o pai
        if (aux < Vetor[j]){
            Vetor[i] = Vetor[j];
            i = j;
            j = 2 * i + 1;
        }else{
            j = fim + 1;
        }
    }
    //Antigo Pai vai para o lugar do filho analisado
    Vetor[i] = aux;
}
*/
printf("\n\n   ");
break;
}
case 9:
{

printf("\n\n   ");
break;
}
// op��o padr�o
default:
{
//clrscr();

// se for escolhida a op��o 7, ele pula o while utilizando continue para isso
if( escolha==0)
{
continue;
}
// caso o usu�rio digite um numero acima de N, ele ir� informar que nao existe essa op��o
printf("\n\n Nenhuma opcao foi escolhida ");
break;
}

}

}

if( escolha==0)
printf("\n\n O Programa foi fechado");

getch();

}






