#include <exception>
#include <iostream>
#include<vector>
using namespace std;

int main (){
    vector<int> meuVetor(4);

    try{
        meuVetor.at(5) = 100;
    } catch(exception &e) {
        cerr << "Erro: " << e.what() << endl;
    }
}