/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>
#include<malloc.h>

void str_words_in_rev(char *input, int len){
	int j;
	int p = 0, a = 0;
	char **str = (char**)malloc(sizeof(char*)* 10);
	for (j = 0; j<10; j++)
	{
		str[j] = (char*)malloc(50);
	}

	int i, k = 0;




	for (i = 0; input[i] != '\0'; i++)
	{
		j = 0;
		while (input[i + 1] != ' ' && input[i + 1] != '\0')
		{

			str[k][j] = input[i];

			j++;
			i++;


		}
		str[k][j] = input[i];
		j++;
		p = 0;
		while (input[i + 1] == ' ')
		{
			str[k][j] = ' ';
			i++;
			j++;
			p++;
		}
		if (p > 0)
		{
			a = p;
		}

		str[k][j] = '\0';

		k++;
	}



	char str1[40] = "";
	printf("%d",a);
	if (a!=0)
	{
		for (i = 0; i < a; i++)
		{

			str[k - 1][j] = ' ';
			j++;
		}
		str[k - 1][j] = '\0';
	}
	for (i = k - 1; i >= 0; i--)
	{

		strcat(str1, str[i]);
	}
	
	int l = strlen(input);
	str1[l] = '\0';
	strcpy(input,"");
	strcpy(input, str1);
	
	
	




	
}
