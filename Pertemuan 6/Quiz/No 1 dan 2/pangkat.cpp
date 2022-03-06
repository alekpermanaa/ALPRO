#include <iostream>

using namespace std;

int main(){

    int i, bilangan, pencacah, pangkat;

    cout<<"masukkan bilangan : ";cin>>bilangan;
    cout<<"masukkan pencacah : ";cin>>pencacah;

    pangkat=bilangan;

    i=1;

    while(i< pencacah){
        pangkat = pangkat*bilangan;
        i++;
    }

    cout<<"hasil pangkat : " <<pangkat;

}
