#include "Cell.h"

string Cell:: generateSerialN()
{
    char valid[] = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm1234567890";
    char rand_array[16];
    string temp;

    for(int i=0;i<16;i++)
    {
        rand_array[i]= valid[rand()%16];
        temp = temp + rand_array[i];
    }
    return temp;
}
Cell::Cell():Produttore("NONE"),Batteria(0),minchiamate(0),nsms(0)
{
    cout<<"Default constructor \n";
   Serial_Number=generateSerialN();
}

Cell::Cell(string P, int B, int m, int n):Produttore(P),Batteria(B),minchiamate(m),nsms(n)
{
    cout<<"Parameter constructor \n";
}

void Cell:: chiamata(int durata){

    while (getMchia() < 0)
    {
        cout << "Saldo insufficiente.. Vuoi ricaricare? y/n";
        char deci;
        cin >> deci;
        if (deci == 'y')
        {
            ricarica(0);
        }
    }
    int temp;

    if (durata / 2 == 0)
    {
        temp = getBatteria() - durata / 2;
    }
    else
    {
        durata++;
        temp = getBatteria() - durata / 2;
    }
    if (temp >= 1)
    {
        Batteria = temp;
    }
    else
    {
        Batteria = 0;
        cout << " Cellulare scarico \n";
    }
     
        
}

void Cell::sendsms()
{
    while (nsms <= 0)
    {
        cout << "Saldo insufficiente.. Vuoi ricaricare? y/n";
        char deci;
        cin >> deci;
        if (deci == 'y')
        {
            ricarica(1);
        }
    }
    nsms--;
}

void Cell::ricarica(bool type)
{
    if (!type)
    {
        int imp;
        cout << " Prezzo: 1$ = 10 minuti, quanto soldi vuoi caricare? \n";
        cin >> imp;
        cout << " Vuoi caricare " << imp << " $, quindi avrai" << getMchia() + imp * 10 << " minuti, confermi? y/n \n";
        setMchia(getMchia() + imp * 10);
    }
    else
    {
        int imp;
        cout << " Prezzo: 1$ = 10 messaggi, quanto soldi vuoi caricare? \n";
        cin >> imp;
        cout << " Vuoi caricare " << imp << " $, quindi avrai" << getNsms() + imp * 10 << " messaggi, confermi? y/n \n";
        setNsms(getNsms() + imp * 10);
    }
}

void Cell::print()
{
    cout << "Telefono prodotto da " << getProduttore() << ", numero seriale: " << getSerialN() << ", batteria al " << getBatteria() << "%, sms disponibili: " << getNsms() << ", minuti chiamate disponibili: " << getMchia() << "\n";
  
}


// get 
int Cell :: getBatteria()
{
    return Batteria;
}

string Cell:: getProduttore()
{
return Produttore;
}


string Cell:: getSerialN()
{
    return Serial_Number;
}

int Cell:: getMchia()
{
    return minchiamate;
}

int Cell:: getNsms()
{
    return nsms;
}
//set

void Cell:: setBatteria(int b){
    Batteria=b;
}
void Cell:: setMchia(int m)
{
    minchiamate=m;
}
void Cell:: setNsms(int n)
{
    nsms=n;
}
void Cell:: setProduttore(string p)
{
    Produttore=p;
}

