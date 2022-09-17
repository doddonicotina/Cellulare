#include <iostream>
#include <time.h>
#include "Cell.h"
using namespace std;

int main() {
    Cell iPhone11;
    iPhone11.print();
    Cell iPhone12("Apple",100,100,1000);
    iPhone12.print();
    iPhone12.chiamata(10);
    iPhone12.print();
    iPhone12.sendsms();
    iPhone12.chiamata(90);
    iPhone12.sendsms();
    for (int i=0;i<50;i++)
    {
        iPhone12.sendsms();
        iPhone12.print();
        iPhone12.chiamata(1);


    }
    iPhone12.print();

}