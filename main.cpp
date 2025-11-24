
#include <iostream>
#include <string>
using namespace std;

string ucusGuvenligiKontrol(string droneIsmi, int pilSeviyesi, int yuk, int hiz, int yukseklik) {
    cout << "Drone: " << droneIsmi << endl;
    cout << "Pil Seviyesi: " << pilSeviyesi << endl;
    cout << "Yük: " << yuk << endl;
    cout << "Hız: " << hiz << endl;
    cout << "Yükseklik: " << yukseklik << endl;
    if (hiz > 10) {
        cout << " Hız sınırı aşıldı!" << endl;
    }

    if (yuk > 80) {
        return "Ağır yük";
    }
    if (pilSeviyesi < 30) {
        return "Pil seviyesi düşük";
    }
    if (yukseklik < 50) {
        return "Radar dışı";
    }
    if (hiz > 10) {
        return "Hız sınırı aşıldı";
    }
    return "Uçuş güvenli";
}

int main() {
    int pil1 = 60;
    int pil2 = 25;
    int pil3 = 55;

    cout << ucusGuvenligiKontrol("drone1", pil1, 85, 11, 50) << endl << endl;   
    cout << ucusGuvenligiKontrol("drone2", pil2, 50, 10, 3) << endl << endl;    
    cout << ucusGuvenligiKontrol("drone3", pil3, 20, 15, 40) << endl << endl;   
    return 0;
}