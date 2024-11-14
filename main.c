//请在下方输入你的代码：
//以下是正三角
#include<stdio.h>
int main()
{
	int i, j;
	int m, p = 1;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
			m = i * j;
			printf("%d*%d=%d ", i, j, m);
			p++;
		}
		if (p = j)printf("\n");

	}
	return 0;
}
//以下是倒三角
#include<stdio.h>
int main()
{
	int i, j;
	int m, p = 1;
	for (i = 9; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			m = i * j;
			printf("%d*%d=%d ", i, j, m);
			p++;
		}
		if (p = j)printf("\n");

	}
	return 0;
}