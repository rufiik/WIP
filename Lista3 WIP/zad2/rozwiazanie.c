#include "zad2.h"
#include <math.h>
#include <stdio.h>
double rozwiazanie(double a, double b, double eps){
	double fa,fb,fc,c;
	fa=f(a);
	fb=f(b);
	
while(fabs(a-b)>eps){
	if(fa*fb>0){
		printf("%s","Wartosci nie sa roznych znakow \n");
	}
	else{
	c=(a+b)/2;
	fc=f(c);
		if(fc*fb<0){
			fa=f(c);
			a=c;
				}
			else{
				fb=f(c);
				b=c;
				}
		}
}
return c;




}
