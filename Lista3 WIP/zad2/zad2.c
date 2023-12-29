//zad2 Rafal Wochna 279752
#include "zad2.h"
#include <math.h>
#include <stdio.h>
int main(void){
	int a=2,b=4;
	double eps;
for(int i=1;i<=8;i++){
eps=pow(10,-1*i);
printf("%s %d %s %.16f %s","k=",i," ",rozwiazanie(a,b,eps),"\n");	
}	
}
