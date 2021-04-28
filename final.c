#include <stdio.h>

int main()
{
    double nonExam;
    double exam1;
    double exam2;
    double exam3;
    double desiredGrade;
    double final;
    double final2;
    double bonus;
    
    printf("What is your non exam percent -> ");
    scanf("%lf", &nonExam);
    
    printf("What is your exam 1 percent -> ");
    scanf("%lf", &exam1);
    
    printf("What is your exam 2 percent -> ");
    scanf("%lf", &exam2);
    
    printf("What is your exam 3 percent -> ");
    scanf("%lf", &exam3);
    
    printf("How many bonus points do you have? -> ");
    scanf("%lf", &bonus);
    
    printf("What is your desired grade percent (Ex. A = 93) -> ");
    scanf("%lf", &desiredGrade);
    
    
    // 20 * desiredGrade = (12 * nonExam) + 2(exam2 + exam3 + (2 *final)) + bonus
    // final = ((((20 * desiredGrade) - (12 * nonExam) - bonus) / 2) - exam2 - exam3) / 2;
    if ((exam1 <= exam2) && (exam1 <= exam3))
    {
        final = ((((20 * desiredGrade) - (12 * nonExam) - bonus) / 2) - exam2 - exam3) / 2;
    }
    else if ((exam2 <= exam1) && (exam2 <= exam3))
    {
        final = ((((20 * desiredGrade) - (12 * nonExam) - bonus) / 2) - exam1 - exam3) / 2;
    }
    else if ((exam3 <= exam1) && (exam3 <= exam2))
    {
        final = ((((20 * desiredGrade) - (12 * nonExam) - bonus) / 2) - exam1 - exam2) / 2;
    }
    
    printf("\nIf you drop a midterm, you need a %.2lf percent on your final to get the grade", final);
    
    // 20 * desiredGrade = (12 * nonExam) + 2(exam1 + exam2 + exam3 + final) + bonus
    // final = ((((20 * desiredGrade) - (12 * nonExam) - bonus) / 2) - exam1 - exam2 - exam3);
    
    final2 = ((((20 * desiredGrade) - (12 * nonExam) - bonus) / 2) - exam1 - exam2 - exam3);
    
    printf("\nIf you drop half the final, you need a %.2lf percent on your final to get the grade", final2);
    return 0;
}
