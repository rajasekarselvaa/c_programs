
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int *ptr;
	unsigned int num = 0;
	printf("Enter the array length:\n");
	scanf("%d", &num);

	ptr = malloc(num * sizeof(int));
	if(ptr==NULL)
	{
	    printf("Mem alloc err\n");
	}
	else
	{
	    printf("Mem alloc OK!\n");
	}

	printf("Fillup array elemets!!");
	for(int i=0;i<num;i++)
	{
	    scanf("%d", &ptr[i]);
	}

    /*printf("Provided elemets are:\n");
	for(int i=0;i<num;i++)
	{
	    printf("%d\n", ptr[i]);
	}*/

	//unsigned int len = sizeof(ptr)/sizeof(ptr[0]);
	//printf("Length is:%d\n", len);

	//unsigned int temp[2] = {0};

	int *temp;
	temp = malloc(num * sizeof(int));
	if(temp==NULL)
	{
	    printf("Mem alloc err\n");
	}
	else
	{
	    printf("Mem alloc OK!\n");
	}

	memcpy(temp, ptr, num * sizeof(int));
    /*
	for(int z=0;z<num;z++)
	{
	    temp[z] = ptr[z];
	}
	*/
    printf("Temp array:\n");
	for(int j=0;j<num;j++)
	{
	    printf("%d\n", temp[j]);
	}

	int z;
	printf("Enter the position need to remove...\n");
	scanf("%d", &z);

	if(z<=num)
	{
	    int flag = 0;
	    for(int k=1;k<=num;k++)
	    {
	        if(k==z)
	        {
	            for(int l=k;l<=num;l++)
	            {
	                flag == 1;
	                temp[l] = temp[l+1];
	            }
	            num-=1;
	        }
	        if(flag)
	        {
	            flag = 0;
	            break;
	        }
	    }
	}
	else
	{
	    printf("Index is out of range\n");
	}

	printf("Result!!\n");
	for(int j=0;j<num;j++)
	{
	    printf("%d\n", temp[j]);
	}

	free(ptr);

    return 0;
}
