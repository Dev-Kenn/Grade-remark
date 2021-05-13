#include<stdio.h>
#define p printf
#define s scanf


        /*MARK KENNETH O. FERRER    DICT 1-3*/  


main()
{
int studno, midterm, final, pros;
char stnm[40], sbj[20], rem[20], ans;
float eq, ave;

    p("\tSTUDENT GRADE CALCULATOR\n\n");

    do  {
        pros=pros+1;

        p("STUDENT NUMBER   : ");
        s("%d", &studno);
        p("STUDENT NAME     : ");
        s("%s", &stnm);
        p("SUBJECT          : ");
        s("%s", &sbj);
        p("MIDTERM GRADE    : ");
        s("%d", &midterm);
        p("FINAL GRADE      : ");
        s("%d", &final);

        ave=(final+midterm)/2;
        if (ave<=100 && ave>=97)
            {
            eq = 1.00;
            p ("\nTHE GENERAL AVERAGE IS    : %.1f", ave);
            p ("\nEQUIVALENT                : %.1f", eq);
            p ("\nREMARK                    : Excellent");
            }

        else if (ave<=96 && ave>=94)
            {
            eq = 1.25;
            p ("\nTHE GENERAL AVERAGE IS    : %.1f", ave);
            p ("\nEQUIVALENT                : %.1f", eq);
            p ("\nREMARK                    : Excellent");
            }

        else if (ave<=93 && ave>=91)
            {
            eq = 1.50;
            p ("\nTHE GENERAL AVERAGE IS    : %.1f", ave);
            p ("\nEQUIVALENT                : %.1f", eq);
            p ("\nREMARK                    : Very Good");
            }

        else if (ave<=90 && ave>=88)
            {
            eq = 1.75;
            p ("\nTHE GENERAL AVERAGE IS    : %.1f", ave);
            p ("\nEQUIVALENT                : %.1f", eq);
            p ("\nREMARK                    : Very Good");
            }

        else if (ave<=87 && ave>=85)
            {
            eq = 2.00;
            p ("\nTHE GENERAL AVERAGE IS    : %.1f", ave);
            p ("\nEQUIVALENT                : %.1f", eq);
            p ("\nREMARK                    : Good");
            }

        else if (ave<=84 && ave>=82)
            {
            eq = 2.25;
            p ("\nTHE GENERAL AVERAGE IS    : %.1f", ave);
            p ("\nEQUIVALENT                : %.1f", eq);
            p ("\nREMARK                    : Good");
            }

        else if (ave<=81 && ave>=79)
            {
            eq = 2.50;
            p ("\nTHE GENERAL AVERAGE IS    : %.1f", ave);
            p ("\nEQUIVALENT                : %.1f", eq);
            p ("\nREMARK                    : Satisfactory");
            }

        else if (ave<=78 && ave>=76)
            {
            eq = 2.75;
            p ("\nTHE GENERAL AVERAGE IS    : %.1f", ave);
            p ("\nEQUIVALENT                : %.1f", eq);
            p ("\nREMARK                    : Fair");
            }

        else if (ave==75)
            {
            eq = 3;
            p ("\nTHE GENERAL AVERAGE IS    : %.1f", ave);
            p ("\nEQUIVALENT                : %.1f", eq);
            p ("\nREMARK                    : Passed");
            }

        else
            {
            eq = 5;
            p ("\nTHE GENERAL AVERAGE IS    : %.1f", ave);
            p ("\nEQUIVALENT                : %.1f", eq);
            p ("\nREMARK                    : Failed");
            }

    p ("\n\nDO YOU WANT TO CONTINUE? Y/N	: ");
    s ("%s", &ans);

    } while((ans=='Y')||(ans=='y'));

    p ("\nTOTAL NUMBER OF STUDENT(S) PROCESSED    : %d", pros);
}
