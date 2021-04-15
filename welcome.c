#include<stdio.h>
#include<string.h>
void main()
{
	char string[100];
	int str_len,row,col,pos,flg=0;
	printf("Enter the String : ");
	gets(string);
	str_len=strlen(string);
	for(row=0;row<str_len;row++)
	{
		for(col=0;col<str_len;col++)
		{
			if(row+col>=str_len-1)
			{
				pos=(((str_len/2)+flg)%str_len);
				printf("%c ",string[pos]);
				flg++;
			}
			else
			{
				printf("  ");
			}
		}
		flg=0;
		printf("\n");
	}
}
