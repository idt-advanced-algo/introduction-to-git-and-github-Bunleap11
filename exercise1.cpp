#include<iostream>
using namespace std;
int main(){
    int num,rangMin,rangeMax;
    cout<<"Input Number:";cin>>num;
    cout<<"Input Minimum:";cin>>rangMin;
    cout<<"Input Maximum:";cin>>rangeMax;
    if(num>=rangMin && num<=rangeMax){
        cout<<"Inside";
    }else{
        cout<<"Outside";
    }
}