#include <stdio.h>

int main(int length, char* args[]) {
	
	for (int i = 1; i < length; i++)
		printf("%s ", args[i]);
	printf("\n");
	
	return 0;
}

