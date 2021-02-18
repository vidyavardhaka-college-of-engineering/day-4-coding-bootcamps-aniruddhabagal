//Write a program in C to copy the elements of one array into another array.
//Input Format: Input consist of Two lines. First Line contains the number of elements N and the next contains array elements (space separated). 
//Output Format: Output consist of a single line, display the array elements( first and second(copied array) array) in the given order with space separated with appropriate statement
//Example
//Input:
//3 
//15 10 12
//Output: 
//The elements stored in the first array are :
//15 10 12
//The elements copied into the second array are :
//15 10 12
#include<stdio.h> 

int main()
{
   //Declare all the variables[N, array a & array b, i] used in the code
   //Read the Value of N using scanf statement
   //Read the array elements using for loop and scanf statment
   //Copy the elements of array 'a'[first array] to  array 'b'[second array] using for loop
   //Print the both array elements in using printf statement in the above specified format

   int n;

   int a[n], b[n];

    printf("Enter the limit \n");
   scanf("%d", &n);

    printf("Enter the elements \n");

    for(int i=0; i<n; i++){
    scanf("%d", &a[i]);
    }

    printf("The Array elements in 1st array are \n");

    for(int i=0; i<n; i++){
      printf(" %d", a[i]);
    }  

    printf("\n");

    // int temp = 0;

    for(int i=0; i<n; i++){
      b[i] = a[i];
    }

    printf("The Array elements in 2nd array are \n");

    for(int i=0; i<n; i++){
      printf(" %d", b[i]);
    }  

   return 0; 
}
