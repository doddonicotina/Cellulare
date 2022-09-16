#include "Cell.h"

string::Cell generateSerialN()
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