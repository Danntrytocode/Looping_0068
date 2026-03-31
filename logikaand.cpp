#include <iostream>
using namespace std;

int main(){
    float nilB,nilM,rerata;
    string status;

    cout<<"Masukkan Nilai Bahasa Iggris =";
    cin>> nilB;
    cout<<"Masukkan Nilai Matematika =";
    cin>> nilM;

    rerata = (nilB+nilM)/2;

    //Menggunakan "&&"
    if ((rerata >= 60) && (nilM >= 70))
        status = "LULUS";
    else
        status = "TIDAK LULUS";
    
    cout<<"Status Kelulusan ="<<status<<" ,dengan nilai rata-rata ="<<rerata<< endl;
}