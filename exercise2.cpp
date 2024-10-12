#include<iostream>
using namespace std;
int main(){
    int day[2],month[2],year[2];
    for(int i=0;i<2;i++){
        cout<<"Input person "<<i+1 <<" Day of birth:";cin>>day[i];
        cout<<"Input person "<<i+1 <<" Month of birth:";cin>>month[i];
        cout<<"Input person "<<i+1 <<" Year of birth:";cin>>year[i];
    }
    if(year[0]<year[1]){
        cout<<"The first person is youngest.";
    }else if(month[0]<month[1]){
        cout<<"The first person is youngest.";
    }else if (day[0]<day[1]){
        cout<<"The first person is youngest.";
    }else{
        cout<<"The secound person is youngest.";
    }
}
