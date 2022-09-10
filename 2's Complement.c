#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char s[65],result[65]="1";
    int n,i,count=0;

    printf("Enter the binary number : ");
    scanf("%s",s);

    n=strlen(s);

    // 1's complement
    for(i=0;i<n;i++)
    {
        if(s[i]=='1')
            s[i]='0';
        else
            s[i]='1';
    }
    printf("The 1's complement of the given binary number is : %s\n",s);

    //2's complement
    for(i=n-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            s[i]='0';
            count++;
        }
        else
        {
             s[i]='1';
        break;
        }

    }

    if(count==n)
    {
        strcat(result,s);
        strcpy(s,result);
    }

    printf("The 2's complement of the given binary number is :%s\n",s);

    return 0;
}
