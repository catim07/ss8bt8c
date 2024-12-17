#include<stdio.h>
int main(){
	int hang=3,cot=3;
	int array[3][3]={
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	int sum;
	for(int i=0;i<hang;i++){
			printf("%d ",array[i][hang-i-1]);
				sum+=array[i][hang-i-1];
		}
	printf("\ntong cac phan tu tren duong cheo phu la: %d",sum);
	return 0;
}
