//code resolved
//thanks to aasheesh for pointing out the error
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <ctype.h>
#include <time.h>
#include <sys/types.h>
#include<string>
using namespace std;
int main ( void )
{
static const char filename[] = "example.txt";
FILE *file = fopen ( filename, "r" );
int i, j;
char arra[128][128];
char line[128]; /* or other suitable maximum line size */
for(i=0; i<128; i++)
for(j=0; j<128; j++)
arra[i][j] = '\0';
for(i=0; i<128; i++)
line [i]= '\0';
if ( file != NULL )
{
i=0;
while ( fgets ( line, sizeof line, file ) != NULL ) /* read a line */
{
strcpy(arra[i], line);
printf("array ----> %s ", &arra[i]);
i++;
}
int k,b,a;
a=b=0;
string fil[100][100];
for(k=0;k<i;k++)
{
	int s=strlen(arra[k]);
	int j=0;
	int c=0;
	string word;
	while(j<s)
	{
	
	while(arra[k][j]==' ')
	{
		word[c]=arra[k][j];
		j++;
		c++;
	}
	j++;
	
	fil[a][b]=word;
	b++;

	}
	a++;
}
for(i=0;i<a;i++)
	for(j=0;j<b;j++)
	cout<<" "<<fil[i][j];


fclose ( file );

}

else
{
perror ( filename ); /* why didn't the file open? */
}
return 0;
}
