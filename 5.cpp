#include <stdio.h>
#include <stdlib.h>
int main(){
	//1. Khai bao mang so nguyen 2 chieu n*m
	int n,m;
	printf("Nhap vao so dong cua mang 2 chieu:");
	scanf("%d",&n);
	printf("Nhap vao so cot cua mang 2 chieu:");
	scanf("%d");
int numbers[n][m];
	//2. In menu
		do{
		printf("***************MENU**************\n");
		printf("1. Nhap gia tri cac phan tu mang\n");
		printf("2. In gia tri cac phan tu mang theo ma tran\n");
		printf("3. tinh so luong cac phan tu le chia het cho 5 trong mang\n");
		printf("4. in ra cac phan tu co gia tri max,min nam tren duong bien,duong cheo chinh,duong cheo phu\n");
		printf("5. su dung thuat toan sap xep lua chon sap xep cac phan tu giam dan theo dong cua mang\n");
		printf("6. tinh tong cac phan tu la so nguyen to trong mang\n");
		printf("7. su dung thuayt toan chen sap xep cac phan tu tren duong cheo phu cua mang tang dan\n");
		printf("8. nhap gia tri mang 1 chieu gom n phan tu va chi so muon chen vao mang, thuc hien chen vao mang 2 chieu\n");
		printf("9.thoat\n");
		printf("nhap lua chon can nhap \n");
			int choice;
		scanf("%d",&choice);
		switch(choice){
			case 1:
				printf("Nhap gia tri cac phan tu mang:\n");
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						printf("numbers[%d][%d]=",i,j);
						scanf("%d",&numbers[i][j]);
					}
				}
				break;
			case 2:
				printf("Gia tri cac phan tu trong mang:\n");
				for(int i=0;i<n;i++){
						for(int j=0;j<m;j++){
							printf("%d\t",numbers[i][j]);
						}
						printf("\n");
				}
				printf("\n");
				break;
