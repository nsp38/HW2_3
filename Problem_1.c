#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[], const char **envp){
	/*	NOTES:	
	*	x,y,z are esp locations; a,c,d are eax,ecx,edx;
	*/
	int x = 3;
	int y = 5;
	int z = 0;
	int a = x;
	a = a * y;
	int d = a;
	a = x;
	int c = a;
	c = c / pow(2, 31); //Shift right (shr)
	a = c;
	a = a / pow(2, 1);
	d = d - a;
	a = d;
	z = a;
	a = z;
	int i = a;
	printf("%d" i);
	a = 0;
	return(0);
}
