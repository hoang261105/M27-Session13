#include<stdio.h>

void bubbleSort(int arr[], int n){
	int count = 0;
	for(int i=0; i<n-1; i++){
		int check = 0;
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				check = 1;
			}
		}
		count++;
		if(check == 0){
			break;
		}
		
	}
	printf("Tong so lan lap la: %d\n", count);
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
	
	bubbleSort(arr, n);
	printf("Mang sau khi sap xep la: \n");
	printArr(arr, n);
	
	return 0;
}
