#include <iostream>
#include <windows.h>
using namespace std;

class Balance
{
private:
    int balance;

public:
    Balance(int InitialBal)
    {
        balance = InitialBal;
    }
    int TimesThree(int money)
    {
        balance = money * 4;
        return balance;
    }

    int TimesTwo(int moneyy)
    {
        balance = moneyy * 3;
        return balance;
    }

    int TimesOne(int moneyyy)
    {
        balance = moneyyy * 2;
        return balance;
    }

    int Loose(int moneyyyy)
    {
        balance = moneyyyy;
        return balance;
    }

    int CheckBal(int lance)
    {
        lance = balance;
        return lance;
    }
};
int main()
{
    int initialBal = 500;
    Balance bal(initialBal);

    int balanceUpdate, lance;
    balanceUpdate = initialBal;

    int num, bet, RemBal;

    // windows.h ColorHandler
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

    // random number generator
    srand(time(NULL));
    while (true)
    {
        int num1[50], num2[50], num3[50];
        for (int i = 0; i < 50; i++)
        {
            num1[i] = (rand() % 6) + 1;
            num2[i] = (rand() % 6) + 1;
            num3[i] = (rand() % 6) + 1;

            if (num1[i] == 3)
            {
                num1[i] = 15;
            }
            else if (num2[i] == 3)
            {
                num2[i] = 15;
            }
            else if (num3[i] == 3)
            {
                num3[i] = 15;
            }
            else
            {
                continue;
            }
        }

        // startup of color game

    reverse:

        balanceUpdate = bal.CheckBal(lance);
        cout << "=================" << endl;
        cout << "   COLOR GAME    " << endl;
        cout << "=================" << endl;
        cout << "|               |" << endl;
        cout << "|               |" << endl;
        cout << "|               |" << endl;
        cout << "|   [";
        SetConsoleTextAttribute(h, num1[0]);
        cout << "■";
        SetConsoleTextAttribute(h, 7);
        cout << "]";
        SetConsoleTextAttribute(h, 7);
        cout << "[";
        SetConsoleTextAttribute(h, num2[0]);
        cout << "■";
        SetConsoleTextAttribute(h, 7);
        cout << "]";
        SetConsoleTextAttribute(h, 7);
        cout << "[";
        SetConsoleTextAttribute(h, num3[0]);
        cout << "■";
        SetConsoleTextAttribute(h, 7);
        cout << "]   |" << endl;
        cout << "|               |";
        cout.flush();
        cout << endl
             << "=================" << endl;
        cout << "Balance: ";SetConsoleTextAttribute(h, 2);
        cout << "₱" <<balanceUpdate << endl
             << endl;
             SetConsoleTextAttribute(h, 7);
        cout << "Enter Bet: " << endl;
        SetConsoleTextAttribute(h, 2);
        cin >> bet;
        SetConsoleTextAttribute(h, 7);
        
        //choosing color
        cout<<endl<<endl;
        SetConsoleTextAttribute(h, 1);
        cout << "BLUE(1)" << endl;
        SetConsoleTextAttribute(h, 2);
        cout << "GREEN(2)" << endl;
        SetConsoleTextAttribute(h, 4);
        cout << "RED(4)" << endl;
        SetConsoleTextAttribute(h, 5);
        cout << "PURPLE(5)" << endl;
        SetConsoleTextAttribute(h, 6);
        cout << "YELLOW(6)" << endl;
        SetConsoleTextAttribute(h, 15);
        cout << "WHITE(15)" << endl;
        SetConsoleTextAttribute(h, 7);
        cout<<endl<<endl;
        cout << "Enter Number: ";
        cin >> num;

        RemBal = balanceUpdate - bet;
        SetConsoleTextAttribute(h, 2);
        cout << RemBal;
        SetConsoleTextAttribute(h, 7);
        system("clear");

        // program output:
        //  ===[■][■][■]===
        // this is the game loop

        for (int i = 0; i < 50; i++)
        {
            cout << "=================" << endl;
            cout << "   COLOR GAME    " << endl;
            cout << "=================" << endl;
            cout << "|               |" << endl;
            cout << "|               |" << endl;
            cout << "|               |" << endl;
            cout << "|   [";
            SetConsoleTextAttribute(h, num1[i]);
            cout << "■";
            SetConsoleTextAttribute(h, 7);
            cout << "]";
            SetConsoleTextAttribute(h, 7);
            cout << "[";
            SetConsoleTextAttribute(h, num2[i]);
            cout << "■";
            SetConsoleTextAttribute(h, 7);
            cout << "]";
            SetConsoleTextAttribute(h, 7);
            cout << "[";
            SetConsoleTextAttribute(h, num3[i]);
            cout << "■";
            SetConsoleTextAttribute(h, 7);
            cout << "]   |" << endl;
            cout << "|               |";
            cout.flush();
            cout << endl
                 << "=================" << endl;
            cout << "Bet: ";
            SetConsoleTextAttribute(h, 2);
            cout <<"₱"<< bet << endl;
            SetConsoleTextAttribute(h, 7);
Ipinadala mo
cout << "Balance: ";
            SetConsoleTextAttribute(h, 2);
            cout <<"₱" <<RemBal << endl;
            SetConsoleTextAttribute(h, 7);
            cout << "The Color you Bet on: ";
            SetConsoleTextAttribute(h, num);
            cout << num << endl;
            SetConsoleTextAttribute(h, 7);
            cout.flush();
            
            // animation for thrill
            if(i<39){
            Sleep(150);
            }
            else if(!i<39 && i<42){
            Sleep(500);
            }else if(!i<42 && i<44){
            Sleep(1000);
            }else if(!i<44 && i<46){
            Sleep(1500);
            }else if(!i<46 && i<48){
            Sleep(2000);
            }else if(!i<48 && i<49){
            Sleep(2500);
            }
            if (i < 49)
            {
                system("clear");
            }
        }
        
        //won 3 times
        if (num == num1[49] && num == num2[49] && num == num3[49])
        {
            int money = bet;
            cout << "Congrats you won ";
            SetConsoleTextAttribute(h, 2);
            cout<< bet * 3 << endl;
            SetConsoleTextAttribute(h, 7);
            cout << endl;
            cout << endl;
            cout << "Balance: ";
            SetConsoleTextAttribute(h, 2);
            cout <<"₱"<< bal.TimesThree(money) << endl;
            SetConsoleTextAttribute(h, 7);
            balanceUpdate = bal.TimesThree(money) + RemBal;
    }
    //won 2 times
        else if (num == num1[49] && num == num2[49] || num == num1[49] && num == num3[49] || num == num2[49] && num == num3[49])
        {
            int moneyy = bet;
            cout << "Congrats you won ";
            SetConsoleTextAttribute(h, 2);
            cout<< bet * 2 << endl;
            SetConsoleTextAttribute(h, 7);
            cout << endl;
            cout << "Balance: ";
            SetConsoleTextAttribute(h, 2);
            cout <<"₱"<< bal.TimesTwo(moneyy) << endl;
            SetConsoleTextAttribute(h, 7);
            balanceUpdate = bal.TimesTwo(moneyy) + RemBal;
        }
        
        // won 1 times
         else if (num == num1[49] || num == num2[49] || num == num3[49])
        {
            int moneyyy = bet;
            cout << "Congrats you won ";
            SetConsoleTextAttribute(h, 2);
            cout<< bet * 1 << endl;
            SetConsoleTextAttribute(h, 7);
            cout << endl;
            cout << "Balance: ";
            SetConsoleTextAttribute(h, 2);
            cout << "₱"<< bal.TimesOne(moneyyy) << endl;
            SetConsoleTextAttribute(h, 2);
            balanceUpdate = bal.TimesOne(moneyyy) + RemBal;
        }
        //if loose
        else if (num != num1[49] && num != num2[49] && num != num3[49])
        {
            int moneyyyy = RemBal;
            cout << endl
                 << endl;
            cout << "Balance: ";
            SetConsoleTextAttribute(h, 2);
            cout <<"₱"<< RemBal << endl;
            SetConsoleTextAttribute(h, 7);
            cout << "Sorry, You lost." << endl;
            balanceUpdate = bal.Loose(moneyyyy);
            if (balanceUpdate == 0)
            {
                return 2;
            }
        }
        
        // try again
        SetConsoleTextAttribute(h, 7);
        cout << "Would you like to try again? (y/n)";
        char answer;
        cin >> answer;
        if (answer == 'y')
        {
            system("clear");
            goto reverse;
        }
        else if (answer == 'n')
        {
            return 1;
        }
    }

    return 0;
}
