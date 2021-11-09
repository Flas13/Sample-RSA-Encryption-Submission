#include<stdio.h>
#include <math.h>

void encryption(int p, int q);
void decryption(int p, int q);

int main()
{
    int a, b;
    
    printf("Input P: ");
    scanf("%d", &a);
    printf("Input Q: ");
    scanf("%d", &b);
    
    encryption(a,b);
    return 0;
}

void encryption(int p, int q)
{
	int z,w,d = 223;
	double n, e=7;
	char x[10] = "ENCRYPTION";
	char y[8] = "RASTAMAN";
	char a[10];
	char b[8];
	
	n = p*q;
	z = (p-1)*(q-1);
	for(w=0; w<10; w++){
		a[w]= fmod(pow(x[w],e),n);
	}
	for(w=0; w<8; w++){
		b[w]= fmod(pow(y[w],e),n);
	}
	printf("\n%s", a);
	printf("\n%s", b);
}

