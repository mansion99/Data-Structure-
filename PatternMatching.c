#include<stdio.h>
#include<string.h>
intnfind(char*string,char*pat)
{
inti,j,start=0;
intlasts=strlen(string)-1;
intlastp=strlen(pat)-1;
intendmatch=lastp;
for(i=0;endmatch<=lasts;endmatch++,start++)
{
if(string[endmatch]==pat[lastp])

for(j=0,i=start;j<lastp&&string[i]==pat[j];i++,j++);

if(j==lastp)
returnstart;

}
return-1;
}
intmain()
{
charstring[50],pat[50];
printf("enterthestring\n");
scanf("%s",string);
printf("enterpattern\n");
scanf("%s",pat);
printf("posofmatchis%d\n",nfind(string,pat)+1);
}
