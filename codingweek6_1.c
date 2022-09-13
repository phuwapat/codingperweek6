#include<stdio.h>
#include<string.h>
int main() {
    int i,j;
    char str[50];
    printf("Enter input : ");
    scanf("%s",str);
    for(i = 0;str[i] !='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
            str[i] = str[i] - 32;
        else if(str[i]>='A' && str[i]<='Z')
            str[i] = str[i] + 32;
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