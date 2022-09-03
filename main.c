#include<stdio.h>
#include<string.h>

void ntocc(int a,char s[]); //将数字a转换成汉字存储在字符串s中，无返回值(0 <= a <=100000)
static int ia = 0;  //for itoa
void itoa(int n, char s[]); //将整型n转化成字符串存储在s中

int main(void)
{
	int a;
	char s[20];

    printf("ENTER A NUMBER\n");
    while (scanf("%d", &a) > 0)
	{
        ntocc(a,s);
		puts(s);
        printf("ENTER A NUMBER\n");
	}

    return 0;
}
