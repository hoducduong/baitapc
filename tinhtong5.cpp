#include <stdio.h>

int main(){
	unsigned long long n;
	unsigned long long tong;
	scanf("%lld", &n);
	if(n%2==0){
		tong =  n / 2;
	} else {
		tong = n/2 - n; 
	}
	printf("tong: %lld", tong);
}
