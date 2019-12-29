#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int digit1, digit2,carrybit,sum;



int final(){
    cout << "\n";
    cout << sum << "\n";
}


int d11()
{
 switch (digit2)
    {
    case 0:
        // 1+0
        sum = 01;
        final();
        break;

    default:
    cout << "\n";
    cout << "Invaild Second Digit. \n";
    cout << "Digit must be a 1 or a 0. \n";
    }

}

int d10()
{
    switch (digit2)
        {
        case 0:
            // 0+0
            sum = 00;
            final();
            break;

        case 1:
            // 0+1
            sum = 01;
            final();
            break;
        default:
        cout << "\n";
        cout << "Invaild Second Digit. \n";
        cout << "Digit must be a 1 or a 0. \n";
        }
}

int input(){
    cout << "Input digit on top. \n";
    cin >> digit1;
    cout << "-now the one on the bottom. \n";
    cin >> digit2;
}


int intro(){
    cout << "Welcome to Dice's 1 digit binary adder! \n";
    cout << "\n";
    cout << "\n";
}

int main()
{

    intro();
    input();

    if(digit1 == 1 && digit2 == 1){
        carrybit = 1;

        cout << "10 \n";
    }else{
        switch (digit1){
            case 0: // code to be executed if n = 1;
                d10();
                break;

            case 1: // code to be executed if n = 2;
                d11();
                break;

            default:
                cout << "\n";
                cout << "Invaild First Digit. \n";
                cout << "Digit must be a 1 or a 0. \n";
        }
    }

    // 0 + 0 = 00
    // 0 + 1 = 01
    // 1 + 0 = 01
    // 1 + 1 = 10

      //Carrying
    // 1 + 0 + 0 = 01
    // 1 + 0 + 1 = 10
    // 1 + 1 + 0 = 10
    // 1 + 1 + 1 = 11

    system("pause");
}


