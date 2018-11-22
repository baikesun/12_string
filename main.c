#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char src[100] = "Programming course";
	char dst[100];
	int i=0;
	/*
	for(i=0; src[i] != '\0'; i++)
	{
		dst[i] = src[i];
	}
	*/
	
	while(src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	
	dst[i] = '\0';
	
	printf("dst : %s (%d)\n", dst, i);
	
	return 0;
}
