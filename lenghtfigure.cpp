#include <iostream>

using namespace std;
int main()
{
    unsigned int n;
    int lungime=0;
    cout<<"Numarul este= ";cin>>n;cout<<endl;
    if(n<0){n=-n;}
    if(n==0){
        cout<<"1 bit";
    }
    else {
        while(n!=0){
            n=n>>1;
            lungime=lungime+1;
        }
    }
    cout<<lungime;
    return 0;
}
