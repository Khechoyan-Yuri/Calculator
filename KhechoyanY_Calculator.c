/*This program is a Basic Calculator. It will ask the user to input the 1st number
then the operation of choice: (+, -, *, /)
then the 2nd number.
If the user chooses to divide a number by 0, it will give them an error.

Created: 10-2-15

Yuri Khechoyan
*/

#include <stdio.h>

int main (void){

    float num1;
    float num2;
    char o;

        //Ask for and save 1st number under num1
        printf("Enter 1st number: ");
        scanf("%f", &num1);

        //Ask for and save operator under o
        printf("Enter operator either + or - or * or /: ");
        scanf("\n%c", &o);

        //Ask for and save 2nd number under num2
        printf("Enter 2nd number: ");
        scanf("%f", &num2);

        //Different directions will be given to different operators
            switch(o) {
                case '+':
                        printf("%.1f + %.1f = %.1f",num1, num2, num1+num2);
                        break;
                case '-':
                        printf("%.1f - %.1f = %.1f",num1, num2, num1-num2);
                        break;
                case '*':
                        printf("%.1f * %.1f = %.1f",num1, num2, num1*num2);
                        break;
                case '/':
                        printf("%.1f / %.1f = %.1f\n",num1, num2, num1/num2);
                        break;
                default:
                        //If operator is other than +, -, * or /, error message is given
                        printf("Error! operator is not correct\a");
                        break;
            }
                        //If 2nd number is equal to 0, Error will be given
                if (num2 == 0){
                    printf("ERROR! Your number cannot be Divisible by 0!\a");
                }
}
