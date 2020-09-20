#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int addition(int a, int b){
    int sum = 0;
    sum = (a + b);
    return sum;
}
int multiplication(int a, int b){
    int sum = 0;
    sum = (a * b);
    return sum;
}
int subtraction(int a, int b){
    int sum = 0;
    sum = (a - b);
    return sum;
}
double division(int a, int b){
    double sum = 0;
    sum = (double)(a / b);
    return sum;
}
int main(){
    bool running = true;
    vector<int> input;
    string user_input = "";
    cout << "Welcome to Calculator, these are the current operations supported." << endl;
    cout << "1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n" << endl;
    char test[20];
    char *ptr;
    ptr = test;
    long sum = 0;
    cin.getline(test, 20);
    for(int i = 0; i < 20; i++){
        if(ptr[i] == '+' || ptr[i] == '-' || ptr[i] == '/' || ptr[i] == '*'){
            int num1, num2;
            char opr;
            num1 = test[i-1] - '0';
            num2 = test[i+1] - '0';
            opr = test[i];
            switch(opr){
                case '+':
                    sum += addition(num1, num2);
                    break;
                case '-':
                    sum += subtraction(num1, num2);
                    break;
                case '/':
                    sum += division(num1, num2);
                    break;
                case '*':
                    sum += multiplication(num1, num2);
                    break;
            }
        }

    }
    cout << sum << endl;
    return 0;
}