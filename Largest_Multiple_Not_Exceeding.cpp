#include <stdio.h>
int main(){
	unsigned int a, b;	
	do{
		printf("nhap a > b: ");
		scanf("%d%d", &a, &b);
		if(a<b){
			printf("vui long nhap lai ");
		}	
	} while(a<b);
	
	int output;
	output = b * (a / b);
	printf("ket qua: %d", output);
	return 0;
}


