#include<stdio.h>
int main(){
	int n;
	do{
		printf("nhap so luong phan tu cua mang :");
		scanf("%d",&n);
		if(n<=0 || n>100){
			printf("so luong phan tu nam trong khoan tu 0 den 100");
	
		}
	}while(n<=0 || n>100);
	int arr[n];
 	printf("Nhap cac phan tu cua mang:\n");
	for (int i = 0; i < n; i++) {
	    printf("Phan tu [%d]: ", i);
	    scanf("%d", &arr[i]);
	}
 	printf("Mang sau khi dao nguoc:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
	return 0;
}
