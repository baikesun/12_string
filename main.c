#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp = NULL;
	
	char input[100];
	int i=0;
	
	fp = fopen("sample.txt", "w");
	
	if(fp == NULL)
	{
		printf("������ ������\n");
	}
	
	for(i=0; i<3; i++)
	{
		printf("input a word : ");
		scanf("%s", input);
		fprintf(fp, "%s\n", input);
	}
	
	fclose(fp);

	return 0;
}
