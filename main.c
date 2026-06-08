//As20250640
#include <stdio.h>
#include <stdlib.h>


int main()
{
    float mark1,mark2,mark3;
    float totalMarks,avgMarks;
    char grade;

    printf("-------------------------------------------------------\n");
    printf("            Student Grade Analyzer                     \n");
    printf("-------------------------------------------------------\n");
    printf("Input Mathematics marks(0-100) : ");
    scanf("%f",&mark1);
    printf("Input Science marks(0-100) : ");
    scanf("%f",&mark2);
    printf("Input English marks(0-100) : ");
    scanf("%f",&mark3);
    printf("\n");

    totalMarks=mark1+mark2+mark3;
    avgMarks=totalMarks/3;
    printf("Total Marks: %.2f\n",totalMarks);
    printf("Average Marks: %.2f\n",avgMarks);

    if(avgMarks>=80){
        grade='A';
    }else if(avgMarks>=70){
        grade='B';
    }else if(avgMarks>=60){
        grade='C';
    }else if(avgMarks>=50){
        grade='D';
    }else{
        grade='F';
    }
    printf("Your Grade is : %c\n",grade);

    if(mark1>=40 && mark2>=40 && mark3>=40){
        printf("Result : pass\n");
    }else{
        printf("Result : Fail\n");
    }
    if(mark1>=80 && mark2>=80 && mark3>=80 && avgMarks>=85){
        printf("Distinction : Yes\n");
    }else{
        printf("Distinction : No");
    }

    return 0;
}
