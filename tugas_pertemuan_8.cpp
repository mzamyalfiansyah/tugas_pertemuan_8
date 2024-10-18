#include<iostream>
using namespace std;



    struct kelahiran{
        int hari;
        int bulan;
        int tahun;
    };


int main(){

    kelahiran tgl;

    cout << "Masukkan Tanggal : ";
    cin >> tgl.hari;

    cout << "Masukkan Bulan : ";
    cin >> tgl.bulan;

    cout << "Masukkan tahun (contoh : [1997]) : ";
    cin >> tgl.tahun;


    if ((tgl.bulan == 12 && tgl.hari >= 22) || (tgl.bulan == 1 && tgl.hari <= 19)){
        cout << "Capricorn" << endl;
    }
    else if ((tgl.bulan == 1 && tgl.hari >= 20) || (tgl.bulan == 2 && tgl.hari <= 18)){
        cout << "Aquarius" << endl;
    }
    else if ((tgl.bulan == 2 && tgl.hari >= 19) || (tgl.bulan == 3 && tgl.hari <= 20)){
        cout << "Pisces" << endl;
    }
    else if ((tgl.bulan == 3 && tgl.hari >= 21) || (tgl.bulan == 4 && tgl.hari <= 19)){
        cout << "Aries" << endl;
    }
    else if ((tgl.bulan == 4 && tgl.hari >= 20) || (tgl.bulan == 5 && tgl.hari <= 20)){
        cout << "Taurus" <<endl;
    }
    else if ((tgl.bulan == 5 && tgl.hari >= 21) || (tgl.bulan == 6 && tgl.hari <= 20)){
        cout << "Gemini" << endl;
    }
    else if ((tgl.bulan == 6 && tgl.hari >= 21) || (tgl.bulan == 7 && tgl.hari <= 22)){
        cout << "Cancer" << endl;
    }
    else if ((tgl.bulan == 7 && tgl.hari >= 23) || (tgl.bulan == 8 && tgl.hari <= 22)){
        cout << "Leo" << endl;
    }
    else if ((tgl.bulan == 8 && tgl.hari >= 23) || (tgl.bulan == 9 && tgl.hari <= 22)){
        cout << "Virgo" << endl;
    }
    else if ((tgl.bulan == 9 && tgl.hari >= 23) || (tgl.bulan == 10 && tgl.hari <= 22)){
        cout << "Libra" << endl;
    }
    else if ((tgl.bulan == 10 && tgl.hari >= 23) || (tgl.bulan == 11 && tgl.hari <= 21)){
        cout << "Scorpio" << endl;
    }
    else{
        cout << "Sagittarius" << endl;
    }

    return 0;
}
