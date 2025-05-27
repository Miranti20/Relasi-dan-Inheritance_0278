#include IBU_H
#define IBU_H

clas ibu {
    public:
        string nama;
        vector<anak*> daftar_anak;

        ibu(string pNama): nama(pNama){
            cout << "Ibu \"" << nama << "\" ada\n";
        }

        ~ibu() {
            cout << "Ibu \"" << nama << "\" tidak ada\n";
        }
        void tambahAnak(anak*);
        void cetakAanak();
    };
    void ibu::tambahkanAnak(anak* pAnak) {
        daftar_anak.push_back(pAnak);
    }
    