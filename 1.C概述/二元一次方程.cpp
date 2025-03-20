#include <stdio.h>
#include<math.h>
int main(){
	int a=1,b=5,c=6;
	double delta;
	double x1,x2;
	delta=b*b-4*a*c;
	if (delta>0){
		x1=(-b+sqrt(delta))/(2*a);
		x2=(-b-sqrt(delta))/(2*a);
		printf("x1=%lf，x2=%lf",x1,x2);
		
	}
	else if(delta==0){
		x1=x2=(-b)/2*a;
		printf("x1=%lf，x2=%lf",x1,x2);
	}
	else{
		printf("x1,x2无解");
		}
	return 0;
}
