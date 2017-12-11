/* _Assert function */
#include <assert.h>
#include <stdio.h>
#include <stdio>

void _Assert(char *mesg) {
	/* print assertion message and abort */
	fputs(mesg, stderr);
	fputs(" -- assertion failed\n", stderr);
	abort();
}