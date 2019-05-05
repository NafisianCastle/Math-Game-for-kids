#include<stdio.h>
#include<time.h>
#include<math.h>
#include<conio.h>
startFunc(double x,double y)       //startFunc function
{
    float res;                //Declaring variables
    float ans;
    int exp,choice;
    time_t t;
    srand((unsigned) time(&t));   //random number generator

    printf("        1.For addition,\t        press 1\n\n");
    printf("        2.For substraction,\tpress 2\n\n");
    printf("        3.For multiplication,\tpress 3\n\n");
    printf("        4.For division,\t        press 4\n\n");
    printf("\t\t\t       To exit,press any other key\n");

    printf("\nEnter your choice:");
    scanf("%d",&exp);                                  //taking the choice
    system("cls");
    system("color 1F");                               //changes the background and font color
    switch(exp)                                       //switch-case
    {
    case 1:
        printf("%g + %g =?\n",x,y);
        res=x+y;
        scanf("%f",&ans);
        break;

    case 2:
        printf("%g - %g =?\n",x,y);
        res=x-y;
        scanf("%f",&ans);
        break;

    case 3:
        printf("%g * %g=?\n",x,y);
        res=x*y;
        scanf("%f",&ans);
        break;
    case 4:
        printf("%g / %g=?\n",x,y);
        res=x/y;
        scanf("%f",&ans);
        break;

    default:
        printf("\n\n       wrong input...........");

        return ;
    }

    if(ans==res)                                           //checking the answer and showing the correct answer
    {
        printf("Correct answer!\n");
        printf("\n\n                       To continue,press 1 \t To exit,press any other key \n\n");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        system("cls");
        system("color 2F");

        if (choice==1)
        {
            startFunc(rand()%(10+1-1)+1,rand()%(10+1-1)+1);
        }
        else
        {
            system("color 4F");
            printf("\n\n                          Thanks for playing...\n\n\n");
            return;
        }
    }
    else
    {
        printf("Wrong answer!\n");
        printf("The correct answer is %g",res);
        printf("\n\n                            To continue,press 1 \t To exit,press any other key \n\n");
        printf("Enter your choice:");
        scanf("%d",&choice);
        system("cls");
        system("color 4F");

        if (choice==1)
        {
            startFunc(rand()%(10+1-1)+1,rand()%(10+1-1)+1);
        }
        else
        {
            system("color 5F");
            printf("\n\n                      Thanks for playing...\n\n\n");
            return;
        }
    }
}
main()
{
    system("color CF");
    printf("\n\n\n                                    WELCOME TO MATH GAME FOR KIDS!\n\n");
    printf("                                           created by\n\n");
    printf("                        RAHMAN,MD. NAFISUR\t&\tSADID,MD. FAHIMUL HAQUE\n");
    printf("\n\n\n                                      To play, press [enter]");

    getchar();
    system("cls");
    system("color DF");
    startFunc(rand()%(10+1-1)+1,rand()%(10+1-1)+1);
    //startFunc function has been called here with real argument
}
