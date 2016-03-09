/*
OVERVIEW: Given two strings, find the words that are common to both the strings.
E.g.: Input: "one two three", "two three five".  Output: "two", "three".

INPUTS: Two strings.

OUTPUT: common words in two given strings, return 2D array of strings.

ERROR CASES: Return NULL for invalid inputs.

NOTES: If there are no common words return NULL.
*/

#include <stdio.h>

#include <malloc.h>

#define SIZE 31
#include<string.h>
char ** commonWords(char *str1, char *str2) {
	if (str1 == NULL || str1 == '\0' || str1 == " " || str2 == NULL || str2 == '\0' || str2 == " ")
		return NULL;
	char st[50], st1[50];
	int j;
	char **str = (char**)malloc(sizeof(char*)* 10);
	for (j = 0; j<10; j++)
	{
		str[j] = (char*)malloc(31);
	}
	int i = 0;
	strcpy(st, str1);
	strcpy(st1, str2);
	char *word = strtok(st, " ");;

	while (word != NULL)
	{
		if (strstr(st1, word))
		{
			strcpy(str[i], word);
			printf("%s\n", str[i]);
			i++;
		}

		word = strtok(NULL, " ");
	}
	if (i == 0)
		return NULL;
	return str;



}