#include<stdio.h>

void insertSort(int arr[], int n){
	for(int i=1; i<n; i++){
		int key = arr[i];
		int j = i - 1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1] = key;
	}
}

void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
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
	
	insertSort(arr, n);
	printf("Mang sau khi sap xep la: \n");
	printArr(arr, n);
	
	return 0;
}
