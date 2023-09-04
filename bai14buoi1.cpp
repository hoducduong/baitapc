#include <stdio.h>

int main(){
	int a, b;
	scanf("nhap a > b: ");
	scanf("%d%d", &a, &b);
	int sochiahetchob;
	if(a%b==0){
	sochiahetchob = a;
	printf("so chia het cho b nho nhat va lon hon hoac bang a: %d", sochiahetchob);
	
	}
	else{
	sochiahetchob = ((a/b) + 1) * b;
	printf("so chia het cho b nho nhat va lon hon hoac bang a: %d", sochiahetchob);
   } 
	return 0;
}


