#include<iostream>
using namespace std;

void fonksiyon1(){
    cout<<"A"<<endl;
}

void fonksiyon2(int a){
    int kare=a*a;
    cout<<kare<<endl;
}

int fonksiyon3(){
    int b=27;
    return b;
}

int fonksiyon4(int x){
    int kup=x*x*x;
    return kup;
}
string fonksiyon5(string k){
    return k;
}
int main(){
    fonksiyon1();
    fonksiyon2(7);
    cout<<fonksiyon3()<<endl;
    cout<<fonksiyon4(5)<<endl;
    cout<<"isminiz: "<<fonksiyon5("seda")<<endl;

return 0;
}
