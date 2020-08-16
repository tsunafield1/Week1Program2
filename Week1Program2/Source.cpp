#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 1;
	bool c = 1;
	while (1)
	{
		c = 1;
		for (int j = 1; j <= 20; j++)
		{
			if (i % j != 0)
			{
				c = 0;
				break;
			}
		}
		if (c)
		{
			printf("%d", i);
			break;
		}
		i++;
	}
}