// let firstString = 'atulatulatulatulasdasdatulasdasdaatulasddad'
// let secondString = 'atul'
#include <stdio.h>
#include<string.h>
// int match(int i,char arr[],char arr2[],int n)
// {
//     int flag=0;
//     i--;
//     for(int j=0;j<n;j++)
//     {
//         i++;
//         if(arr[i]==arr2[j])
//         flag++;
//         else break;
//     }
//     if(flag==n-1)
// 	    printf("%s",arr2);

//     return i;
// }




int main() {
	char string1[80],string2[50];
	scanf("%s%s",string1,string2);
	int i=0,flag;
    i--;
    //printf("%ld",strlen(string2));
	do
	{
	    flag=0;
        for(int j=0;j<strlen(string2);j++)
        {
            i++;
            if(string1[i]==string2[j])
            flag++;
            else j=strlen(string2);
        }
        if(flag==strlen(string2))
        printf("%s",string2);
	}while(string1[i]!='\0');
	return 0;
}