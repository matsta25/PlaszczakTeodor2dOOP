#ifndef PLANETA_H_INCLUDED
#define PLANETA_H_INCLUDED

#include "plaszczak.h"

class Planeta{
    int szer;
    int wys;
    Plaszczak* postac;
public:
    Planeta(int,int,Plaszczak*);
    virtual ~Planeta();
    friend ostream& operator<<(ostream&, const Planeta&);
    void wLewo();
    void wPrawo();
    void wGore();
    void wDol();
};

#endif // PLANETA_H_INCLUDED
