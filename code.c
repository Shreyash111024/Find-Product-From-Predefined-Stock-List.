#include <stdio.h>

struct stock {
    char name[50];
    int id;
    int price;
};

int main() {

    struct stock S1[5] = {
        {"Pant", 1, 500},
        {"Shirt", 2, 700},
        {"Tshirt", 3, 200},
        {"Socks", 4, 70},
        {"Trouser", 5, 400}
    };

    printf("Predefined Stock List:\n");
    printf("%-15s %-10s %-10s\n", "Name", "ID", "Price");
    printf("-------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10d\n", S1[i].name, S1[i].id, S1[i].price);
    }

    int type;
    printf("Enter what info you have about product\n1.Id\n2.Price\n");
    scanf("%d", &type);

    if (type == 1) {
        int b;
        printf("Enter Id:");
        scanf("%d", &b);

        int i;
        for (i = 0; i < 5; i++) {
            if (S1[i].id == b) {
                printf("\n-------------------------------------\n");
                printf("Name:%s\nPrice:%d\n", S1[i].name, S1[i].price);
                break;
            }
        }

        if (i == 5) {
            printf("Invalid Input\nEnter Correct id!\n");
        }
    }

    else if (type == 2) {
        int c;
        printf("Enter Price:");
        scanf("%d", &c);

        int i;
        for (i = 0; i < 5; i++) {
            if (S1[i].price == c) {
                printf("\n-------------------------------------\n");
                printf("Name:%s\nID:%d\n", S1[i].name, S1[i].id);
                break;  
            }
        }

        if (i == 5) {
            printf("Invalid Input\nEnter Correct Price!\n");
        }
    }

    else {
        printf("Invalid option selected.\n");
    }

    return 0;
}
