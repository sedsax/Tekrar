#include <iostream>
#include <cstring>
using namespace std;
//sınavın sağlamasını yapalım
int x;
void fonksiyon1(){
  int x=12;
}
void fonksiyon2(){
   x=16;
}

int main() {
  x=14;
  fonksiyon1();
  cout<<x<<endl;

  cout<<(3-2)*5-2/4<<endl;
  cout<<9-(2+1)/4+2<<endl;

  int a=5;
  int b=a++;
  int c=++a*b--;
  cout<<a<<":"<<b<<":"<<c<<endl;

  char str1[15]="Deneyap";
  char str2[15]="Turkiye";
  char str3[15];
  int len;
  strcpy(str3, str1);
  strcat(str3,str2);
  len=strlen(str3);
  cout<<len<<endl;

  int dizi1[6]={8,2,7,1,9,6};
  int dizi2[6]={0};
  int i, j=0, k=5;
  for(i=0; i<6; i++){
    if(dizi1[i]%2==1){
      dizi2[j]=dizi1[i];
      j++;
    }
    else{
      dizi2[k]=dizi1[i];
      k--;
    }
  }
  for(i=0; i<6; i++){
    cout<<dizi2[i]<<" " ;
  }
  cout<<endl<<"------------------------------------"<<endl;

  cout<<5/2<<endl;
  cout<<8-1.3<<endl;
  cout<<8-1.7<<endl;
  cout<<(8-1.3)*2<<endl;
  cout<<(8-1.7)/2<<endl;
  cout<<1/2<<endl;
  cout<<1%2<<endl; // 1 in 2 ye bölümünden kalan 1 dir.

  return 0;
	
}