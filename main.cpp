#include <iostream>
#include <string>
using namespace std;

string ucusGuvenligiKontrol(string droneIsmi, int yuk, int hiz, int yukseklik) {
    int harcananpil = (hiz / 10) * 5;
    int pil = 100 - harcananpil;
    if (pil < 0) pil = 0;

    // Ekrana tüm değerleri yazdır
    cout << "Drone: " << droneIsmi << endl;
    cout << "Pil Seviyesi: " << pil << endl;
    cout << "Yük: " << yuk << endl;
    cout << "Hız: " << hiz << endl;
    cout << "Yükseklik: " << yukseklik << endl;
    if (hiz > 10) {
        cout << "Uyarı: Hız sınırı aşıldı!" << endl;
    }

    if (yuk > 80) {
        return "Ağır yük";
    }
    if (pil < 30) {
        return "Pil seviyesi düşük";
    }
    if (yukseklik < 50) {
        return "Radar dışı";
    }
    if (hiz > 10) {
        return "Hız sınırı aşılmış";
    }
    return "Uçuş güvenli!";
}

int main() {
    cout << ucusGuvenligiKontrol("drone1", 85, 11, 50) << endl << endl;   
    cout << ucusGuvenligiKontrol("drone2", 50, 10, 3) << endl << endl;    
    cout << ucusGuvenligiKontrol("drone3", 20, 15, 40) << endl << endl;   
    return 0;
}
