//Write a C program to get two rows and columns of integers from the user and print them in matrix fashion.

//Example:
//Input: 
//1 2 3 4
//Output: 
//1   2
//3   4
#include<stdio.h> 
int main()
{
  //Declare all the variables[row, col, array a(2D array), i] used in the code
   //Read the Value of row and coloumn of the matrix (i.e size of matrix) using scanf statement
   //Read the elements of matrix a using nested for loop and scanf statment
   //Print the elements of matrix a using nested for loop and printf statment as per the above specified format
   int n, m;

   

   printf("Enter the limit of n and m \n");
   scanf("%d%d", &n, &m);

   int a[n][m];

    printf("Enter the elements \n");

    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){

        scanf("%d", &a[i][j]);

      }

    }

     printf("The Array elements are \n");


    for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){

      printf(" %d", a[i][j]);
  
      }
      
      printf("\n");
    }


  return 0;
}
