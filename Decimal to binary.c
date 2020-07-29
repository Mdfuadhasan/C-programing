#include<stdio.h>

int cnt(int n);
void calculate(int *n, int num, int nd);

int main(){
int num, d, i, j;
printf("Enter a decimal number: ");
scanf("%d", &num);
d=cnt(num);
int bin[d];
calculate(bin, num, d);
printf("Binary of %d = ", num);
for(i=0; i<d; i++)
    printf("%d", bin[i]);
return 0;
}

int cnt(int n){
int m=0;
while(n>0){
    n/=2;
    ++m;
}
return m;
}

void calculate(int *n, int num, int nd){
int a;
for(a=nd-1; a>=0; a--){
    *(n+a)=num%2;
    num/=2;
}
}
