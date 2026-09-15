#include <iostream>

using namespace std;
float addition(float a ,float b){
    return a+b;
}
float Subtraction(float a, float b){
    return a-b;
}
float Multiplication(float a,float b){
    return a*b;
}
float division(float a,float b){
    if (b==0){
        cout << "Error: Division by zero" << endl;
        return 0;
    }
    return a/b;
}
int main() {
    cout << "Simple Calculator" << endl;
    cout << addition(10, 20) << endl;
    cout << Subtraction(10, 20) << endl;
    cout << Multiplication(10, 20) << endl;
    cout << "Work in progress..." << endl;
    return 0;

}
