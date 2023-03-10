#ifndef TIME_HPP
#define TIME_HPP
#include <iostream>
#include <sstream>
#include <vector>
#include <typeinfo>
#include "Jogador.hpp"
#include "JogadorGoleiro.hpp"
#include "JogadorDefesa.hpp"
#include "JogadorAtacante.hpp"

class Time : public Jogador{
    private:
        std::string nome;
        std::vector <Jogador*> jogador;
        int numJog{0};
        int vitorias{0};
        int derrotas{0};
        int empates{0};
    
    public:
        Time(std::string nome);
        std::string getNome();
        void setNome(std::string nome);
        std::string getResultados();
        void printJogadores();
        void somaVitorias();
        void somaDerrotas();
        void somaEmpates();
        void insJogadores(Jogador *jog);
        std::vector<Jogador*> getJogadores();
        void setVitorias(int vitorias);
        void setEmpates(int empates);
        void setDerrotas(int derrotas);
        int getVitorias();
        int getEmpates();
        int getDerrotas();

};

#endif // TIME_HPP