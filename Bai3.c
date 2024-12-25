#include<stdio.h>

void bubbleSort(int arr[], int n){
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
		if(check == 0){
			break;
		}
	}
}

int searchValue(int arr[], int n, int value){
	int low = 0;
	int high = n - 1;
	
	while(low <= high){
		int mid = (low + high) / 2;
		if(arr[mid] == value){
			return mid;
		}else if(arr[mid] < value){
			low = mid + 1;
		}else{
			high = mid - 1;
		}
	}
	
	return -1;
}

void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

int main(){
	int n, value;
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
	
	printf("Nhap gia tri can tim: ");
	scanf("%d", &value);
	
	int result = searchValue(arr, n, value);
	
	if(result != -1){
		printf("Found");
	}else{
		printf("Not Found");
	}
	return 0;
}
