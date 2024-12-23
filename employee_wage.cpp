#include<iostream>

using namespace std;

void wageCalc(int wagePerHr,int randN){
    if(randN==0){
        cout << "Total wage for full-time employee is : ";
        cout << 8 * wagePerHr;
    }
}

int main(){
    srand(time(0));
    cout << "Welcome to Employee wage computation"<<endl;
    int wagePerHr =20;
    int randomNum = rand()%2;
    if(randomNum==1){
        cout << "Employee is present" << endl;
        int randN = rand()%2;
        wageCalc(wagePerHr, randN);
    }
    else{
        cout << "Employee is not present" << endl;
    }
}