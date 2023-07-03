#include <iostream>
using namespace std;

class MataKuliah {
private:
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;

public:
    MataKuliah() {
        presensi = 0;
        activity = 0;
        exercise = 0;
        tugasAkhir = 0;
    }

    virtual float hitungNilaiAkhir() { return 0; }
    virtual void cekKelulusan() { return 0; }
    virtual void input() { return 0; }

    void setPresensi(float nilai) {
        this->presensi = nilai;
        
    }

    float getPresensi() {
        return presensi;
    }

    void setActivity(float nilai) {
        this->activity = nilai;
        
    }

    float getActivity() {
        return activity;
    }

    void setExercise(float nilai){
        this-> exercise = nilai;
        

    }

    float getExercise() {
        return exercise;
    }

    void setTugasAkhir(float nilai) {
        this->tugasAkhir = nilai;
        
    }

    float getTugasAkhir() {
        return tugasAkhir;  
    }

};

class Pemrograman : public MataKuliah {
public:
    void setPresensi(int pPresensi) :
        MataKuliah(pPresensi);
    {
        cout << " Masukkan Nilai Presensi" << endl; 
    }
       
};

int main()
{
    
}

