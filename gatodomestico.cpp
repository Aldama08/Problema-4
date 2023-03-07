
#include <iostream>
#include "GatoDomestico.h"
GatoDomestico::GatoDomestico() : anio(0),dieta(""),lugar(""),raza("")

{

}

GatoDomestico::GatoDomestico(GatoDomestico& g)
{
    anio = g.anio;
    dieta = g.dieta;
    lugar = g.lugar;
    raza = g.raza;
}

void GatoDomestico::setAnio(const int& g)
{
    anio = g;
}

void GatoDomestico::setDieta(const std::string& g)
{
    dieta = g;
}

void GatoDomestico::setLugar(const std::string& g)
{
    lugar = g;
}

void GatoDomestico::setRaza(const std::string& g)
{
    raza = g;
}

int GatoDomestico::getAnio() const
{
  return anio;
}

std::string GatoDomestico::getDieta() const
{
  return dieta;
}

std::string GatoDomestico::getLugar() const
{
  return lugar;
}

std::string GatoDomestico::getRaza() const
{
  return raza;
}
