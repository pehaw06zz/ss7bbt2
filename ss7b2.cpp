#include<stdio.h>
int main(){
int arrayInt[5];
printf("nhap lan luot 5 so nguyen: \n");
for(int i =0;i<5;i++){
	printf("nhap tung gia tri [%d]= ",i+1);
	scanf("%d",&arrayInt[i]);	
    }
    printf("so vua nhap la:\n");
    for(int i=0;i<5;i++){
    	printf("%d",arrayInt[i]);
	}
    return 0;
}
