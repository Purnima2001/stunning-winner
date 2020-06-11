/*author T.Purnima*/
#include <stdio.h>
#include <stdlib.h>
/*
C Program to check if a given matrix is an identity matrix,row ,column(vector),scalar, upper or lower triangular, square or rectangular matrix
*/
int main (void)
{     /*Initializing rows and columns value upto 10*/
	int a[10][10];
    int i = 0, j = 0, row = 0, col = 0;
    /*Taking inputs from the user and printing them*/
	printf ("Enter the order of the matrix (mxn):\n");
	printf ("where m = number of rows; and\n");
	printf ("      n = number of columns\n");
	scanf ("%d %d", &row, &col);

	int flag = 0;

	printf ("Enter the elements of the matrix\n");
    /*Arranging the given entries of matrix in given mxn dimension*/
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
	/* Condition for Scalar matrix*/
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && a[i][j] != a[1][1])
			{
				flag = -1;
				break;
			}
			else if (i != j && a[i][j] != 0)
			{
				flag = -1;
				break;
			}
			}
			}

	if (flag == 0)
	{
		printf ("It is a SCALAR MATRIX\n");
	}
	else
	{
		printf ("It is NOT a SCALAR  matrix\n");
	}
    /*Condition for Identity matrix*/
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && a[i][j] != 1)
			{
				flag = -1;
				break;
			}
			else if (i != j && a[i][j] != 0)
			{
				flag = -1;
				break;
			}

		}
	}
	if (flag == 0)
	{

	    printf ("It is an IDENTITY MATRIX\n");

	}
	else
	{
		printf ("It is NOT an IDENTITY matrix\n");

	}
   /*Condition for diagonal matrix*/
	if(row==col)
    {
        if (i != j && a[i][j] != 0)
			{
				printf("It is  a diagonal matrix\n");

			}
			else
            {
                printf("It is not a diagonal matrix\n ");
            }
    }
    /*Condition for column matrix(vector)*/
            if(row!=1 && col==1 )
            {


                printf("It is a vector\n");
            }
            /*Condition for row matrix*/
            if(col!=1 && row==1 )
            {


                printf("It is a row matrix\n");
            }
             /*Condition for square/rectangular matrix*/
            if(row==col )
            {


                printf("It is a square matrix\n");
            }
            else
            {
                printf("It is  a rectangular matrix\n");
                }
         /*Condition for Upper or Lower triangular matrix*/
        if(i>=j && a[i][j]!=0)
    {
        printf("It is a upper triangular matrix\n");

    }
    else if(i<j)
    {
        printf("It is a lower triangular matrix\n");

    }

    return 0;
}

