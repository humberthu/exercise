#include <stdio.h>

int main(void)
{
	int i;
	
	printf("She sells sea shells by the seashore.\n");

	for (i=1; i<=6; i++) printf("\n");
	printf("She sells sea shells by the seashore.\n");
	
	for (i=1; i<=50; i++) printf("-");
	printf("\n");
	printf("|   She sells sea shells by the seashore.         |\n");
	for (i=1; i<=50; i++) printf("-");
	return 0;

}
