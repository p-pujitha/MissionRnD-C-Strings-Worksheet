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


void number_to_str(float f, char *str,int ad){
	
	int  i = 0;
	char str2[100];
	
	int k;
	if (f<0)
	{
		str[0] = '-';
		k = 1;
		f = -(f);
		//printf("\n Float value=%f",f);
	}
	else
		k = 0;
	int num = (int)f;
	//printf("%d\n",num);
	float ans = (float)f - num;
	//printf("%f\n",ans);
	for (int m = 0; m<ad; m++)
	{
		ans = ans * 10;
	}
	//printf("\nans==%f\n",ans);
	int num2 = (int)ans;
	//printf("\nnum2==%d",num2);
	while (num != 0)
	{
		int rem = num % 10;
		str2[i] = rem + '0';
		//printf("%c\t",str2[i]);
		i++;
		num = num / 10;
	}

	str2[i] = '\0';


	//printf("\n");
	for (int j = i - 1; j >= 0; j--)
	{
		str[k] = str2[j];
		k++;
	}


	if (num2 != 0)
	{
		str[k] = '.';
		k++;
	}
	i = 0; char str3[100];
	while (num2 != 0)
	{

		int rem = num2 % 10;
		str3[i] = rem + '0';
		i++;
		num2 = num2 / 10;
	}
	str3[i] = '\0';
	for (int j = i - 1; j >= 0; j--)
	{
		str[k] = str3[j];
		k++;
	}
	str[k] = '\0';
	
	

}
