#include<iostream>
using namespace std;

void fonksiyon1(){
    cout<<"void fonksiyon(){ cout<<.....; }";
    cout<<"Herhangi bir tipte deger dondurmedigim icin donus tipim void!"<<endl;
    cout<<"Parametre de almadigim icin main fonksiyonunda parantezimi bos bırakmayi unutma!"<<endl;
}

void fonksiyon2(int a){
    int kare=a*a;
    cout<<"void fonksiyon2(int a){ cout<<......; }";
    cout<<"Herhangi bir tipte deger dondurmedigim icin donus tipim void!"<<endl;
    cout<<"Parametre olarak int deger verdigimden main fonksiyonunda parantezime integer bir deger girmeyi unutma!"<<endl;
    cout<<kare<<endl;
}

int fonksiyon3(){
    int b=27;
    cout<<"int fonksiyon3(){ return b;}";
    cout<<"Donus tipim int oldugundan gondermek istedigin degeri return ile yazmayi unutma!"<<endl;
    cout<<"Parametre almadigim icin main fonksiyonunda parantezimi bos bırakmayi unutma!"<<endl;
    return b;
}

int fonksiyon4(int x){
    int kup=x*x*x;
    cout<<"int fonksiyon4(int x){ return kup;}";
    cout<<"Donus tipim int oldugundan gondermek istedigin degeri return ile yazmayi unutma!"<<endl;
    cout<<"Parametre olarak int deger verdigimden main fonksiyonunda parantezime integer bir deger girmeyi unutma!"<<endl;
    return kup;
}
string fonksiyon5(string k){
    cout<<"string fonksiyon5(string k){ return k;}";
    cout<<"Donus tipim string oldugundan gondermek istedigin degeri return ile yazmayi unutma!"<<endl;
    cout<<"Parametre olarak string bir deger verdigimden main fonksiyonunda parantezime cift tirnakla deger girmeyi unutma!"<<endl;
    cout<<"isminiz: ";
    return k;
}
int main(){
    //Lutfen fonksiyonların cagrilma sekillerine dikkat ediniz
    fonksiyon1();
    cout<<"---------------------------------------------------------------------------------------"<<endl;
    fonksiyon2(7);
    cout<<"---------------------------------------------------------------------------------------"<<endl;
    cout<<fonksiyon3()<<endl;
    cout<<"---------------------------------------------------------------------------------------"<<endl;
    cout<<fonksiyon4(5)<<endl;
    cout<<"---------------------------------------------------------------------------------------"<<endl;
    cout<<fonksiyon5("seda")<<endl;

return 0;
}
