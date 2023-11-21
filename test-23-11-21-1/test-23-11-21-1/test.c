#include<stdio.h>

int my_strlen(char* p)
{
	int count = 0;
	while (*p!='\0')
	{
		count++;
		p++;
	}
	return count;
}

int main()
{
	char arr[50] = { 0 };
	gets(arr);
	int len = my_strlen(arr);
	printf("%s\n", arr);
	printf("字符串的长度为%d\n", len);
	return 0;
}