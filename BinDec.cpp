#include<iostream>
#include<conio.h>
using namespace std;



int main(){
int choose,numb,reset;

while(true){
    cout<<"1.Decimal to Binary"<<endl<<"2.Binary to Decimal"<<endl<<"3.Exit"<<endl;
    choose = getch();
    switch(choose){
        case 49:
            cout<<"Dec to Bin"<<endl;
            cout<<"Enter number: ";
            cin>>numb;
            cout<<numb<<"->"<<endl;
            cout<<"Press any key";
            reset=getch();
            system("CLS");
            break;

        case 50:
            cout<<"Bin to Dec"<<endl;
            break;

        case 51:
            return 0;

        default:
            cout<<"Wrong choice"<<endl;
            break;
    }
}
return 0;
}
