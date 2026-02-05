#include <stdio.h>
#include <stdlib.h>

int test() {
	printf("Hello World from test!");
	return 0;
}

int main(int argc, char *argv[]) {
	for (int i=0; i<argc; i++) {
		printf("arg[%d] is %s\n",i,argv[i]);
	}
	if (!test()) printf("test is done without problem");
	
	printf("something new on main branch after creating RB_1.0 branch");

	return 0;
}
