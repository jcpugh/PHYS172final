#include <stdio.h>
int main()
{
    double lectureQuiz;
    double recitation;
    double lab;
    double problemQuiz;
    double homework;
    double exam1;
    double exam2;
    double exam3;
    double desiredGrade;
    double final;
    double final2;
    double bonus;
    
    printf("What is your lecture quiz percent -> ");
    scanf("%lf", &lectureQuiz);
    
    printf("What is your recitation percent -> ");
    scanf("%lf", &recitation);
    
    printf("What is your lab percent -> ");
    scanf("%lf", &lab);
    
    printf("What is your problem quiz percent -> ");
    scanf("%lf", &problemQuiz);
    
    printf("What is your homework percent -> ");
    scanf("%lf", &homework);
    
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
    
    
    // 20 * desiredGrade = (.5 * lectureQuiz) + (3 * recitation) + (2.5 * lab) + (3 * problemQuiz) + (3 * homework) + 2(exam2 + exam3 + (2 *final)) + bonus
    // final = ((((20 * desiredGrade) - ((.5 * lectureQuiz) + (3 * recitation) + (2.5 * lab) + (3 * problemQuiz) + (3 * homework)) - bonus) / 2) - exam2 - exam3) / 2;
    if ((exam1 <= exam2) && (exam1 <= exam3))
    {
        final = ((((20 * desiredGrade) - ((.5 * lectureQuiz) + (3 * recitation) + (2.5 * lab) + (3 * problemQuiz) + (3 * homework)) - bonus) / 2) - exam2 - exam3) / 2;
    }
    else if ((exam2 <= exam1) && (exam2 <= exam3))
    {
        final = ((((20 * desiredGrade) - ((.5 * lectureQuiz) + (3 * recitation) + (2.5 * lab) + (3 * problemQuiz) + (3 * homework)) - bonus) / 2) - exam1 - exam3) / 2;
    }
    else if ((exam3 <= exam1) && (exam3 <= exam2))
    {
        final = ((((20 * desiredGrade) - ((.5 * lectureQuiz) + (3 * recitation) + (2.5 * lab) + (3 * problemQuiz) + (3 * homework)) - bonus) / 2) - exam1 - exam2) / 2;
    }
    
    printf("\nIf you drop a midterm, you need a %.2lf percent on your final to get the grade", final);
    
    final2 = ((((20 * desiredGrade) - ((.5 * lectureQuiz) + (3 * recitation) + (2.5 * lab) + (3 * problemQuiz) + (3 * homework)) - bonus) / 2) - exam1 - exam2 - exam3);
    
    printf("\nIf you drop half the final, you need a %.2lf percent on your final to get the grade", final2);
    return 0;
}
