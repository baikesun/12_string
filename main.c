#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	
	char original[100];
	char copy[100];
	char input;
	int i=0;
	
	printf("original file name : ");
	scanf("%s", original);
	
	printf("\ncopy file name : ");
	scanf("%s", copy);
	
	fp1 = fopen(original, "r");
	fp2 = fopen(copy, "w");
	
	while((input = fgetc(fp1)) != EOF)
	{
		fputc(input, fp2);
		i++;
	}
	
	printf("\nCopy succeed! (%i Bytes copied)\n", i);
	
	fclose(fp1);
	fclose(fp2);

	return 0;
}
