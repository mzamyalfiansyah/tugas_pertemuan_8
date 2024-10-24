#include <iostream>
using namespace std;

struct kelahiran {
    int hari;
    int bulan;
    int tahun;
};

bool validasiTanggal(int hari, int bulan) {
    if (bulan < 1 || bulan > 12) return false;
    if (hari < 1 || hari > 31) return false;

    if (bulan == 2) {
        return (hari <= 28);
    }
    if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
        return (hari <= 30);
    }
    return true;
}

string tentukanZodiak(int hari, int bulan) {
    if ((bulan == 12 && hari >= 22) || (bulan == 1 && hari <= 19)) {
        return "Capricorn";
    } else if ((bulan == 1 && hari >= 20) || (bulan == 2 && hari <= 18)) {
        return "Aquarius";
    } else if ((bulan == 2 && hari >= 19) || (bulan == 3 && hari <= 20)) {
        return "Pisces";
    } else if ((bulan == 3 && hari >= 21) || (bulan == 4 && hari <= 19)) {
        return "Aries";
    } else if ((bulan == 4 && hari >= 20) || (bulan == 5 && hari <= 20)) {
        return "Taurus";
    } else if ((bulan == 5 && hari >= 21) || (bulan == 6 && hari <= 20)) {
        return "Gemini";
    } else if ((bulan == 6 && hari >= 21) || (bulan == 7 && hari <= 22)) {
        return "Cancer";
    } else if ((bulan == 7 && hari >= 23) || (bulan == 8 && hari <= 22)) {
        return "Leo";
    } else if ((bulan == 8 && hari >= 23) || (bulan == 9 && hari <= 22)) {
        return "Virgo";
    } else if ((bulan == 9 && hari >= 23) || (bulan == 10 && hari <= 22)) {
        return "Libra";
    } else if ((bulan == 10 && hari >= 23) || (bulan == 11 && hari <= 21)) {
        return "Scorpio";
    } else {
        return "Sagittarius";
    }
}

int main() {
    kelahiran tgl;

    cout << "Masukkan Tanggal: ";
    cin >> tgl.hari;

    cout << "Masukkan Bulan: ";
    cin >> tgl.bulan;

    cout << "Masukkan tahun (contoh: [1997]): ";
    cin >> tgl.tahun;

    if (!validasiTanggal(tgl.hari, tgl.bulan)) {
        cout << "Tanggal tidak valid!" << endl;
        return 1;
    }

    string zodiak = tentukanZodiak(tgl.hari, tgl.bulan);
    cout << "Zodiak Anda: " << zodiak << endl;

    return 0;
}
