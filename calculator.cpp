#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Calculator{
    public:
        int x;
        Calculator(int a, int b, char oper)
        {
            switch(oper){
                case '+':
                    add(a, b);
                    break;
                case '-':
                    min(a, b);
                    break;
                case '*':
                    mult(a, b);
                    break;
                case ':':
                    div(a, b);
                    break;
                case '^':
                    power(a, b);
                    break;
                case '%':
                    remain(a, b);
            }
        }
        int add(int a, int b){
            x = a + b;
            return x;
        }
        int min(int a, int b){
            x = a - b;
            return x;
        }
        int mult(int a, int b){
            x = a * b;
            return x;
        }
        int div(int a, int b){
            x = a / b;
            return x;
        }
        int power(int a, int b){
            x = pow(a, b);
            return x;
        }
        int remain(int a, int b){
            x = a % b;
            return x;
        }
            
    private:
        int a;
        int b;
        char oper;
};

int main() {
    int a;
    int b;
    char oper;
    cout << "Enter an expession:" << endl << "+ is addition" << endl << "- is decrease" << endl << "* is multiplication" << endl << ": is division" << endl << "^ is exponentiation"<<endl << "% is remainder"<<endl;
    cin>>a>>oper>>b;
    if (oper != '+' && oper != '-' && oper != '*' && oper != '/' && oper != '^' && oper != '%') {
        cout<<"Please, repeat input"<<endl;
        cin >> oper;
    }
    Calculator calc(a, b , oper);
    cout<<a<<" "<<oper<<" "<<b<<" "<<"="<< " "<<calc.x<<endl;
    return 0;
    
}
