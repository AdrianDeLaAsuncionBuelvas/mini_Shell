#include <stdio.h>
#include <stdlib.h>


int main()
{
	char buffer[32];
	char *b = buffer;
	size_t bufsize = 32;

	printf("$ ");
	getline(&b, &bufsize, stdin);

	if (getchar() ==  EOF)
	{
		printf("%s",buffer);
		exit(0);
	}

	return(0);
}
