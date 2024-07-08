
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

void alloc_now(int *, int **);
void free_alloc(int *);

int *ptr, *odd_ptr, *even_ptr;
unsigned int num = 0;

void alloc_now(int *size, int **rcvd_ptr)
{
    printf("2.ptr addr:%d\n", *size);

    *rcvd_ptr = (int *)malloc(*size * sizeof(int));

    printf("sizeof:%ld\n", sizeof(int));
    printf("sizeof:%ld\n", sizeof(rcvd_ptr));

	if(rcvd_ptr==NULL)
	{
	    printf("Mem alloc err\n");
	}
	else
	{
	    printf("Mem alloc OK!\n");
	}
}

void free_alloc(int *ptr)
{
    free(ptr);
}

int main()
{
    unsigned int odd_count = 0, even_count = 0;
	printf("Enter the array length:\n");
	scanf("%d", &num);

	//mem alloc func
	alloc_now(&num, &ptr);

	printf("Size:%ld\n", sizeof(ptr));

	printf("Fillup array elemets!!");
	for(int i=0;i<num;i++)
	{
	    scanf("%d", &ptr[i]);
	}

    printf("Provided elemets are:\n");
	for(int i=0;i<num;i++)
	{
	    if((ptr[i]%2) == 0)
	    {
	        even_count++;
	    }
	    else
	    {
	        odd_count++;
	    }
	    printf("%d\n", ptr[i]);
	}

	printf("Even count:%d\n", even_count);
	printf("Odd count:%d\n", odd_count);

	//even allocation
	alloc_now(&even_count, &even_ptr);
	//odd allocation
	alloc_now(&odd_count, &odd_ptr);

	for(int i =0,j=0,k=0;i<num;i++)
	{
	    if((ptr[i]%2) == 0)
	    {
	        even_ptr[j] = ptr[i];
	        j++;
	    }
	    else
	    {
	        odd_ptr[k] = ptr[i];
	        k++;
	    }
	}

	printf("Even array:\n");
	for(int i=0;i<even_count;i++)
	{
	    printf("%d\n", even_ptr[i]);
	}

	printf("Odd array:\n");
	for(int i=0;i<odd_count;i++)
	{
	    printf("%d\n", odd_ptr[i]);
	}
	free_alloc(ptr);
	free_alloc(even_ptr);
	free_alloc(odd_ptr);

    return 0;
}
