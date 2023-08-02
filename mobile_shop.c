#include<stdio.h>
#include<string.h>

#define MAX_PHONES 10

//Global Variables :---
int items = 0;

//Brands :----
struct apple {
    char name[20], color[20];
    float price;
} iphone[3];

struct samsung {
    char name[20], color[20];
    float price;
} samsung[3];

struct xiaomi {
    char name[20], color[20];
    float price;
} xiaomi[3];

struct one_plus {
    char name[20], color[20];
    float price;
} one_plus[3];

struct vivo {
    char name[20], color[20];
    float price;
} vivo[3];

//Structure of Phone :---
struct add_to_cart {
    char name[20], color[20];
    float price, amount;
    int quantity;
} cart[MAX_PHONES];

//Functions According to Brands :----
void apple() {
    //Variable Instialation :---
    int choice;
    char addCart;
    
    //Phones Menu :---
    printf("which mobile you want From Apple :----\n\tPress:---\n\t\t");
    for(int i=0; i<3; i++){
        printf("%d. %s\t$%.2f\n\t\t", i+1, iphone[i].name, iphone[i].price);
    }
    printf("4. Home\n\t\t");
    printf("\tEnter your Choice : ");
    scanf("%d", &choice);

    if(choice == 4){
        main();
    }
    //Asking to Add to Cart :---
    int quanti;
    char colour[20], conti;

    printf("\nDo you want %s to Add to Cart(Press y to Add) : ", iphone[choice-1].name);
    scanf(" %c", &addCart);

    if(addCart == 'y'){
        if(items > MAX_PHONES){
            printf("\n\n\t\tCart is Full\n\n");
        }else{
            strcpy(cart[items].name, iphone[choice-1].name);

            //Asking For Colour :---
            printf("\nWhich Colour you want : ");
            scanf(" %s", &colour);
            
            strcpy(cart[items].color, colour);
            cart[items].price = iphone[choice-1].price;

            //Asking For Quantity :----
            while(1){
                printf("\nHow many %s, do you want : ", iphone[choice-1].name);
                scanf("%d", &quanti);

                if(quanti <= 5)
                    break;
                else{
                    printf("\nSorry, you can not add any mobile model of any brand more than 5..\n\n");
                    continue;
                }
            }

            cart[items].quantity = quanti;
            cart[items].amount = cart[items].quantity * cart[items].price;
            items++;

            printf("\nItems has been Added to Cart Successfully.\n");
            printf("Do you want to Continue Shopping in Apple(Press y for Continue) : ");
            scanf(" %c", &conti);

            if(conti == 'y')
                apple();
        }
    }
}

void samsung1() {
    //Variable Instialation :---
    int choice;
    char addCart;
    
    //Phones Menu :---
    printf("which mobile you want From Samsung :----\n\tPress:---\n\t\t");
    for(int i=0; i<3; i++){
        printf("%d. %s\t$%.2f\n\t\t", i+1, samsung[i].name, samsung[i].price);
    }
    printf("4. Home\n\t\t");
    printf("\tEnter your Choice : ");
    scanf("%d", &choice);

    if(choice == 4)
        main();

    //Asking to Add to Cart :---
    int quanti;
    char colour[20], conti;

    printf("\nDo you want %s to Add to Cart(Press y to Add) : ", samsung[choice-1].name);
    scanf(" %c", &addCart);

    if(addCart == 'y'){
        if(items > MAX_PHONES){
            printf("\n\n\t\tCart is Full\n\n");
        }else{
            strcpy(cart[items].name, samsung[choice-1].name);

            //Asking For Colour :---
            printf("\nWhich Colour you want : ");
            scanf(" %s", &colour);
            
            strcpy(cart[items].color, colour);
            cart[items].price = samsung[choice-1].price;

            //Asking For Quantity :----
            while(1){
                printf("\nHow many %s, do you want : ", samsung[choice-1].name);
                scanf("%d", &quanti);

                if(quanti <= 5)
                    break;
                else{
                    printf("\nSorry, you can not add any mobile model of any brand more than 5..\n\n");
                    continue;
                }
            }

            cart[items].quantity = quanti;
            cart[items].amount = cart[items].quantity * cart[items].price;
            items++;

            printf("\nItems has been Added to Cart Successfully.\n");
            printf("Do you want to Continue Shopping in Samsung (Press y for Continue) : ");
            scanf(" %c", &conti);

            if(conti == 'y')
                samsung1();
        }
    }
}

