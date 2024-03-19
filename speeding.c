#include <stdio.h>

int main(){

    int speed;
    const int limit = 60;
    const int fine1 = 80;
    const int fine2 = 150;
    const int fine3 = 500;


    printf("Enter Speed ");
    scanf("%d", &speed);

    if (speed <= 0) {
        printf("ERROR");
    }

         else if (speed <= limit) {
            printf("Have a nice day!");
    }
            else if (speed <= limit + 5) {
                printf("Warning");
    }
                else if (speed <= limit + 10) {
                    printf("Fine of $%d", fine1);
    }
                    else if (speed <= limit + 20) {
                        printf("Fine of $%d", fine2);
    }
                        else if (speed > limit + 20) {
                            printf("Fine of $%d", fine3);
    }

                    return 0;
}