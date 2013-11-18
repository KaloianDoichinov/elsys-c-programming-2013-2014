#include <stdio.h>

int main()
{
<<<<<<< HEAD
        int a,row,column;
=======
        int a,row,colum;
>>>>>>> f64c8b9d761c75424d4c6785a0d08b7420a77301
        float matrix[100][100],sum=0;

        scanf("%d",&a);
        if (a<=100) {
                for (row=0; row<=n-1; row++) {
<<<<<<< HEAD
                        for (column=0; column<=a-1; column++) {
                                scanf("%f",&matrix[row][column]);
                                if (column>row) sum +=matrix[row][column];
=======
                        for (colum=0; colum<=a-1; colum++) {
                                scanf("%f",&matrix[row][colum]);
                                if (colum>row) sum +=matrix[row][colum];
>>>>>>> f64c8b9d761c75424d4c6785a0d08b7420a77301
                        }
                }        
                printf("%f",sum);
        } else {
                printf("Error");
        }
        
        return 0;
}

