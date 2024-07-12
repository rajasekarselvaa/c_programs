
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

uint16_t num = 0;
uint16_t *rcvd_ptr;

uint16_t sumarray(uint16_t *);

uint16_t alloc_mems(uint16_t **rcvd_ptr, uint16_t *pnum)
{
    *rcvd_ptr = malloc(*pnum * sizeof(uint16_t));
    if(rcvd_ptr == NULL)
    {
        printf("Mem failure:%ld\n", rcvd_ptr);
    }
    else
    {
        printf("Mem OK:%ld\n", rcvd_ptr);
    }
}

int main()
{
    uint16_t *ptr1, *ptr2, *final_ptr;
    printf("Enter the array size\n");
    scanf("%hd", &num);

    alloc_mems(&ptr1, &num);

    alloc_mems(&ptr2, &num);

    alloc_mems(&final_ptr, &num);

    printf("Enter the number of elemnets in array1\n");
    for(int i=0;i<num;i++)
    {
        scanf("%hd", &ptr1[i]);
    }

    printf("Enter the number of elemnets in array2\n");
    for(int i=0;i<num;i++)
    {
        scanf("%hd", &ptr2[i]);
    }

    printf("Provided elementsof arr1:\n");
    for(int i=0;i<num;i++)
    {
        printf("%d\n", ptr1[i]);
    }

    printf("Provided elementsof arr2:\n");
    for(int i=0;i<num;i++)
    {
        printf("%d\n", ptr2[i]);
    }

    printf("Resultant array\n");
    for(int i=0;i<num;i++)
    {
        final_ptr[i] = ptr1[i] + ptr2[i];
        printf("%d\n", final_ptr[i]);
    }

    return 0;
}
