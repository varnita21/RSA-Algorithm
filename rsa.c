
# RSA-Algorithm
Encryption of a number using RSA algorithm in cryptography and network security in C.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
int fgcd(int e,int l);

void main() {
	clrscr();
	int e,p,q,n,l,i,gcd=1,e1,num,cipher,count=0;
	int c[20];
	printf("Enter the number\t");
	scanf("%d",&num);
	printf("Enter the two prime numbers p and q:\t");
	scanf("%d %d",&p,&q);

	n=p*q;
	l=(p-1)*(q-1);
	e=2;
	while(e<l) {
		gcd = fgcd(e,l);
		if(gcd==1)  {
			c[count]=e;
			e++;
			count++;
			}
		else
			e++;
	}
	printf("These are the following cipher num\n");
	for(i=0;i<20;i++) {
		cipher= (num^c[i])%n;
		printf("The cipher text when e = %d:\t%d\n",c[i],cipher);
	}

	getch();

}
int fgcd(int e,int l){
	int g,i;
	for(i=2;i<e;i++){
		if(e%i==0 && l%i==0){
			g = 0;
			break;}
		else
			g=1;
	}
	return g;
}
