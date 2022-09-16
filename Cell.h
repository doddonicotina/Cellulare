#ifndef __CELL_H__
#define __CELL_H__
#include <iostream>
using namespace std;
class Cell{
    private:
        string Produttore;
        int Batteria;
        string Serial_Number;
        int minchiamate;
        int nsms;
        void setNsms(int n);
        void setMchia(int m);

    public:
        Cell();
        Cell(string P, int Batteria, int m, int n);

        string generateSerialN();

        int getBatteria();
        void setBatteria(int b);
        string getProduttore();
        void setProduttore(string p);
        string getSerialN();
        int getNsms();
        int getMchia();

        void chiamata(int durata);
        void sendsms();

        void print();

        void ricarica(bool type);
};


#endif



