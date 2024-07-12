#include <iostream>
using namespace std;
int main()
{
double score;
char grade;
string remark;
 cout << "input your score: ";
cin>> score;
if(score >= 70) {
grade = 'A';
remark = "excellent";
}
else if(score >= 60) {
    grade = 'B';
    remark = "very good";
}
else if(score >= 50) {
    grade = 'C';
    remark = "good";
}
else if (score >= 40) {
    grade = 'D';
    remark = "pass";
}
else if(grade < 40 ){
    grade = 'E',  remark = "better luck next time";
}
cout << "Your grade is ";
cout << grade<< endl;
cout << remark;
return 0;
}

