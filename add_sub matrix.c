/*
     * C program to read two matrices A(MxN) and B(MxN) and perform addition
 OR subtraction of A and B. Also, find the trace of the resultant
matrix. Display the given matrices, their sum or differences and the trace.
     */

    #include <stdio.h>
    void trace(int arr[][10], int m, int n);
    void main()
    {
/*Initializing rows and columns value upto 10*/

        int array1[10][10], array2[10][10], arraysum[10][10],
        arraydiff[10][10];
        int i, j, m, n, option;

        printf("Enter the order of the matrix array1 and array2 \n");
        scanf("%d %d", &m, &n);

        printf("Enter the elements of matrix array1 \n");
/*Arranging the given entries of array1 in given mxn dimension*/
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &array1[i][j]);
            }
        }

        printf("MATRIX array1 is \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%3d", array1[i][j]);
            }
            printf("\n");
        }

        printf("Enter the elements of matrix array2 \n");
/*Arranging the given entries of array2in given mxn dimension*/
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &array2[i][j]);
            }
        }

        printf("MATRIX array2 is \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%3d", array2[i][j]);
            }
            printf("\n");
        }

        printf("Enter your option: 1 for Addition and 2 for Subtraction \n");
        scanf("%d", &option);

        switch (option)
        {
/* If the entered value is 1, adiition of two given matrices are performed*/
        case 1:
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    arraysum[i][j] = array1[i][j] + array2[i][j];
                }
            }

            printf("Sum matrix is \n");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    printf("%3d", arraysum[i][j]) ;
                }
                printf("\n");
            }

            trace (arraysum, m, n);
            break;
/* If the entered value is 2, Subtraction of two given matrices are performed*/
        case 2:
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    arraydiff[i][j] = array1[i][j] - array2[i][j];
                }
            }

            printf("Difference matrix is \n");
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    printf("%3d", arraydiff[i][j]) ;
                }
                printf("\n");
            }
            trace (arraydiff, m, n);
            break;
        }

    }

    /*  Function to find the trace of resultant matrix and print it */

    void trace (int arr[][10], int m, int n)
    {

        int i, j, trace = 0;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i == j)
                {
                    trace = trace + arr[i][j];
                }
            }
        }
        printf("Trace of the resultant matrix is = %d\n", trace);
    }
