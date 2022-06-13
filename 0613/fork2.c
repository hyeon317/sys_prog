#include <stdio.h>
#include <unistd.h>

int main()
{
	int pid;
	pid = fork();
	if(pid == 0) {
		printf("[Child] : pid = %d\n", getpid());
	}
	else {
		printf("[Parent] : pid = %d\n", getpid());
	}
}
