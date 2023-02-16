#include <iostream>

using namespace std;

class siswa{
    public:
    int nisn;
    string nama;
    float nilai;
    void dataMurid(){
        cout<<"Masukan NISN = ";cin>>nisn;
        cout<<"Masukan Nama = ";cin>>nama;
        cout<<"Masukan Nilai = ";cin>>nilai;
    }
    void keluarDataMurid(){
        cout<<"Nama = "<<nama<<endl;
        cout<<"NISN = "<<nisn<<endl;
        cout<<"Nilai = "<<nilai<<endl;
    }
};
class guru{
    public:
    int Id;
    string nama;
    string pelajaran;
    void dataGuru(){
        cout<<"Masukan Nama = ";cin>>nama;
        cout<<"Masukan ID = ";cin>>Id;
        cout<<"Mata Pelajaran = ";cin>>pelajaran;
    }
    void keluarDataGuru(){
        cout<<"Nama = "<<nama<<endl;
        cout<<"Id = "<<Id<<endl;
        cout<<"Pelajaran = "<<pelajaran<<endl;
    }
};
void pilihan(){
    int a;
    cout<<"Pilihan = ";cin >> a;
    if (a == 1){
        siswa orang;
        orang.dataMurid();
        orang.keluarDataMurid();
    } else if (a == 2){
        guru guru;
        guru.dataGuru();
        guru.keluarDataGuru();

    }
}
int main(int argc, char *argv[]){
    pilihan();

    return 0;
}