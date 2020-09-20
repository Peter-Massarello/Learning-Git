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
    cout << "Welcome to Calculator, type which arithmetic operation you would like to preform." << endl;
    cout << "1.Addition\n2.Subtraction\n3.Division\n4.Multiplication\n";
    char test[20];
    cin.getline(test, 20);
    for(int i = 0; i < 20; i++){
        static long sum = 0;
        if(test[i] == ('+' || '-' || '/' || '*')){
            int num1, num2;
            char opr;
            num1 = test[i-1];
            num2 = test[i+1];
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
    return 0;
}