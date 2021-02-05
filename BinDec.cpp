#include<iostream>
#include<conio.h>
#include<vector>
#include<math.h>
using namespace std;


void DecToBin(int dec){
    vector<int> x;

    while(dec!=0){
        x.push_back(dec%2);
        dec/=2;
    }
    for(int i=x.size()-1;i>-1;i--){
        cout<<x[i];
    }
}
void BinToDec(int bin){
    int i=0,x=0;
    while(bin>0){
        x+=bin%10*pow(2,i);
        bin/=10;
        i++;
    }
cout<<x;

}
bool CheckBin(int bin){
while(bin){
    if((bin%10)>1)
        return false;
    bin/=10;
}
return true;
}

int main(){
int choose,numb,reset;
bool cond;
while(true){
    cout<<"1.Decimal to Binary"<<endl<<"2.Binary to Decimal"<<endl<<"3.Exit"<<endl;
    choose = getch();
    switch(choose){
        case 49:
            cout<<"Dec to Bin"<<endl;
            do{
                cout<<"Enter number: ";
                cin>>numb;
                cond = cin.fail();
                cin.clear();
                cin.ignore(INT_MAX,'\n');
            }while(cond);
            cout<<numb<<"->";
            DecToBin(numb);
            cout<<endl;
            cout<<"Press any key";
            reset=getch();
            system("CLS");
            break;

        case 50:
            cout<<"Bin to Dec"<<endl;
            do{
                    do{
                    cout<<"Enter number: ";
                    cin>>numb;
                    cond = cin.fail();
                    cin.clear();
                    cin.ignore(INT_MAX,'\n');
                    }while(cond);
            }while(CheckBin(numb)==false);
            cout<<numb<<"->";
            BinToDec(numb);
            cout<<endl;
            cout<<"Press any key";
            reset=getch();
            system("CLS");
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
