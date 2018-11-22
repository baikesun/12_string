#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = NULL;
	
	char input[100];
	//char input;
	
	fp = fopen("sample.txt", "r");
	
	if(fp == NULL)
	{
		printf("파일을 못열음\n");
	}
	
	/*
	while((input = fgetc(fp)) != EOF)
	{
		putchar(input);
	}
	*/
	
	while(fgets(input, 100, fp) != NULL)
	{
		printf(input);
	}
	
	fclose(fp);

	return 0;
}
