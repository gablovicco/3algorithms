#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <numeric>
#include <cmath>
using namespace std;

void one(int &n){ //1.S=12+22+32+…+n2
    int result = 0;

    for(int i = 10 + 2; i <= n * 10 + 2; i += 10){
        result += i;

    }
 cout << "For n = " << n << " your result is = " << result << endl;
}

void two(int &n){
    int result = 0;

    for (int i = 1; i <= n; i++) {
        int term;
        if (i % 2 == 0)
            term = i * i * -1;
        else
            term = i * i;
        result += term;

        if (i != 1) {
            if (term > 0)
                cout << " + ";
            else
                cout << " - ";
        }
        cout << i << "2";
    }
    cout << " = " << result <<endl;;

}

void three(int &n){

    int result = 1;
    for(int i = 1; i <= n; ++i) {
        result *= i;
    }
    cout << "For n = " << n << " your result is = " << result << endl;
}

int main() {
    int n;
    int choice;
    char choice2;

      do {
          cout << "Please choose which calculation do you want to calculate:" << endl << "1.S=12+22+32+…+n2 " << endl
               << "2.12-22+32+…+(-1)n+1n2 " << endl << "3.S=n!=1*2*3*…*n." << endl;
          cin >> choice;

          cout << "Please enter the value of n: " << endl;
          cin >> n;

          switch(choice){
              case 1:
                  one(n);
                  break;

              case 2:
                  two(n);
                  break;
              case 3:
                  three(n);
                  break;
          }
          cout << "Do you want to calculate another? 'Y'/'N'" << endl;
          cin >> choice2;
      } while(choice2 != 'N' && choice2 != 'n');
}