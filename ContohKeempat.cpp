#include <iostream>
using namespace std;

int main()
{
    int nilaimatematika;
    int nilaifisika;
    int nilaiRerata;
    string status;

    cout << "Masukan nilai matematika: ";
    cin >> nilaimatematika;

    cout << "Masukan nilai fisika: ";
    cin >> nilaifisika;

    nilaiRerata = (nilaimatematika + nilaifisika) / 2;

    if (nilaiRerata > 60 || nilaimatematika > 70) {
        status = "Selamat anda lulus" ;
    } else {
        status = "Maaf, Anda tidak lulus." ;
    }
    cout << "Status adalah " << status << endl;

    return 0;
}