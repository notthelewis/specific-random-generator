# specific-random-generator
C program to generate 102 random numbers which are exactly 3 digits long

I wrote this program to create a (relatively) large set of numbers for unit testing sorting alogrithms.
However, I needed all of the numbers to be exactly 3 digits long.

It's based on George Marsaglia's XOR shift, on a 32bit word state. For more information on this:
https://en.wikipedia.org/wiki/Xorshift

The driver code is one nested loop:

	an incrementing loop from 16->21
		a decrementing loop from 31 -> 16


The outer loop xorshifts it's current position's value, whereas the innerloop xorshifts it's position plus the position of the outer loop. 
