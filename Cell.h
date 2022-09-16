#ifndef__Cell.h__
#define __Cell.h__
#include <iostream>
using namespace std;
class Cell{
    private:
        string Produttore;
        int Batteria;
        string Serial_Number;
        int minchiamate;
        int nsms;
        int saldo;
        void setNsms();
        void setMchia();
    public:
        Cell();
        Cell(string P, int Batteria, int m, int n);
        string generateSerialN();
        int getBatteria();
        void setBatteria();
        string getProduttore();
        void setProduttore();
        string getSerialN();
        int getNsms();
        int getMchia();
        
        void Print();
};


#endif