#include <iostream>

using namespace std;

int main () {
    int score;
    cout <<"Enter Your Score: "<< endl;
    cin >> score;

        if (score < 0 || score > 100){
         cout <<"Invalid Score.Enter the right score."<<endl;}

         if (scoere >= 90 && score <= 100)
            cout <<"A - Excellent"
        else if (score >= 80 && score < 90) {
            cout <<"B - Very Good."<< endl;
        }


       else if (score >= 70 && score < 80) {
           cout <<"C - Good but can improve."<< endl;
       }

        else if (score >= 60 && score < 70) {
            cout <<"D - Needs for effort."<<endl;
        }


        else if (score >= 50 && score < 60) {
            cout <<"E - Just passed,study more."<<endl;

        }


        else if (score >= 40 ) {
            cout <<"F - Failed.Try again next time."<<endl;
        }

        return 0 ;
    }
