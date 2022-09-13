#include<stdio.h>
#include<string.h>
int main()
{
    int j,i;
    char str[50];
    char *s = str;
    printf("Enter string : ");
    scanf("%s",str);
    while(*s)    
    {
        if(*s>='a' && *s<='z')
        {
            *s = *s - 32;
        }
        else if(*s>='A' && *s<='Z'){
            *s = *s + 32;
        }
        *s++;
    }
     for(i = 0;str[i] !='\0';i++)
    {
            while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] == '\0'))
            {
                for (j = i; str[j] != '\0'; ++j)
                {
                    str[j] = str[j + 1];
                }
                str[j] = '\0';
            }
    }
    printf("Output : %s",str);
    return 0;
}