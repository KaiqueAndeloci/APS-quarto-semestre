#include<stdio.h>
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

}