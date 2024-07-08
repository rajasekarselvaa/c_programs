
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
	
	//memcpy(temp, ptr, sizeof(temp));
	for(int z=0;z<num;z++)
	{
	    temp[z] = ptr[z];
	}

    /*printf("Temp array:\n");
	for(int j=0;j<num;j++)
	{
	    printf("%d\n", temp[j]);
	}*/
	
	for(int k=0;k<num;k++)
	{
	    for(int l=k+1;l<num;l++)
	    {
	         if(temp[k] > temp[l])
	         {
	             int t = 0;
	             t = temp[k];
	             temp[k] = temp[l];
	             temp[l] = t;
	         }
	    }
	}
	
	printf("Result!!\n");
	for(int j=0;j<num;j++)
	{
	    printf("%d\n", temp[j]);
	}
	
	printf("Smallest num:%d\n", temp[0]);
	printf("Largest num:%d\n", temp[num-1]);
	
	free(ptr);

    return 0;
}
