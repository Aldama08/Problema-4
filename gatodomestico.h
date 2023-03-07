#ifndef GATODOMESTICO_H_INCLUDED
#define GATODOMESTICO_H_INCLUDED
#include <iostream>

class GatoDomestico
{
    private:
        int anio;
        std::string dieta,lugar,raza;

    public:
        GatoDomestico();
        GatoDomestico(GatoDomestico&);
        int getAnio() const;
        std::string getDieta() const;
        std::string getLugar() const;
        std::string getRaza() const;

        void setAnio(const int&);
        void setDieta(const std::string&);
        void setLugar(const std::string&);
        void setRaza(const std::string&);
};

#endif // GATODOMESTICO_H_INCLUDED
