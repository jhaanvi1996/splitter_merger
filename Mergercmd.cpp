#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;


int main(int argc,char* argv[])
{ 

  if(argc<=2)
  {
  	cout<<"\nWrong format of inputing.\n You should have pass the name of new files and name of atleast 2 files to merge.\n Format of input:  <Name you want to keep for new file> <File 1 to be merged> <File 2 to be merged>.............<Last file to be merged>\n";
     exit(0); 
  
  } 
  
    int i=2;
    char ch;
    
    FILE *fp,*fc;
    
    
    
    fp=fopen(argv[1],"wb+");
    
    if(fp==NULL)
    {
	  cout<<"\n Cannot open"<<argv[1];
      exit(1);
}
    
    do
    {
    
	
	fc=fopen(argv[i],"rb");
	
	if(fc==NULL)
	{
	 cout<<"\nCannot open"<<argv[i];    // I will make it take another file	
      exit(2);
	}
	
	
	while(1)
	{
	  
	  ch=fgetc(fc);
	  
	  if(ch==EOF)
	   break;
	  
	  else
	   fputc(ch,fp);	
		
		
	}	
			
	fclose(fc);
	
     i++;
} 
while(i<(argc)); 
 
 
 fclose(fp);		
    	
	
	
return 0;

}




	
