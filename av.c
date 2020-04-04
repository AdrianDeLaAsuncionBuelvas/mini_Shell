#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;
	for (i = 0; av[i]; i++)
		printf("Argument[%d]: %s\n", i, av[i]);

	return(0);
}
