#include<iostream>
#include<stdio.h>
using namespace std;

void main_menu(){
    cout<<"\n\t\t\t\t\t-------------------------------"<<endl;
    cout<<"\n\t\t\t\t\t****PERSONAL BANKING SYSTEM****"<<endl;
    cout<<"\n\t\t\t\t\t-------------------------------"<<endl;
    cout<<"\n\t\t\t\t\t\t1.CHECK STATUS"<<endl;
    cout<<"\t\t\t\t\t\t2.MAKE PAYMENT"<<endl;
    cout<<"\t\t\t\t\t\t3.UPDATE DETAILS"<<endl;
    cout<<"\t\t\t\t\t\t4.ADD NEW ACCOUT"<<endl;
    cout<<"\t\t\t\t\t\t5.DELETE ACCOUNT"<<endl;
}

int main(){
    main_menu();
    system("pause");
    return 0;
}