#include<stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void selectSort(int arr[], int n){
	int count = 0;
	for(int i=0; i<n-1; i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
			
		}
		count++;
		swap(&arr[min], &arr[i]);
	}
	printf("Tong so lan lap la: %d\n", count);
}

int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	int arr[n];
	
	for(int i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("Mang ban dau: \n");
	printArr(arr, n);
	
	selectSort(arr, n);
	printf("Mang sau khi sap xep la: \n");
	printArr(arr, n);
	return 0;
}
