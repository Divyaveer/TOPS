#include<stdio.h>

void batsman() {
    float runs, matchs, notouts, ava;

    printf("\nEnter the Total runs scored : ");
    scanf("%f", &runs);

    printf("Enter the Total Matches : ");
    scanf("%f", &matchs);

    printf("Enter the Total Notouts : ");
    scanf("%f", &notouts);
    
    ava = runs / (matchs - notouts);

    printf("\nYour Avarage = %.2f\n", ava);
}

void bowller() {
    float run, wicket, ava;

    printf("\nEnter the Runs Conceded : ");
    scanf("%f", &run);

    printf("\nEnter the Wickets Taken : ");
    scanf("%f", &wicket);

    ava = run / wicket;

    printf("\nYour Avarage = %.2f\n", ava);
}

void basicDetails() {
    char name[20], location[20], conti = 'y';
    int age, choice;

    while(conti == 'y'){
        printf("Enter your Name : ");
        scanf("%s", &name);

        printf("Enter your Location : ");
        scanf("%s", &location);

        printf("Enter you Age : ");
        scanf("%d", &age);

        printf("\n%s are you a :--\n\tPress:--\n\t\t1. Batsman\n\t\t2. Bowller\n\t\t\tEnter your Profession : ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                batsman();
                break;
            case 2:
                bowller();
                break;
            default:
                printf("\n\n\t\tWrong Input !!!>....\n\n");
                break;
        }

        printf("\nDo you want to Continue(Press y for Continue) : ");
        scanf(" %c", &conti);
    }
}

int main() {
    basicDetails();
    
    return 0;
}