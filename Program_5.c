//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
     int n;

  printf("Enter the limit \n");
   scanf("%d", &n);


    int arr[5], i = 0;
    

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //Write your code here
    int lar = 0;
    int small = arr[i];


    for(i=0; i<n; i++){
      if(arr[i] >= lar){
        lar = arr[i];
      }
      if(arr[i] <= small){
        small = arr[i];
      }

    }
    printf("Largest no is %d\n", lar);
    printf("Smallest no is %d\n", small);
  
    return 0;
}