void xiaomi1() {
    //Variable Instialation :---
    int choice;
    char addCart;
    
    //Phones Menu :---
    printf("which mobile you want From Xiaomi :----\n\tPress:---\n\t\t");
    for(int i=0; i<3; i++){
        printf("%d. %s\t$%.2f\n\t\t", i+1, xiaomi[i].name, xiaomi[i].price);
    }
    printf("4. Home\n\t\t");
    printf("\tEnter your Choice : ");
    scanf("%d", &choice);

    if(choice == 4)
        main();

    //Asking to Add to Cart :---
    int quanti;
    char colour[20], conti;

    printf("\nDo you want %s to Add to Cart(Press y to Add) : ", xiaomi[choice-1].name);
    scanf(" %c", &addCart);

    if(addCart == 'y'){
        if(items > MAX_PHONES){
            printf("\n\n\t\tCart is Full\n\n");
        }else{
            strcpy(cart[items].name, xiaomi[choice-1].name);

            //Asking For Colour :---
            printf("\nWhich Colour you want : ");
            scanf(" %s", &colour);
            
            strcpy(cart[items].color, colour);
            cart[items].price = xiaomi[choice-1].price;

            //Asking For Quantity :----
            while(1){
                printf("\nHow many %s, do you want : ", xiaomi[choice-1].name);
                scanf("%d", &quanti);

                if(quanti <= 5)
                    break;
                else{
                    printf("\nSorry, you can not add any mobile model of any brand more than 5..\n\n");
                    continue;
                }
            }

            cart[items].quantity = quanti;
            cart[items].amount = cart[items].quantity * cart[items].price;
            items++;

            printf("\nItems has been Added to Cart Successfully.\n");
            printf("Do you want to Continue Shopping in Xiaomi (Press y for Continue) : ");
            scanf(" %c", &conti);

            if(conti == 'y')
                xiaomi1();
        }
    }
}

void onePlus1() {
    //Variable Instialation :---
    int choice;
    char addCart;
    
    //Phones Menu :---
    printf("which mobile you want From One Plus :----\n\tPress:---\n\t\t");
    for(int i=0; i<3; i++){
        printf("%d. %s\t$%.2f\n\t\t", i+1, one_plus[i].name, one_plus[i].price);
    }
    printf("4. Home\n\t\t");
    printf("\tEnter your Choice : ");
    scanf("%d", &choice);

    if(choice == 4)
        main();

    //Asking to Add to Cart :---
    int quanti;
    char colour[20], conti;

    printf("\nDo you want %s to Add to Cart(Press y to Add) : ", one_plus[choice-1].name);
    scanf(" %c", &addCart);

    if(addCart == 'y'){
        if(items > MAX_PHONES){
            printf("\n\n\t\tCart is Full\n\n");
        }else{
            strcpy(cart[items].name, one_plus[choice-1].name);

            //Asking For Colour :---
            printf("\nWhich Colour you want : ");
            scanf(" %s", &colour);
            
            strcpy(cart[items].color, colour);
            cart[items].price = one_plus[choice-1].price;

            //Asking For Quantity :----
            while(1){
                printf("\nHow many %s, do you want : ", one_plus[choice-1].name);
                scanf("%d", &quanti);

                if(quanti <= 5)
                    break;
                else{
                    printf("\nSorry, you can not add any mobile model of any brand more than 5..\n\n");
                    continue;
                }
            }

            cart[items].quantity = quanti;
            cart[items].amount = cart[items].quantity * cart[items].price;
            items++;

            printf("\nItems has been Added to Cart Successfully.\n");
            printf("Do you want to Continue Shopping in One Plus (Press y for Continue) : ");
            scanf(" %c", &conti);

            if(conti == 'y')
                onePlus1();
        }
    }
}

void vivo1() {
    //Variable Instialation :---
    int choice;
    char addCart;
    
    //Phones Menu :---
    printf("which mobile you want From Vivo :----\n\tPress:---\n\t\t");
    for(int i=0; i<3; i++){
        printf("%d. %s\t$%.2f\n\t\t", i+1, vivo[i].name, vivo[i].price);
    }
    printf("4. Home\n\t\t");
    printf("\tEnter your Choice : ");
    scanf("%d", &choice);

    if(choice == 4)
        main();

    //Asking to Add to Cart :---
    int quanti;
    char colour[20], conti;

    printf("\nDo you want %s to Add to Cart(Press y to Add) : ", vivo[choice-1].name);
    scanf(" %c", &addCart);

    if(addCart == 'y'){
        if(items > MAX_PHONES){
            printf("\n\n\t\tCart is Full\n\n");
        }else{
            strcpy(cart[items].name, vivo[choice-1].name);

            //Asking For Colour :---
            printf("\nWhich Colour you want : ");
            scanf(" %s", &colour);
            
            strcpy(cart[items].color, colour);
            cart[items].price = vivo[choice-1].price;

            //Asking For Quantity :----
            while(1){
                printf("\nHow many %s, do you want : ", vivo[choice-1].name);
                scanf("%d", &quanti);

                if(quanti <= 5)
                    break;
                else{
                    printf("\nSorry, you can not add any mobile model of any brand more than 5..\n\n");
                    continue;
                }
            }

            cart[items].quantity = quanti;
            cart[items].amount = cart[items].quantity * cart[items].price;
            items++;

            printf("\nItems has been Added to Cart Successfully.\n");
            printf("Do you want to Continue Shopping in Vivo (Press y for Continue) : ");
            scanf(" %c", &conti);

            if(conti == 'y')
                vivo1();
        }
    }
}

