#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

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
int create_ints(char * inInt, int bound1, int bound2){
    int val = 0;
    while (bound1 <= bound2){
        val = val * 10 + inInt[bound1++] - '0';
    }
    return val;
}
int main(){
    bool running = true;
    string user_input = "";
    cout << "Welcome to Calculator, will only work with two numbers.\nThe current operations supported are-" << endl;
    cout << "1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n" << endl;
    cout << endl << "To exit please type 'EXIT'" << endl;
    while (running){
        getline(cin, user_input);
        if(user_input == "EXIT"){
            cout << "Goodbye, thank you for using the basic calculator" << endl;
            running = false;
        }
        int size = user_input.length();
        char test[size];
        strncpy(test, user_input.c_str(), size);
        char *ptr;
        ptr = test;
        long sum = 0;
        
        for(int i = 0; i < size; i++){
            if(ptr[i] == '+' || ptr[i] == '-' || ptr[i] == '/' || ptr[i] == '*'){
            int bound1 = 0;
            int bound2 = (i-1);
            int bound3 = (i+1);
            int bound4 = (size - 1);
            int num1, num2;
                char opr;
                num1 = create_ints(test, bound1, bound2);
                num2 = create_ints(test, bound3, bound4);
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
    }
    return 0;
}