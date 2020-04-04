#include  <stdio.h>
#include  <stdlib.h>
#include <unistd.h>

int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	my_pid = fork();
	if (my_pid == 0)
	{
		printf("Proceso Padre ID: %u\n", getppid());

		printf("Proceso Hijo ID: %u\n", my_pid);
	}

	return (0);
}
