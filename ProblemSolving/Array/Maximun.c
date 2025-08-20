#include<stdio.h>
#include<stdlib.h>

int Max(int Arr[], int size)
{
    int max = 0;

    Arr[0] = max;

    for(int iCnt = 0; iCnt < size; iCnt++)
    {
        if(Arr[iCnt] > max)
        {
                max = Arr[iCnt];
        }
    }
    return max;
}
int main()
{
    int size = 0;
    int *ptr;
    int iRet = 0;

    printf("Enter size of array : ");
    scanf("%d",&size);

    ptr = (int *)malloc(sizeof(int) * size);

    printf("Enter elements : ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d",&ptr[i]);
    }

   iRet =  Max(ptr,size);
   printf("Max value is : %d",iRet);

    return 0;
}