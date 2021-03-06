#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
#include <assert.h>
#include <vector>
#include <random>

// Potentiel
float potentiel(std::vector<float> coords);

// Gradient
std::vector<float> gradient(std::vector<float> coords);

// Constantes
const float dt=0.1;
const float T= 0.5;
const float kb = 1;

std::vector<float> operator+(std::vector<float> vec1,std::vector<float> vec2);
std::vector<float> operator-(std::vector<float> vec1,std::vector<float> vec2);
std::vector<float> operator*(float coef,std::vector<float> vec);



//Trajectoire
class Trajectoire
{
    std::vector<float> position_initiale;
    std::vector<std::vector<float> > list;
public:
    Trajectoire(std::vector<float> position){position_initiale = position;
                                            list.push_back(position);}
    int get_size(){return list.size();}
    std::vector<float> position(int i){return list[i];}
    void actualise();
    void simule(int N);
    void afficher();
};

#endif // TRAJECTOIRE_H
