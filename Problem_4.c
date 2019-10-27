#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[], const char **envp){
	/*	NOTES:	
	*	v,w,x,y,z are esp locations; a,c,d are eax,edx;
	*/
	int w = 0;
	int v = 0;
	int y = 0;
	int a = y;
	int z = 1;
	if(a < z) {
		int x = 1;
		a = x;
		if(a < v) {
			a = w;
			int arr[] = {v, w, x, y, z};
			int d = arr[(a * 4) % 5];
			a = x;
			a = a + d;
			a = a;
			if(a == 0) { // only jumps if eax is 0
				a = w;
				a = a + 1;
				if(a < 0) { // cdq
					d = d * -1;
				}
				long temp = (((long) d) << 32) + a; // divide d:a (64 bits) by x
				a = temp / x;
				d = temp % x;
				w = d;
			}
			x = x + 1;
			a = w;
			a = a + 1;
			if(a < 0) { // cdq
				d = d * -1;
			}
			long temp = (((long) d) << 32) + a; // divide d:a (64 bits) by x
			a = temp / x;
			d = temp % x;
			w = d;
		}
		a = w;
		int arr[] = {v, w, x, y, z};
		int d = arr[(a * 4) % 5];
		a = x;
		a = a + d;
		a = a;
		if(a == 0) { // only jumps if eax is 0
			a = w;
			a = a + 1;
			if(a < 0) { // cdq
				d = d * -1;
			}
			long temp = (((long) d) << 32) + a; // divide d:a (64 bits) by x
			a = temp / x;
			d = temp % x;
			w = d;
		}
		a = w;
		arr[] = {v, w, x, y, z};
		d = arr[(a * 4) % 5];
		a = x;
		a = a + d;
		a = a;
		v = a;
		a = w;
		arr[] = {v, w, x, y, z};
		d = arr[(a * 4) % 5];
		a = x;
		a = a + d;
		a = 0;
		y = y + 1;
	}
	a = v;
	return(0);
}
