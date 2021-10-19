#include <iostream>
#include <math.h>
using namespace std;
int main(){
    cout<<"----Binário----"<<endl;
    int bin;
int dec = 0;
cout<<"Entre com um número binário:"<<endl;
cin>>bin;
for(int i=0; bin > 0; i++){
    dec = dec + pow(2,i)*(bin%10);
    bin=bin/10;
}
cout<<"O número em decimal é: "<<dec;
cout<<endl;
cout<<"----Hexadecimal----"<<endl;
int valor;

int deci=0;
cout<<"Entre com um número hexadecimal:"<<endl;
cin>>valor;
for(int i=0; valor>0; i++){
    deci = deci + pow(10,i)*(valor%16);
    valor=valor/16;
}
cout<<"Valor em decimal:"<<deci<<endl;
cout<<endl;
int oct;
int decim=0;
cout<<"Entre com um número octal:"<<endl;
cin>>oct;
for(int i=0; oct>0; i++){
    decim=decim + pow(10, i)*(oct%8);
    oct=oct/8;
}
cout<<"Número em decimal é:"<<decim<<endl;
return 0;
}
