#include <iostream>
using namespace std;

int main(){
    string status;
    int nBILA, nBILB;
    srand(time(0));

    nBILA = rand() % 10;
    nBILB = rand() % 10;

    cout << "Tampilkan bilangan A = " << nBILA << endl;
    cout << "Tampilkan bilangan B = " << nBILB << endl;

    if (nBILA == nBILB){
        status = "nilai A dan nilai B sama besar";
    }
    else if (nBILA > nBILB){
        status = "Bilangan A lebih besar daripada bilangan B";
    }
    else {
        status = "Bilangan B lebih besar daripada bilangan A";
    }

    cout << "Tampilkan status =" << status << endl;

    return 0;
    
}