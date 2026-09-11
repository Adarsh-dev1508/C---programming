#include <stdio.h>

int main ()
 {
    char name[] = "Adarsh";
    printf("Student name is %s\n", name);
    int math,physics,chemistry,english,hindi;
    printf("Enter marks of math");
    scanf("%d" , &math);
    printf("Enter marks of physics");
    scanf("%d" , &physics);
    printf("Enter marks of chemistry");
    scanf("%d" ,&chemistry);
    printf("Enter marks of english");
    scanf("%d" , &english);
    printf("Enter marks of hindi");
    scanf("%d" , &hindi);
    int total = math+physics+chemistry+english+hindi;
    printf("Total marks of student = %d\n", total);
    float percentage = (total / 500.0) * 100;
    printf("Percentage of student = %.2f\n", percentage);
    return 0;

}