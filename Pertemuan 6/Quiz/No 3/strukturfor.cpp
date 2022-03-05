#include <iostream>

using namespace std;

int main(){

    int i, n, j;

    cout<<"masukkan nilai n : ";cin>>n;
    for(i=1; i<=n; i++){
        for(j=1; j<= i; j++){
            if(i&&j==1){
                cout<<"1";
            }else if(i&&j==2){
                cout<<"2";
            }else if(i&&j==3){
                cout<<"3";
            }else if(i&&j==4){
                cout<<"4";
            }else if(i&&j==5){
                cout<<"5";
            }else if(i&&j==6){
                cout<<"6";
            }else {
                cout<<"";
            }
        }
        cout<<endl;
    }
    return 0;
}
