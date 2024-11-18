#include<stdio.h>
int main()
{
    int arr[] ={100,200,300,400,500,600};
        int sum = 0;
        sum = sum + (arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]);
        printf("%d is the sum of array elements\n",sum);

        int add=0;
        for(int i=0;i<6;i++){
            add = add + arr[i]; 
        }
        printf("%d is the sum of array elements using loop\n",add);
    return 0;
}
