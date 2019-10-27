#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char *argv[], const char **envp){
	/*	NOTES:	
	*	q,r,s,t,u,v,w,x,y,z are esp locations; a is eax;
	*/
	q = 12;
	r = 15;
	s = 221;
	t = 3;
	u = 432;
	v = 54;
	w = 16;
	x = 67;
	y = 0;
	z = 0;
	int arr[] = {q, r, s, t, u, v, w, x, y, z};
	int a;
	if(z <= 7) {
		a = z;
		a = arr[(a * 4) % 10]; // to get the correct esp location value
		if(a <= y) {
			z = z + 1;
		}
		a = z;
		a = arr[(a * 4) % 10];
		y = a;
	}
	a = y;
	int i = a;
	printf("%d" i);
	a = 0;
	return(0);
}
