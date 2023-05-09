#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int numb, choice, reverse;
    cout << "Enter the integer : ";
    cin >> numb;
    if (numb >= 1){
        cout << "1. Get Even Number\n";
        cout << "2. Get Odd Number\n";
        cout << " : ";
        cin >> choice;
        if (choice == 1 ){
            for (int w = 1 ; w <= numb ; w++){
                if (w % 2 == 0){
                    cout << w << "\n";
                }
            } 
        main();
        }
        else if (choice == 2){
            for (int w = 1; w <= numb ; w++){
                if (w%2 != 0){
                    cout << w <<"\n";
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
    cout << "Goodbye!";
	}
    else if (numb < 1){
        reverse = abs(numb);
        cout << reverse << "\n";
        main();
    }
}