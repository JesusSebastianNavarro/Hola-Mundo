#pragma once
#include <Alimento.hpp>
class Mascota
{
private:
    int vida;
public:
    Mascota() {
        this->vida = 0;
    }
    ~Mascota() {}

    void Comer(Alimento alimento)
    {
        vida += alimento.ExtraerEnergia();
    }

    void Jugar()
    {
        this->vida -= 2;
    }

    int LeerVida()
    {
        return this->vida;
    }
};