#include <iostream>
using namespace std;
double num1 = 0, num2 = 0, result=0; // it was declared amd initialize in a global scpoe
char op;
double calculator(double number1 , double number2, char op); //this will be used when the user defined function comes after the main function
int main(){

     cout<<"Enter first number: ";
     cin>> num1;
     cout<<"\nEnter Second Number: ";
     cin>>num2;
     cout<< "\nEnter operator: ";
     cin>> op;
     cout<< "\nthe answer is "<< calculator(num1,num2,op) <<endl;
return 0;
         }


//USING THE SWITCH STATEMENT
double calculator ( double num1, double num2, char op){
   double ans ;
    switch (op)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans= num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;

    case '^':
        {double results=1;
        for(int i = 0; i<num2;i++){
            results = results * num1;
        }
        ans = results;}
        break;
     default:
      cout<< " an error as a result of invalid operator or number ";
       break;
        }
    return ans;
    }

    // USING THE IF STATEMENT
   //double calculator(double number1, double number2, char op){
  //  if (op == '+'){
    //    return number1 + number2;
    //}
    //else if(op == '-'){
     //   return number1 - number2;
    //}
    //else if(op == '*'){
      //  return number1 * number2;
    //else if(op == '/'){
      //  return number1 / number2;
    //else if(op == '^')
    //{
      //  double results=1;
        //for(int i = 0; i<number2;i++){
         //   results = results * number1;
        //}
        //return results;
    //}

//}

