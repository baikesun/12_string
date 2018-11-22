#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	FILE *fp = NULL;
	
	char input[100];
	char original[100];
	char find[100];
	
	printf("original file name : ");
	scanf("%s", original);
	
	fp = fopen(original, "r");
	
	printf("word to find : ");
	scanf("%s", find);
	
	while((fgets(input, 100, fp)) != NULL)
	{
		if(strncmp(input, find, strlen(find)) == 0)
		{
			printf("\nfind a word %s\n", input);
		}
	}
	
	printf("search done!\n");
	
	return 0;
}
