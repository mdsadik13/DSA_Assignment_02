# DSA_Assignment_02

#include<stdio.h>

char * GetRomanNumber(char*numbers[],int i);

void main()
{
    char *units[] = { "", "I","II","III","IV","V","VI","VII","VIII","IX" };

    char *tens[] = { "", "X","XX","XXX","XL","L","LX","LXX","LXXX","XC" };

    char *hundreds[] = {"",  "C","CC","CCC","CD","D","DC","DCC","DCCC","CM" };

    char *thousands[] = {"",  "M","MM","MMM" };
    
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int u,t,h,th;

    u = n % 10;
    t = (n / 10)%10;
    h = (n / 100)%10;
    th = (n / 1000)%10;

    printf("%s",GetRomanNumber(thousands,th));
    printf("%s",GetRomanNumber(hundreds,h));
    printf("%s",GetRomanNumber(tens,t));
    printf("%s",GetRomanNumber(units,u));

    printf("\n");
}



 char * GetRomanNumber(char*numbers[],int i)
 {
     return numbers[i];
 }
