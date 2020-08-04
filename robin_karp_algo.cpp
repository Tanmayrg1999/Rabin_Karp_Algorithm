#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
void search(char pat[],char text[],int q)
{
	int lenp=strlen(pat);// lenght of the pattern
	int lent=strlen(text);// lenght of text where pattern is to be checked
	int hashp=0; //hash value of the pattern
	int hasht=0; // hash value for checking the text hash value
	for(int i=0;i<lenp;i++)
	{
		hashp=hashp+int(pat[i])*pow(q,lenp-i-1);
	}
	for(int i=0;i<lent-lenp;i++)
	{
		for(int j=i;j<i+lenp;j++)
		{
			hasht=hasht+int(text[j])*pow(q,lenp-j-1+i);
		}
		if(hashp==hasht)
		{
			cout<<"string found at position "<<i<<endl;
		}
		hasht=0;
	}
}
int main()
{
	char text[20]="abcdabcabcdeac";
	char pat[10]="ab";
	int p=10;
	cout<<"text here is :"<<text<<endl;
	cout<<"pattern to be checked is :"<<pat<<endl;
	search(pat,text,p);
}
