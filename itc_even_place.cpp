
#include "str_easy.h"
string itc_even_place(string str)
{
	string new_str="";
	for (long long i = 1; str[i] != '\0'; i++)
	{
		if (i % 2 == 1)
			new_str += str[i];

	}
	return new_str;
}
