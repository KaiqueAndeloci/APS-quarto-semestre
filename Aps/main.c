#include <stdio.h>
#include <stdlib.h>
#define Tamanho 493
#define t 10
#define TAM 5 //tamanho do balde

void main()
{
int VETOR[] = {2503,	4266,	5930,	7374,	4148,	7519,	5227,	6358,	8287,	6168,
8333,	8255,	3115,	4764,	9679,	9077,	8536,	 174,	5913,	1182,
7791,	4229,	6954,	9766,	1554,	7975,	 680,	7211,	8703,	 781,
9587,	1206,	5048,	5518,	8581,	9196,	3037,	3808,	5554,	1324,
9976,	3888,	9580,	3091,	8653,	9259,	2168,	7189,	9433,	8082,
8372,	7225,	2312,	5326,	6991,	3866,	3302,	7671,	1078,	2005,
8453,	 666,	3212,	3501,	6184,	1793,	2698,	9221,	5601,	8253,
 546,	5577,	2141,	 126,	8669,	 794,	9386,	 837,	7984,	8820,
8920,	6356,	6045,	1232,	1683,	5098,	4985,	 709,	6177,	9162,
6843,	 203,	2664,	3028,	1996,	5362,	2250,	7598,	3616,	2796,
3175,	5758,	2923,	1845,	6552,	2309,	2683,	4537,	1130,	1603,
 893,	7175,	2835,	2577,	 213,	7934,	7562,	 922,	4111,	4553,
  85,	 955,	4756,	2750,	3983,	6753,	8112,	6233,	4351,	1729,
9030,	7527,	7487,	1953,	9372,	4040,	4263,	2055,	8577,	5393,
3658,	9471,	2569,	6494,	2048,	2782,	4428,	9610,	3705,	8540,
4164,	3790,	9496,	6540,	3480,	5673,	4653,	9714,	  25,	6382,
8744,	7552,	3869,	 698,	6925,	7910,	4962,	8980,	6487,	 355,
2639,	5958,	2925,	9133,	8007,	5708,	3562,	7617,	9413,	2103,
1781,	3204,	1599,	 702,	9745,	5079,	6376,	4398,	4793,	6401,
3538,	3954,	4651,	4236,	 879,	2561,	9198,	9859,	9049,	9554,
2499,	5008,	2480,	1632,	3015,	8188,	5195,	 632,	7601,	7298,
2414,	 806,	8897,	3116,	 551,	3977,	9493,	4950,	8770,	5895,
5731,	2308,	9849,	 383,	6545,	 728,	2945,	5744,	 588,	1994,
5298,	3088,	7002,	7778,	4721,	  17,	5967,	9916,	 650,	3568,
7214,	3065,	4375,	6112,	6182,	4926,	  89,	5675,	9876,	8860,
1570,	5608,	1169,	1420,	5991,	7715,	2149,	8936,	3459,	2738,
 931,	8758,	5826,	6537,	 547,	7951,	2504,	 464,	8602,	6073,
7679,	1667,	 448,	3791,	7849,	5374,	3881,	3524,	5251,	2742,
5095,	 859,	3912,	6515,	6850,	1627,	8664,	5787,	5086,	1403,
6718,	3844,	7229,	4652,	 382,	7777,	2604,	2886,	8241,	1207,
8960,	5920,	2874,	9408,	9712,	 723,	4783,	3594,	4248,	  34,
6336,	9344,	 248,	5859,	7744,	1875,	4524,	3531,	6962,	5927,
 250,	 807,	3157,	4903,	1189,	 934,	7508,	4076,	9175,	8715,
3036,	5096,	1590,	2445,	4808,	2314,	8402,	6562,	7263,	4739,
5906,	8157,	4988,	1766,	5901,	6863,	6291,	3826,	2219,	9684,
4633,	5376,	4588,	5823,	6310,	2097,	9899,	5486,	 812,	2936,
 582,	2403,	5381,	5391,	4717,	2611,	3793,	1280,	9874,	8533,
7187,	8032,	3521,	8953,	3933,	 385,	5245,	3367,	4211,	7464,
3052,	8845,	2840,	7640,	4668,	9151,	9737,	4568,	4638,	 550,
7504,	5220,	2953,	 611,	5497,	4405,	8951,	5372,	2939,	6138,
3404,	6460,	5092,	7338,	6845,	 337,	 706,	1057,	7802,	3758,
9902,	 643,	1398,	4571,	9794,	1136,	9139,	4433,	1687,	6644,
9653,	4641,	9530,	 265,	5028,	4671,	1264,	 401,	7610,	7402,
3805,	4071,	2494,	1144,	 916,	2832,	1850,	1974,	 634,	1876,
1277,	7007,	6448,	1072,	8144,	5587,	5505,	9831,	2231,	5158,
4473,	1762,	5424,	6785,	6791,	  95,	8049,	7192,	7706,	5452,
 998,	1777,	7947,	2142,	2694,	 779,	3993,	1413,	9602,	2690,
6609,	2993,	3763,	4754,	8580,	9268,	4586,	4427,	9059,	2575,
9851,	5845,	9367,	9947,	3895,	6560,	7653,	9347,	7558,	9431,
7294,	9701,	2125,	8074,	3694,	6794,	9487,	3297,	3339,	2178,
9906,	6332,	5941,	4661,	4913,	5209,	9247,	5726,	9636,	8307,
8302,	9488,	4152,	7669,	9436,	8048,	7090,	7396,	1788,	6521,
4690,	1489,	8647,	2764,	5184,	5441,	2252,	8481,	8780,	4431,
8388,	5113,	 372,	3050,	  26,	5582,	2297,	5753,	5218,	 604,
4055,	4707,	4757,	1724,	4143,	2805,	5954,	1233,	 201,	7742,
7755,	4892,	9232,	6402,	7657,	4416,	1843,	9910,	2898,	 623,
4341,	1287,	5737,	4713,	4337,	5764,	 295,	6634,	1517,	5514,
7239,	5573,	 222,	1997,	7297,	4365,	4803,	3252,	5599,	5005,
 994,	3354,	9897,	 226,	9756,	7555,	4643,	7466,	7541,	2223,
1807,	8828,	7960,	3165,	3724,	6817,	9800,	5242,	2332,	7040,
 815,	2554,	9037,	8113,	6920,	3841,	1365,	2520,	8846,	2360,
5874,	2586,	5631,	6300,	7230,	7231,	3766,	4771,	9454,	3600,
7415,	2095,	6766,	1140,	8912,	6567,	1245,	3607,	7198,	3800,
2645,	5311,	 720,	6486,	6677,	3240,	5333,	9115,	4077,	1624,
4746,	 377,	8854,	1977,	4144,	3626,	1432,	9718,	7226,	8847,
1813,	9988,	 726,	 560,	6371,	1971,	4168,	3569,	5771,	6814,
8880,	6492,	3301,	5558,	9733,	8634,	4595,	8848,	2712,	6220,
3089,	5074,	5571,	7233,	8700,	7003,	6951,	5851,	8765,	9920,
5839,	9491,	 480,	2210,	1463,	4648,	5780,	7235,	1462,	3727,
4763,	 219,	3460,	3398,	4815,	6110,	1035,	5903,	9200,	6109,
1475,	6433,	4809,	8479,	3385,	 736,	4331,	2151,	 657,	 171,
1643,	1137,	2381,	3106,	5786,	8161,	 342,	7249,	2823,	4070,
2013,	3042,	7531,	5411,	7857,	9840,	1521,	8892,	 722,	5001,
7219,	7156,	9811,	5699,	 541,	 548,	  30,	2693,	1205,	4336,
2343,	2583,	7443,	8129,	 745,	7785,	5378,	1855,	7392,	6611,
2803,	4468,	9227,	4325,	3360,	4971,	5047,	8362,	2191,	2203,
8174,	7891,	2745,	8723,	7921,	5439,	9928,	8123,	9775,	2272,
 707,	1452,	5021,	6860,	3172,	6247,	5976,	6100,	5475,	 302,
9461,	 446,	5350,	7824,	2638,	7554,	5999,	 529,	 300,	4722,
8451,	5739,	6574,	5515,	6923,	7281,	2734,	7324,	8734,	7739,
3105,	3755,	4600,	6278,	5387,	 848,	2255,	1488,	6323,	2557,
 950,	6770,	7907,	8774,	5461,	4773,	9938,	5762,	8389,	1501,
4147,	4964,	7016,	1070,	2246,	9750,	8395,	 980,	7489,	4735,
2090,	7779,	 123,	2938,	1612,	9261,	2592,	2562,	6031,	 499,
1337,	5440,	5961,	6111,	1723,	5607,	3768,	3225,	9754,	8732,
 241,	 825,	 978,	9992,	9220,	1959,	7482,	 721,	6695,	9572,
8501,	6819,	2510,	8535,	8431,	1772,	1128,	7804,	2331,	3244,
7589,	8443,	8623,	9313,	4050,	2392,	2539,	1125,	2780,	4630,
2773,	3851,	4062,	 255,	4573,	 758,	9827,	3074,	7577,	2338,
1610,	6008,	4110,	1915,	4366,	9334,	5160,	1956,	3784,	1270,
1828,	6176,	3809,	5633,	7301,	6590,	 264,	9405,	9363,	4115,
3468,	9618,	8689,	4226,	9446,	1763,	1803,	1784,	3373,	7812,
7810,	 478,	4149,	2970,	2434,	1927,	6754,	3704,	2931,	7514,
9389,	 232,	4104,	9637,	3467,	3769,	3086,	2458,	7332,	2532,
4221,	9135,	4317,	7595,	6948,	 212,	3707,	8023,	4186,	5912,
6621,	7839,	7749,	 326,	1595,	7840,	 984,	 913,	1945,	 638,
5412,	4407,	3657,	8499,	6866,	 989,	1031,	1087,	 125,	5349,
8683,	7073,	5562,	2391,	8836,	3586,	6577,	4749,	4580,	3198,
2589,	2330,	3525,	4184,	3010,	5169,	3924,	3310,	5807,	4475,
 215,	8132,	7222,	7081,	9121,	8254,	8169,	9246,	3604
};


int escolha;

// se a escolha for diferente de 0, ele continua... o que inicialmente eh verdade
while (escolha!=0)
{
printf("\n\n ---------- MENU INICIAL ----------");

printf("\n 1 - Bubble Sort  ");
printf("\n 2 - Quick Sort ");
printf("\n 3 - Insertion Sort ");
printf("\n 4 - Selection Sort ");
printf("\n 5 - Binary InsertionSort");
printf("\n 6 - BucketSort");
printf("\n 7 - HeapSort");
printf("\n 8 - MergeSort (falta fazer)");
printf("\n 0 - sair");
printf("\n\n Escolha uma opcao: ");
scanf("%d",&escolha);

printf("\n\n");
// estrutura switch
switch (escolha) {


case 1:
{

    //int numeros[Tamanho];
    int numeros[] = {0,1,3,2};

    int i, aux, contador;

    printf("A ordem atual dos itens no array eh:\n");

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

break;
}

case 2:
{
quick_sort(VETOR, 0, 999 - 1);

break;
}
case 3:
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

case 4:
{
    selecao(VETOR,999);

    printf("\n\n");

    //for(int i = 0; i < n; i++){
    //    printf("%d , ",Vetor[i]);
    //}



printf("\n\n Selection Sort  ");
break;
}

case 5:
{
    //tamanho do a[]
    int n = sizeof(VETOR) / sizeof(VETOR), i;

    //FUNCAO binary_insertion_sort VAI ORGANIZAR A LISTA PASSADA NO PARAMETRO
    binary_insertion_sort(VETOR, n);
 
    //printf("lista certa: \n");
    //for (i = 0; i < n; i++)
    //    printf("%d ", VETOR[i]);
 

printf("\n\n");
break;
}

case 6:
{
bucketSort(VETOR,999);

printf("\n\n   ");
break;
}

case 7:
{
heapSort(VETOR, 999);

printf("\n\n   ");
break;
}

case 8:
{
mergeSort(VETOR,0,999 - 1);

printf("\n\n   ");
break;
}


// opcao padrao
default:
{
//clrscr();

// se for escolhida a opcao 7, ele pula o while utilizando continue para isso
if( escolha==0)
{
continue;
}
// caso o usu�rio digite um numero acima de N, ele ira informar que nao existe essa opcao
printf("\n\n Nenhuma opcao foi escolhida ");
break;
}

}

}

if( escolha==0)
printf("\n\n O Programa foi fechado");

getch();

}
//================================================
//quick_sort
//================================================
void quick_sort(int *a, int left, int right) {
    int i, j, x, y;
     
    i = left;
    j = right;
    x = a[(left + right) / 2];
     
    while(i <= j) {
        while(a[i] < x && i < right) {
            i++;
        }
        while(a[j] > x && j > left) {
            j--;
        }
        if(i <= j) {
            y = a[i];
            a[i] = a[j];
            a[j] = y;
            i++;
            j--;
        }
    }
     
    if(j > left) {
        quick_sort(a, left, j);
    }
    if(i < right) {
        quick_sort(a, i, right);
    }
}

//================================================
//binary_insertion_sort
//================================================
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
//================================================
//HEAPSORT
//================================================
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


//================================================
//SELECTION
//================================================
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


//================================================
//bucketSort
//================================================
struct balde
{
    int qtd;
    int valores[TAM];
};

void bucketSort(int *V, int N)
{
     int i, j, maior, menor, nroBaldes, pos;
    struct balde *bd;
    //Acha o valor maior e menor
    maior = menor = V[0];
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
for(i = 0;N < nroBaldes; i++){
    insertionSort(bd[i].valores, bd[i].qtd);
    for(j = 0; j < bd[i].qtd; j++){
        V[pos] = bd[i].valores[j];
        pos++;
    }
}
 free(bd);
}



//================================================
//Mergesort
//================================================
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
  
    int L[n1], R[n2];
  
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
  
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
  

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
  

void mergeSort(int arr[], int l, int r)
{
    if (l < r) {

        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
  
        merge(arr, l, m, r);
    }
}
  