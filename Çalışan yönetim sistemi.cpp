
 /* Çalışanların adı, soyadı, departmanı, pozisyonu ve maaşı gibi bilgileri saklayan bir struct kullanarak çalışan yönetim sistemi oluşturabilirsiniz.
Bu sistem, yeni çalışan ekleyebilir, mevcut çalışanları listeler, çalışanların bilgilerini günceller ve istenilen kriterlere göre çalışanları arar.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Çalışan struct'ı
struct Calisan {
    string ad;
    string soyad;
    string departman;
    string pozisyon;
    double maas;
};

// Yeni çalışan ekleme fonksiyonu
void calisanEkle(vector<Calisan>& calisanlar, const Calisan& yeniCalisan) {
    calisanlar.push_back(yeniCalisan);
    cout << yeniCalisan.ad << " " << yeniCalisan.soyad << " isimli calisan sisteme eklendi." << endl;
}

// Çalışanları listeleme fonksiyonu
void calisanlariListele(const vector<Calisan>& calisanlar) {
    cout << "Sistemde kayitli olan calisanlar:" << endl;
    for (const auto& calisan : calisanlar) {
        cout << "Ad: " << calisan.ad << ", Soyad: " << calisan.soyad << ", Departman: " << calisan.departman << ", Pozisyon: " << calisan.pozisyon << ", Maas: " << calisan.maas << endl;
    }
}

int main() {
    vector<Calisan> calisanListesi;
    Calisan calisan1 = { "Ali", "Yilmaz", "Muhasebe", "Muhasebeci", 3500.0 };
    Calisan calisan2 = { "Ayse", "Demir", "IT", "Yazilim Uzmani", 5000.0 };

    // Çalışanları sisteme ekleyelim
    calisanEkle(calisanListesi, calisan1);
    calisanEkle(calisanListesi, calisan2);

    // Çalışanları listelemek için
    calisanlariListele(calisanListesi);

    return 0;
}
