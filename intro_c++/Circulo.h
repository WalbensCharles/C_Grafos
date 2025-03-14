/*Após implementar a classe Circulo descrita nos slides anteriores, faça o
seguinte:
1. Adicione à classe Circulo métodos que calculam e imprimem o perímetro
do círculo. Teste estes métodos na parte principal do programa.
2. Na parte principal do programa, crie dois círculos e imprima as suas áreas */

#ifndef CIRCULO_H
#define CIRCULO_H
class Circulo{

public:
    Circulo(double raio);

    double calcula_area();

    void imprimir_area();
private:
    double raio_;

};

#endif