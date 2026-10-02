#include <stdio.h>
#include "class.h"

void math(void)
{
    float m1 = midterm1 * (midterm / 100.0f);
    float m2 = midterm2 * (midterm / 100.0f);
    float m3 = midterm3 * (midterm / 100.0f);

    float q1 = pop_quiz1 * (pop_quiz / 100.0f);
    float q2 = pop_quiz2 * (pop_quiz / 100.0f);
    float q3 = pop_quiz3 * (pop_quiz / 100.0f);

    float f1 = final1 * (final / 100.0f);
    float f2 = final2 * (final / 100.0f);
    float f3 = final3 * (final / 100.0f);

    float chek1 = m1 + q1 + f1;
    float chek2 = m2 + q2 + f2;
    float chek3 = m3 + q3 + f3;

    // %.2f ile virgülden sonra 2 basamak yazdırılır
    printf("öğrenci = %s ortalamasi = %.2f\n", sutudent1, chek1);
    printf("öğrenci = %s ortalamasi = %.2f\n", sutudent2, chek2);
    printf("öğrenci = %s ortalamasi = %.2f\n", sutudent3, chek3);
}