\\ 3 english input
\\ first word vowels change to $
\\second word constant change to #
\\ third word lower cse to upper case
\\op: h$wa#eYOU
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *str1=malloc(sizeof(char)*256);
    char *str2=malloc(sizeof(char)*256);
    char *str3=malloc(sizeof(char)*256);

    printf("enter the 34 value");
    scanf("%s%s%s",str1,str2,str3);
    
   
    int p1=strlen(str1);
     int p2=strlen(str2);
      int p3=strlen(str3);
      int i;
for(i=0;i<p1;i++)
{
if(str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U')
     {
    str1[i]='$';
     }
}
for(i=0;i<p2;i++)
{
    if(str2[i]!='a'&&str2[i]!='e'&&str2[i]!='i'&&str2[i]!='o'&&str2[i]!='u')
{
str2[i]='#';
}

}
for(i=0;i<p3;i++)
{
    str3[i]=str3[i]-32;
}
   printf("%s%s%s",str1,str2,str3);

return 0;
}
