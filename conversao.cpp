#include <iostream>
#include <math.h>
using namespace std;
int main(){
    cout<<"----Bin�rio----"<<endl;
    int bin;
int dec = 0;
cout<<"Entre com um n�mero bin�rio:"<<endl;
cin>>bin;
for(int i=0; bin > 0; i++){
    dec = dec + pow(2,i)*(bin%10);
    bin=bin/10;
}
cout<<"O n�mero em decimal �: "<<dec;
cout<<endl;
cout<<"----Hexadecimal----"<<endl;
int valor;

int deci=0;
cout<<"Entre com um n�mero hexadecimal:"<<endl;
cin>>valor;
for(int i=0; valor>0; i++){
    deci = deci + pow(10,i)*(valor%16);
    valor=valor/16;
}
cout<<"Valor em decimal:"<<deci<<endl;
cout<<endl;
int oct;
int decim=0;
cout<<"Entre com um n�mero octal:"<<endl;
cin>>oct;
for(int i=0; oct>0; i++){
    decim=decim + pow(10, i)*(oct%8);
    oct=oct/8;
}
cout<<"N�mero em decimal �:"<<decim<<endl;
return 0;
}
