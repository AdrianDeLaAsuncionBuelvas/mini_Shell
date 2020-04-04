#include <stdio.h>
#include <string.h>

int main()
{
	char str[80] = {" Hello & Holberton - Betty _ Holberton % intranet"};
	const char s[8] = {'-', '_', '&', '%'};
	char *token;

	/* get the first token */
	token = strtok(str, s);

	/* walk through other tokens */
	while (token != NULL)
	{
		printf(" %s\n", token);
		token = strtok(NULL, s);
	}

	return (0);
}
