/*
OVERVIEW: Given a float number ,Convert it into a string 

INPUTS: A Float,Final string ,How many digits after decimal has to be displayed .
Its zero for integers.


OUTPUT: No need to output anything ,Modify the str in function parameter such that it
now holds the string format of the float number specified

Example : number_to_str(345,str,0);
Should copy "345\0" in the str;
number_to_str(345.342,str,2);
Should copy "345.34" in the str;

NOTES: Don't create new string.

*/

#include <stdio.h>
#include<math.h>
#include<string.h>

int Int_to_str(int x, char *str,int afterdecimal,int test){

	int i = 0;
	
	while (x)
	{
		str[i++] = (x % 10) + '0';
		x = x / 10;
	}

	while (i < afterdecimal)
		str[i++] = '0';

	if (test == 1)
	{
		str[i] = '-';
		i++;
	}
	str[i] = '\0';
	strcpy(str, strrev(str));
	return i;
}

void number_to_str(float number, char *str, int afterdecimal){

	int flag = 0;
	int in = (int)number;
	int t = in;
	if (t < 0)
		flag = 1;
	number = abs(number);
	in = abs(in);


	float fl = number - (float)in;


	int i = Int_to_str(in, str, 0, flag);

	flag = 0;
	if (afterdecimal != 0)
	{
		str[i] = '.';

		fl = fl * pow(10.0, afterdecimal);

		Int_to_str((int)fl, str + i + 1, afterdecimal, flag);

	}
	else
	{
		str[i] = '\\';
		i++;
		str[i] = '0';
		i++;
		str[i] = '\0';
	}

	printf("%s", str);


}
