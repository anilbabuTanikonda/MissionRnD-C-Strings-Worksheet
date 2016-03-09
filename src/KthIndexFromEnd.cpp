/*
OVERVIEW: Given a string, return the letter at Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the letter at Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/

char KthIndexFromEnd(char *str, int K) {
	if (str == '\0' || str == " " || K<0)
		return '\0';
	int l, i, k;
	for (k = 0; str[k] != '\0'; k++);
	if (K>k)
	{
		return '\0';
	}
	if (K<0 || str == '\0' || str == "")
		return '\0';
	for (l = 0; str[l] != '\0'; l++);
	i = l - K;
	return str[i - 1];
}