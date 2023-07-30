#include<stdio.h>
int balnace = 0;

void deposite() {
    int deposite;

    printf("Enter the Deposite Amount : ");
    scanf("%d", &deposite);

    balnace += deposite;

    printf("\nAfter Deposite, Your current Balance = %d\n", balnace);
}

void withdraw() {
    int withrawAmount;

    printf("Enter the Withraw Amount : ");
    scanf("%d", &withrawAmount);

    balnace -= withrawAmount;

    printf("\nAfter Withdraw, Your current Balance = %d\n", balnace);
}

int main() {
    int choice;
    char conti = 'y';

    while(conti == 'y'){
        printf("Do you want to :----\n\tPress:---\n\t\t1. Deposite Money\n\t\t2. Withdraw Money\n\t\t3. Check Money\n\t\t\tEnter your Choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deposite();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                printf("\nBalance = %d\n", balnace);
                break;
            default:
                printf("\n\n\t\tWrong Input !!!....\n\n");
                break;
        }

        printf("\nDo you want to Continue(Press y for Continue) : ");
        scanf(" %c", &conti);
    }
    
    return 0;
}