#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item {
    int price;
    char name[20];
};

typedef struct item Item;

int cmpfunc (const void * a, const void * b) {
   return strcmp(((Item*)a)->name, ((Item*)b)->name);
}

int main(void) {
    int i;
    Item menu[5];
    Item order[5];

    printf("Enter 5 items");

    for(i = 0; i < 5; i++) {
        printf("\nEnter price:");
        scanf("%d", &menu[i].price);
        printf("\nEnter name:");
        scanf("%s", &menu[i].name);
    }

    qsort(menu, 5, sizeof(Item), cmpfunc);

    printf("\nItem Information List:");

    for(i = 0; i < 5; i++) {
        printf("\nprice:%d, Name:%s", menu[i].price, menu[i].name);
    }

    printf("\nChoose from menu: ");

    i = 0;
    int sum = 0;

    //for(i = 0; i < 5; i++)
    while(strcmp(order[i].name, "") != 0) {
        scanf("%[^\n]", order[i].name);
        printf("\ninput: ");
        int y = 0;
        while(order[i].name[y]) {
            printf("%d ", order[i].name[y]);
            y++;
        }
        printf("\nChoose from menu: ");
        for(int j = 0; j < 5; j++) {
            if(strcmp(order[i].name, menu[j].name) == 0) {
                sum = sum + menu[j].price;
            }
        }
        i++;
    }
    printf("\nYour bill is: %i$", sum);

        //printf("\n%s", order[0].name);
        //printf("\n%s", menu[i].name);
}
