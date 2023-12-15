#include <bits/stdc++.h>
using namespace std;
void show_calculator()
{
    cout<<"-------------------------------------------------"<<'\n';
    cout<<"---                                           ---"<<'\n';
    cout<<"-             SCIENTIFIC                        -"<<'\n';
    cout<<"-             CALCULATOR                        -"<<'\n';
    cout<<"---           TAMIM KHAN                      ---"<<'\n';
    cout<<"-------------------------------------------------"<<'\n';
    cout<<"-      +        |      -        |      *        -"<<'\n';
    cout<<"-     Add       |    Minus      |   Multiply    -"<<'\n';
    cout<<"-------------------------------------------------"<<'\n';
    cout<<"-      /        |      M        |      L        -"<<'\n';
    cout<<"-     Divide    |     Mod       |     Log       -"<<'\n';
    cout<<"-------------------------------------------------"<<'\n';
    cout<<"-      SQ       |      C        |      P        -"<<'\n';
    cout<<"-    Square     |    Cube       |   Power       -"<<'\n';
    cout<<"-------------------------------------------------"<<'\n';
    cout<<"-      S        |      CS       |      T        -"<<'\n';
    cout<<"-     Sin       |     Cos       |     tan       -"<<'\n';
    cout<<"-------------------------------------------------"<<'\n';
    cout<<"-      SR        |      K       |      .        -"<<'\n';
    cout<<"-  Square root   |    Clear     |    Close      -"<<'\n';
    cout<<"-------------------------------------------------"<<'\n';

}
void show_output(double x)
{
    cout<<"-------------------------------------------------"<<'\n';
    cout<<"---                              ----------------"<<'\n';
    cout<<"-             CURRENT           |        "<<'\n';
    cout<<"-            OUTPUT IS:         |      "<<x<<'\n';
    cout<<"---                              ----------------"<<'\n';
    cout<<"-------------------------------------------------"<<'\n';
    cout<<"-      +        |      -        |      *        -"<<'\n';
    cout<<"-     Add       |    Minus      |   Multiply    -"<<'\n';
    cout<<"-------------------------------------------------"<<'\n';
    cout<<"-      /        |      M        |      L        -"<<'\n';
    cout<<"-     Divide    |     Mod       |     Log       -"<<'\n';
    cout<<"-------------------------------------------------"<<'\n';
    cout<<"-      SQ       |      C        |      P        -"<<'\n';
    cout<<"-    Square     |    Cube       |   Power       -"<<'\n';
    cout<<"-------------------------------------------------"<<'\n';
    cout<<"-      S        |      CS       |      T        -"<<'\n';
    cout<<"-     Sin       |     Cos       |     tan       -"<<'\n';
    cout<<"-------------------------------------------------"<<'\n';
    cout<<"-      SR       |      K        |      .        -"<<'\n';
    cout<<"-  Square root  |    Clear      |    Close      -"<<'\n';
    cout<<"-------------------------------------------------"<<'\n';

}
int main()
{
    double num1 = 0.0;
    double num2 = 0.0;

    double ans = 0.0;
    char inp = '\n';

    bool convertor = 0;
    //show_calculator();
    while(inp != '.')
    {
        if(convertor ==1)
        {
            show_output(ans);
            //if we want to display output
            //we will take only one input
            cout<<"Enter: ";
            cin>>inp;
            if(inp == '+'|| inp == '-'|| inp == '*'|| inp == '/'|| inp == 'M')
            {
                num1 = ans;
                cout<<"Enter num2 : ";
                cin>>num2;

            }
            else if(inp == 'K'|| inp == '.')
            {
            }
            else
            {
                num1 = ans;
            }

        }
        else
        {
            //if we want to show basic calculator
            //we will take two inputs
            show_calculator();
            cout<<"Enter: ";
            cin>>inp;
            if(inp == '+'|| inp == '-'|| inp == '*'|| inp == '/'|| inp == 'M')
            {
                cout<<"Enter num1 : ";
                cin>>num1;
                cout<<"Enter num2 : ";
                cin>>num2;

            }
            else if(inp == 'K'|| inp == '.')
            {
                cout<<"Thank you Tamim Khan"<<'\n';
            }
            else
            {
                cout<<"Enter num 1 : ";
                cin>>num1;
            }
            convertor =1;
        }

        switch(inp)
        {
        case '+':
            ans = num1+num2;
            break;

        case '-':
            ans = num1-num2;
            break;

        case '*':
            ans = num1*num2;
            break;

        case '/':
            ans = num1/num2;
            break;

        case 'M':
            ans = (int)num1 % (int)num2;
            break;

        case 'L':
            ans = log(num1);
            break;

        case 'SQ':
            ans = num1*num1;
            break;

        case 'C':
            ans = num1*num1*num1;
            break;

        case 'P':
            ans = pow(num1, num2);
            break;

        case 'S':
            ans = sin(num1);
            break;

        case 'CS':
            ans =cos(num1);
            break;

        case 'T':
            ans = tan(num1);
            break;

        case 'SR':
            ans = sqrt(num1);
            break;
        case 'K':
            convertor = 0;
            break;
        case '.':
            break;
        default:
            cout<<"---------   You Entered Invalid Value! -----"<<'\n';
        }
        system("cls");
    }
    //cout<<'\n';
}
