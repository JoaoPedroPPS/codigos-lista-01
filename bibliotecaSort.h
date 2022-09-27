#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
void troca(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b=temp;
}// fim troca
//----------------------

//---------------------
void geraVet(int v[], int n){
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++)
	   v[i]=rand()%50;
}// fim geraV
//-----------------------------
void printVetor(int v[],int n){
	int i;
	for(i=0;i<n;i++)
	  printf("%d |",v[i]);
	printf("\n");  
}// fim printVetor
//------------- Selection Sort ---------------
int minIndex(int v[], int i, int n){
	int j, imenor = i;
	for(j=i+1;j<n;j++)
		if(v[j]<v[imenor]){
			imenor=j;
		}
			
	return imenor;		
}

void ssort(int v[], int n){
	int i, indiceMenor;
	for(i=0;i<n-1;i++){
		indiceMenor = minIndex(v,i,n);
		troca(&v[i], &v[indiceMenor]);
	}// fim for
}

