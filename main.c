#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	double squareRoot,c;  
	printf("hello world !");
	printf("\n\nEnter base and height values : \n");
	scanf("%d\n%d",&a,&b);
	c=(a*a)+(b*b);
	squareRoot = sqrt(c);
	printf("Hypotenuse is : %.2f " ,squareRoot);
	return 0;
}
