#include<stdio.h>
int main(){
	int arr[100];
	int size, number;
	printf("nhap  so phan tu cua mang: ");
	scanf("%d", &size);
	for(int i = 0; i < size;i++){
		printf("nhap vao phan tu thu %d cua mang: ", i+1);
		scanf("%d", &arr[i]); 
	}
	int test = 0; 
	printf("nhap  phan tu can tim: ");
	scanf("%d", &number); 
	for(int i = 0; i < size; i++){
		if(number == arr[i]){
			printf("vi tri cua phan tu %d la: %d\n", number, i+1);
			test = 1; 
		}
	}
	if(test == 0){
		printf("khong co trong mang!"); 
	} 
	return 0; 
} 
