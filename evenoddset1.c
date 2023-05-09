#include <stdio.h>
#include <math.h>

int main(){
    int numb, choice, reverse;
    printf("Enter the integer : ");
    scanf("%d", &numb);
    if (numb >= 1){
        printf("1. Get Even Number\n");
        printf("2. Get Odd Number\n");
        printf(" : ");
        scanf("%d", &choice);
        if (choice == 1 ){
            for (int w = 1 ; w <= numb ; w++){
                if (w % 2 == 0){
                    printf("%d\n", w);
                }
            } 
        main();
        }
        else if (choice == 2){
            for (int w = 1; w <= numb ; w++){
                if (w%2 != 0){
                    printf("%d\n", w);
                }
            }
        main();
        }
        else{
            printf("Invalid Input!.....");
            main();
        }
    }
    else if (numb == 0){
        printf("Goodbye!");
    }
    else if (numb < 1){
        reverse = abs(numb);
        printf("%d\n", reverse);
        main();
	}
}