    #include <stdio.h>
    
    int strlen(char a[])
    {
    	int n = 0;
    	
    	for(int i=0; ; i++)
    	{
    		if(a[i] == '\0') break;
    		n++;
    	}
    	
    	return n;
    
    }
    
    
    
     
    int main()
    {
      
      char a[100];
      int length;
      char a2[100];
      printf("Enter a string to calculate it's length\n");
      gets(a);
      
      while(1)
      {
      	printf("1)string length\n2)string comp\n3)string concatination\n4)string reverse\n");
      	
      	int choose;
      	scanf("%d",&choose);
      	
      	if(choose==1) 
      	{
      		length = strlen(a);
     
      		printf("Length of the string = %d\n", length);
      		continue;
      	}
      	
      	if(choose==2)
      	{
      	
      		printf("Enter another string\n");
     		gets(a2);
     		gets(a2);
     		
     		length = strlen(a);
     		int length2 = strlen(a2);
     		
     		if(length!=length2) 
     		{
     			printf("not equal\n");
     			continue;
     		}
     		else
     		{
     			int i;
     			for(i=0; i<length; i++)
     			{
     				if(a[i]!=a2[i])
     				{
     					printf("not equal\n");
     					break;
     				}
     			}
     			if(i==length) printf("equal\n");
     			continue;
     			
     		}
     		
      		
      	}
      	if(choose==3)
      	{
      		
      		printf("Enter another string\n");
     		gets(a2);
     		gets(a2);
     		length = strlen(a);
     		for(int i = 0; ;i++)
     		{
     			if(a2[i] == '\0') break;
     			a[length++] = a2[i];
     		}
     		
     		continue;
      	
      	}
      	if(choose==4)
      	{
      		length = strlen(a);
      		for(int i=length-1; i>=0; i--) printf("%c",a[i]);
      		
      		printf("\n");
      		continue;
      	}
      	
      } 
      
     
      
      return 0;
    }
