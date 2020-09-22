/*
	C program to generate 102 random numbers which are exactly 3 bits long
*/

#include <stdio.h>

int xorshift(int x) {
	x ^= x << 13;
	x ^= x >> 17; 
	x ^= x << 5;
	return x;
}

int main(int argc, char const *argv[])
{

	int i, j, x, y;

	// g keeps count of current number being generated, for computation with current number
	int g = 0;

	for (i=16; i<=21; i++) {
		x = xorshift(i);
		y = (x >> 0x0F);
		printf("%d\n", y);
		g++;
		for (j=31; j>=16; j--) {
			x = xorshift(j+i);
			y = (x >> 0x0F);
			printf("%d\n", y);
			g++;
		}
	}
	printf("Generated %d \"random\" numbers  which are all 3 characters long\n ",g);
	return 0;
}
