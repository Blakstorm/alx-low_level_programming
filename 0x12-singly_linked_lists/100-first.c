#include<stdio.h>

/**
 * constructor - Apply the constructor
 *   is executed before main()
 */

void constructor(void) __attribute__ ((constructor));

/**
 * constructor - implementation of constructor
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
