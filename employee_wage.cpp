#include<iostream>

using namespace std;

void wageCalc(int wagePerHr,int randN){
    switch(randN){
        case 0 :
            cout << "Total wage for full-time employee is : ";
            cout << 8 * wagePerHr;
            break;
        case 1 :
            cout << "Total wage for part-time employee is : ";
            cout << 4 * wagePerHr;
            break;
    }
}

int main(){
    srand(time(0));
    cout << "Welcome to Employee wage computation"<<endl;
    int wagePerHr =20;
    int randomNum = rand()%2;
    switch(randomNum){
        case 0 :
            cout << "Employee is not present" << endl;
            break;
        case 1 :
            cout << "Employee is present" << endl;
            int randN = rand()%2;
            wageCalc(wagePerHr, randN);
            break;
    }
}