#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
//------------------Selection Sort Char------------------------------
void trocaChar(char *a, char *b){
	char temp;
	temp = *a;
	*a = *b;
	*b=temp;
}// fim troca

int minIndexChar(char v[], int i, int n){
	int j, imenor = i;
	for(j=i+1;j<n;j++)
		if(v[j]<v[imenor]){
			imenor=j;
		}
			
	return imenor;		
}

void ssortCharacter(char v[], int n){
	int i, indiceMenor;
	for(i=0;i<n-1;i++){
		indiceMenor = minIndexChar(v,i,n);
		trocaChar(&v[i], &v[indiceMenor]);
	}// fim for
}
//============================================
int main(){
	char *vet;
	vet = malloc(sizeof(char) * 1000);
	int n, i;
	printf("Digite o tamanho do vetor:");
	scanf("%d", &n);
	for(i=0;i<n;i++){
		printf("Digite o caractere da posição[%d]: ", i);
		fflush(stdin);
		scanf("%c", &vet[i]);
	}
	for(i=0;i<n;i++){
		printf("%c | ", vet[i]);
	}
	ssortCharacter(vet, n);
	printf("\n");
	for(i=0;i<n;i++){
		printf("%c | ", vet[i]);
	}

	
	
}
