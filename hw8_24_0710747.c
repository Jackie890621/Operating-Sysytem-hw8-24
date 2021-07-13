#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	unsigned long page;
	unsigned long offset;
	unsigned long address = atoi(argv[1]);

	page = address >> 12;
	offset = address & 0xfff;

	printf("The address %lu contains : \n", address);
	printf("page number = %lu\n", page);
	printf("offset = %lu\n", offset);
	return 0;
}

