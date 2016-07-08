#include<stdio.h>
main()
{
	int i,j=0,k=0,l=0;
	for(i=1;i<=20;i++)
	{
		if(i%3==0&&i%5==0)
		{
			{
			
		printf("\nFizzBuzz\n");
		l++;
	    }
		}
		else
		{
		
		if (i%3==0)
		{
		
		printf("\nFizz\n");
		j++;
	   }
		else
		{
		
		if (i%5==0)
		{
		
		printf ("\nBuzz\n");
		k++;
	    }
		else
		printf("\n%d\n",i);
	    }
     	}
		
	}
	printf("\nTotal Fizz Count : %d\n",j);
	printf("Total Buzz Count : %d\n",k);
	printf("Total FizzBuzz Count : %d\n",l);
	printf("Thanks !");
}
