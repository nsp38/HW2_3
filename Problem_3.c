#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[], const char **envp){
	/*	NOTES:	
	*	w,x,y,z are esp locations; a,c,d are eax,ecx,edx;
	*/
	int z = 100;
	int a;
	if(z <= 999) {
		int c = z;
		int d = 1374389535;
		a = c;
		long product = (long) a * (long) d;	// imul with one operand returns 64 bit -> must be split 
		a = product & 0xffffffff;
		d = product >> 32;
		d = d / pow(2, 5);
		a = c;
		a = a / pow(2, 31);
		d = d - a;
		a = d;
		int y = a;
		a = y;
		d = a * -100;
		a = z;
		c = d + a;
		d = 1717986919;
		a = c;
		product = (long) a * (long) d;
		a = product & 0xffffffff;
		d = product >> 32;
		d = d / pow(2, 2);
		a = c;
		a = a / pow(2, 31);
		d = d - a;
		a = d;
		int x = a;
		c = z;
		d = 1717986919;
		a = c;
		product = (long) a * (long) d;
		a = product & 0xffffffff;
		d = product >> 32;
		d = d / pow(2, 2);
		a = c;
		a = a / pow(2, 31);
		d = d - a;
		a = d;
		a = a * pow(2, 2);
		a = a + d;
		a = a + a;
		c = c - a;
		a = c;
		int w = a;
		a = y;
		a = a * y;
		a = a * y;
		d = a;
		a = x;
		a = a * x;
		a = a * x;
		d = d + a;
		a = w;
		a = a * w;
		a = a * w;
		a = a + d;
		if(a != z) {
			z = z + 1;
		}
		a = z;
		int i = a;
		printf("%d" i);
	}
	a = 0;
	return(0);
}
