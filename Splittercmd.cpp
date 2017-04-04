#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;


int main(int argc,char *argv[])
{ 


    printf("%d",argc); 	

    if(argc!=3)
    {
    	cout<<"Wrong format of inputing.\n Try: \n <Name of file to be split> <Size into which it is to be split>\n";
    	
    	
    	
	}	
	
	//char name[50];
	char namecopy[50]; 
    char str[20]=".prt";
    char strcopy[20];
    char istr[20];
    int i=1,j,byte=atoi(argv[2]);
    char ch;
    
    
    
	//cout<<argv[1];
	//gets(argv[1]);
	
	
	//cout<<byte;
	
	
	FILE *fp,*fc;
	
	fp=fopen(argv[1],"rb");
	
	if(fp==NULL)
	{
		puts("Cannot open this file.");     // check if file exist 
		exit(1);
		
		
	}
	

	while(1)
	{
	
	itoa(i,istr,10);
	strcpy(strcopy,str);
	strcpy(namecopy,argv[1]);
	strcat(strcopy,istr);
	strcat(namecopy,strcopy);
	
	
	cout<<namecopy;	
		
		
	
	
	fc=fopen(namecopy,"wb+");
		
	  for(j=0;j<byte;j++)
	  {
		
	
		ch=fgetc(fp);
		
		if(ch==EOF)
		  break;
		else
		  fputc(ch,fc);
		
		}
	
	
	
	
	if(ch==EOF)
		break;
	else
	    {
		fclose(fc); 
	    i++;
		itoa(i,istr,10);
} 
	}
	
	fclose(fp);

	
	 return 0;
		
}
+