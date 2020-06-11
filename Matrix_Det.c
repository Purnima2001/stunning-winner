/*author:T.Purnima*/
/*C program to perform determinant of 2x2 and 3x3 matrix*/
#include <stdio.h>
#include <stdlib.h>

int main()

{       /*Initializing rows and columns value upto 10*/
 	int   Determinant = 0, det=0, a[10][10];

 	int i = 0, j = 0, row = 0, col = 0;
        /*Arranging the given entries of matrix in given mxn dimension*/
	printf ("Enter the order of the matrix (mxn):\n");
	printf ("where m = number of rows; and\n");
	printf ("      n = number of columns\n");
	scanf ("%d %d", &row, &col);
/*Checking condition to perform determinant of a matrix*/
if(row!=col)
    {
        printf("Determinant is not valid for rectangular matrix:\n");
        return(0);
    }

	printf ("Enter the elements of the matrix\n");
/*Condition for determinant of matrix*/
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf ("%d", &a[i][j]);

		}
	}



for(i = 0; i < row; i++)
  	{
   		for(j = 0;j < col; j++)

    	{     /*Condition to perform determinant for 2x2 matrix*/
      		if(row==2 && col==2)
            {
              Determinant = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);

            }
            /*Condition to perform determinant for 3x3 matrix*/
            else if(row==3 && col==3)
            {
               det =  a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
                        * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);

            }

    	}
  	}
  	if(i==2 && j==2)
    {
        printf("\n The Determinant of 2 * 2 Matrix = %d", Determinant);
    }
    else if(i==3 && j==3)
    {
        printf("\n The determinant of 3*3 matrix =%d", det);
    }

  	return 0;
}
