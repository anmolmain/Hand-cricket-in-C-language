/* Made by Anmol main

student B.tech CSE

Punjabi university

Program 15 */



#include <stdio.h>

#include <windows.h>

#include <conio.h>

#include <stdlib.h>

#include <time.h>

#include <dos.h>

#define N 20



int main()

{



    {



    }



    int x;

    double y;

    printf("_______________________________________");

    char text1[] = "| WELCOME TO HAND CRICKET GAME         |";

    char text2[] = "| MADE BY ANMOL MAIN                   |";

    char text3[] = "| LETS GET STARTED                     |\n|______________________________________|\n";



    char text4[] = "\nENTER PLAYER 1 NAME : ";



    char str[N];

    char str2[N];

    char text6[] = "\n\nRULES OF THE GAME -:\nTwo players using number of fingers to indicate runs would play against each other the bowler wins if he guessed the same number as the batsman if not then batsman aquires the runs according to the gesture he makes\nTHE LAST BOWL SCORE WILL BE CONSIDERED\n";

    char text7[] = "OOPSSS!!!!!\nAs your selected number and bowler number is same\nSO YOU ARE DECLARED AS OUT\n\n";

    int a, be, num, r1, score = 0, o, bowls, i, T = 0, toss, bscore = 0, sel;

    // char text5[]=    "\nENTER PLAYER 2 NAME : ";

    printf("\n");

    for (x = 0; text1[x] != 0; x++)

    {

        printf("%c", text1[x]);

        for (y = 0; y <= 888888; y++)

        {

        }

    }

    printf("\n");

    for (x = 0; text2[x] != 0; x++)

    {

        printf("%c", text2[x]);

        for (y = 0; y <= 888888; y++)

        {

        }

    }

    printf("\n");

    for (x = 0; text3[x] != 0; x++)

    {

        printf("%c", text3[x]);

        for (y = 0; y <= 888888; y++)

        {

        }

    }

    printf("\n");

    for (x = 0; text4[x] != 0; x++)

    {

        printf("%c", text4[x]);

        for (y = 0; y <= 888888; y++)

        {

        }

    }

    Beep(1000, 800);



    gets(str);

            printf("________________________________________");

    char text5[] = "|HELLOW!!!!                             |\n|HOPE YOU ARE HAVING AN AWESSOME DAY    |\n|_______________________________________|\n\n________________________________________\n|PRESS 0 TO PLAY                        |\n|PRESS 1 TO KNOW RULES OF GAME          |\n|_______________________________________|\n";



    printf("\n");

    for (x = 0; text5[x] != 0; x++)

    {

        printf("%c", text5[x]);

        for (y = 0; y <= 888888; y++)

        {

        }

    }



    Beep(1000, 800);



    scanf("%d", &a);



    switch (a)

    {

    case 1:



        printf("\n");

        for (x = 0; text6[x] != 0; x++)

        {

            printf("%c", text6[x]);

            for (y = 0; y <= 888888; y++)

            {

            }

        }



        printf("\nGAME STARTS\n");

        Beep(1000, 800);



    case 0:

        do

        {   printf("_____________________________________________\n");

            printf("| Till now YOUR score is           :    %03d  |\n",score);

            printf("| Till now Computer score is       :    %03d  |\n", bscore);

            printf("|____________________________________________|");

            srand(time(NULL));

            num = rand() % 6 + 1;

            printf("\nEnter your choice : ");

            scanf("%d", &r1);

            if (r1 < 7)

            {

                printf("computer chooses : %d\n\n", num);



                T++;

                score = r1 + score;

                bscore = num + bscore;

            }



            else

            {

                printf("\nEter number only from 0 to 6\n");

            }



        } while (r1 != num);

        printf("\n");

        for (x = 0; text7[x] != 0; x++)

        {

            printf("%c", text7[x]);

            for (y = 0; y <= 888888; y++)

            {

            }

        }

        printf("\t\t\t\t\t\t================================\n");

        printf("\t\t\t\t\t\t|| %s's Total turns = %d\n", str, T);

        printf("\t\t\t\t\t\t|| %s Total score is %d\n", str, score);

        printf("\t\t\t\t\t\t|| Computer Total score is %d\n", bscore); //there is zero error till this point.

        printf("\t\t\t\t\t\t================================\n\n");



        {

        if (score > bscore)

        {

            printf("\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::\n");

            printf("\t\t\t\t\tCONGRATULATIONS %s YOU WON THIS MATCH\n", str);

            printf("\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::\n");

            Beep(300, 1500);

        }

        else if (score < bscore)

        {

            printf("\t\t\t\t\t::::::::::::::::::::::::::::::::::::\n");

            printf("\t\t\t\t\tOOPSSS!!! Computer WON THIS MATCH\n");

            printf("\t\t\t\t\t__________________________________________\n");

            Beep(300, 1500);

        }

        else

        {   printf("\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::\n");

            printf("\t\t\t\t\tThere is a tie between match of %s and Computer\n", str);

            printf("\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::::::\n");

        }

        }

    }



    return 0;

    getch();

}
