#ifndef PLASZCZAK_H_INCLUDED
#define PLASZCZAK_H_INCLUDED

#include <iostream>

using namespace std;

class Plaszczak{
    char wyglad;
    string imie;
    int posX;
    int posY;
public:
    Plaszczak(char='?', string = "brak", int = 1, int = 1);
    virtual ~Plaszczak();
    int getPosX() const;
    int getPosY() const;
    void setPosX(int x);
    void setPosY(int x);
    char getWyglad();
};

#endif // PLASZCZAK_H_INCLUDED
