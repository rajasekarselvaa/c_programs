

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

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

    printf("Provided elemets are:\n");
	for(int i=0;i<num;i++)
	{
	    printf("%d\n", ptr[i]);
	}

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

    printf("Temp array:\n");
	for(int j=num-1;j>=0;j--)
	{
	    printf("%d\n", temp[j]);
	}

	free(ptr);
	free(temp);

    return 0;
}