void billing() {
    float total=0;

    printf("\n*************************************************************************************************************************");
    printf("\n\t\t\t\t\t\t\t\tBill\t\t\t");
    printf("\n*************************************************************************************************************************\n");
    printf("\tSr.No.\t|\tItem(s)\t\t\t|\tPrice ( $ )\t\t\t|\tQuantity\t\t\t|\tAmount\t\t\t");
    printf("\n*************************************************************************************************************************\n");
    for(int i = 0; i < items; i++){
        if(strlen(cart[i].name) < 6){
            printf("\t%d\t| %s\t\t\t\t|\t%.2f\t\t\t|\t%d\t\t\t|\t%.2f\n", i+1, cart[i].name, cart[i].price, cart[i].quantity, cart[i].amount);
        }else if(strlen(cart[i].name) > 14){
            printf("\t%d\t| %s\t\t|\t%.2f\t\t\t|\t%d\t\t\t|\t%.2f\n", i+1, cart[i].name, cart[i].price, cart[i].quantity, cart[i].amount);
        }else if(strlen(cart[i].name) > 20){
            printf("\t%d\t| %s\t|\t%.2f\t\t\t|\t%d\t\t\t|\t%.2f\n", i+1, cart[i].name, cart[i].price, cart[i].quantity, cart[i].amount);
        }else{
            printf("\t%d\t| %s\t\t\t|\t%.2f\t\t\t|\t%d\t\t\t|\t%.2f\n", i+1, cart[i].name, cart[i].price, cart[i].quantity, cart[i].amount);
        }
    }
    printf("*************************************************************************************************************************\n");
    for(int i=0; i<=items; i++){
        total += cart[i].amount;
    }
    printf("Total = %.2f\n", total);
    printf("*************************************************************************************************************************\n");
}


//Main Function :------
int main() {
    //Setting Prices and Name of Brands Mobiles :-----
        //Apple Phones :----
            strcpy(iphone[0].name, "Iphone 14");
            strcpy(iphone[1].name, "Iphone 13");
            strcpy(iphone[2].name, "Iphone 12");

            iphone[0].price = 968.84;
            iphone[1].price = 751.78;
            iphone[2].price = 726.33;

        //Samsung Phones :----
            strcpy(samsung[0].name, "Samsung S23 Ultra");
            strcpy(samsung[1].name, "Samsung Galaxy Z Fold4");
            strcpy(samsung[2].name, "Samsung Galaxy M53 5G");

            samsung[0].price = 1515.69;
            samsung[1].price = 1879.46;
            samsung[2].price = 315.25;

        //Xiaomi Phones :----
            strcpy(xiaomi[0].name, "Xiaomi 13 Pro 5G");
            strcpy(xiaomi[1].name, "Xiaomi 12 Pro 5G");
            strcpy(xiaomi[2].name, "Xiaomi 11i 5G");

            xiaomi[0].price = 970.04;
            xiaomi[1].price = 545.64;
            xiaomi[2].price = 230.38;

        //One Plus :-----
            strcpy(one_plus[0].name, "OnePlus 11 5G");
            strcpy(one_plus[1].name, "OnePlus 10 Pro 5G");
            strcpy(one_plus[2].name, "OnePlus Nord CE 2 5G");

            one_plus[0].price = 788.15;
            one_plus[1].price = 666.90;
            one_plus[2].price = 218.25;

        //Vivo :----
            strcpy(vivo[0].name, "Vivo X90 Pro");
            strcpy(vivo[1].name, "Vivo Y27");
            strcpy(vivo[2].name, "Vivo T2x 5G");

            vivo[0].price = 1030.67;
            vivo[1].price = 181.87;
            vivo[2].price = 157.62;
    //------------------------------------------------

    //Variable Instialation :---
    int choice;
    char conti = 'y';

    while(conti == 'y'){
        //Asking to Choose the Brands :---
            printf("-------------------------- Gada Electronics --------------------------\n");
            printf("Which Brand's Mobile you want :---\n\tPress:---\n\t\t1. Apple\n\t\t2. Samsung\n\t\t3. Xiaomi\n\t\t4. One Plus\n\t\t5. Vivo\n");
            printf("---------------------------------- X ---------------------------------\n");
            printf("Enter your choice : ");
            scanf("%d", &choice);

        //Navigating through Brands :----
        switch(choice){
            case 1:
                apple();
                break;
            case 2:
                samsung1();
                break;
            case 3:
                xiaomi1();
                break;
            case 4:
                onePlus1();
                break;
            case 5:
                vivo1();
                break;
            default:
                printf("\n\n\t\tWrong Input !!!......\n\n");
                continue;
                break;
        }

        printf("\nDo you want to Continue shopping in othe Brands (Press y for Continue) : ");
        scanf(" %c", &conti);
    }

    billing();
    
    return 0;
}