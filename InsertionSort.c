#include<stdio.h>
#include<locale.h>
void insertionSort(float a[], int tamanho){
	float chave;
	int i;
	for(int j=1 ; j<tamanho; j++){
		chave = a[j];
		i = j-1;
		while(i>=0 && a[i]>chave){
			a[i + 1] = a[i];
			i--;
			}
		a[i + 1] = chave;
			}
	}
int main(){
	setlocale(LC_ALL, "C");
	int tamanho, n=0;
	printf("Qual tamanho de array voce escolhe?\n");
	scanf("%d",&tamanho);
	float a[tamanho];
	while(n<tamanho){
		printf("Dígite um número para compor a array\n");
		scanf("%f", &a[n]);
		n++;
		}
		insertionSort(a, tamanho);
		printf("Array ordenado: ");
		for (int i = 0; i < tamanho; i++){
			printf("%.2f ", a[i]);
			}
		return 0;
	}