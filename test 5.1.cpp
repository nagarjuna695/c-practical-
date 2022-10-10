#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,vowels = 0;
	printf("enter the string : ");
	scanf("%[^\n]s",&str);
	for(i = 0; str[i]; i++)  
    {
        if(str[i]=='a'||str[i]=='A'||
		 str[i]=='e'||str[i]=='E'||
		 str[i]=='i'||str[i]=='I'||
         str[i]=='o'||str[i]=='O'||
		 str[i]=='u'||str[i]=='U')
        {
            vowels++;
        }
    }
    printf("Total number of vowels: = %d\n",vowels);
    
    return 0;
}
