#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int i,symbol, counter,controller, num_binary, num_decimal, aboba ,error=0,n;
    char numberof[32];
    char number[32];
    printf("Enter number of digits: \n");
    while (aboba!=1){
        error=0;
        scanf("%s", &numberof);
        for(int k = 0; k < strlen(numberof) ; k++){
            symbol = numberof[k];
            if(symbol < 48 || symbol > 57){
                printf("Wrong input. Don't type letters or another symbols except numbers.\n");
                error+=1;
                break;
            }
        }
        if (error ==0){
            aboba =1;
            n=atoi(numberof);
        }
    }

    int bin[n], dec[n];
    printf("Enter decimal numbers: (one by one)\n");
    for(i = 0; i < n; i++){
        controller = 0;
        scanf("%s", &number);

        //check for numbers
        for(int j = 0; j < strlen(number) ; j++){
            symbol = number[j];
            if(symbol < 48 || symbol > 57){
                controller = 1;
                printf("Wrong input. Don't type letters or another symbols except numbers.\n");
            }
        }

        // decimal -> binary
        if(controller != 1) {
            num_decimal = atoi(number);
            dec[i] = num_decimal;
            num_binary = 0;
            counter = 0;
            while ( num_decimal > 0) {
                num_binary += pow(10, counter) * (num_decimal % 2);
                counter += 1;
                num_decimal /= 2;
            }
            bin[i] = num_binary;
        }
        else {
            i -= 1;
        }
    }

    // print numbers
    printf("Decimal numbers: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", dec[i]);}
    printf("\n");
    printf("Binary numbers: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", bin[i]);}
    return 0;
}
