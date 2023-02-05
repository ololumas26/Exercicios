#include <iostream>
#include <ctime>

using namespace std;

void  Menu();
double Soma(double n1, double n2);
double Subtracao(double nu1, double nu2);
double Multiplicacao (double num1, double num2);
double Divisao(double nume1,double nume2);
void Tabuada(int valor);
void Decrescente(int numero);
void Crescente(int numero);
void Forca();
void Pedra_Papel_Tesoura();
void Forca_();


int main()
{
    int opcao;
    double valor1,valor2,res;
    char palavra[30],secreta[30];

    Menu();
    cin >> opcao;

    switch(opcao){

    case 1:
        system("cls");
        cout << "------------Calculadora-----------\n";
        cout << "[1] - Soma\n";
        cout << "[2] - Subtracao\n";
        cout << "[3] - Multiplicacao\n";
        cout << "[4] - Divisao\n";
        cout << "Que operacao deseja realizar?\n";
        cin >> opcao;

        if (opcao == 1){
            system("cls");
            cout << "-----SOMA-----\n";
            cout << "Escreva o primeiro valor:\n";
            cin >> valor1;
            cout << "O segundo valor:\n";
            cin >> valor2;
            res = Soma(valor1,valor2);
            cout << "Resultado: " << valor1 << " + " << valor2 << " e = " << res <<endl;
        }
        else if (opcao == 2){
            system("cls");
            cout << "------Subtracao-----\n";
            cout << "Escreva o primeiro valor\n";
            cin >> valor1;
            cout << "Escreva o segundo valor\n";
            cin >> valor2;
            res = Subtracao(valor1,valor2);
            cout << "Resultado: " << valor1 << " - " << valor2 << " e = " << res <<endl;

        }
         else if (opcao == 3){
            system("cls");
            cout << "------Multiplicacao-----\n";
            cout << "Escreva o primeiro valor\n";
            cin >> valor1;
            cout << "Escreva o segundo valor\n";
            cin >> valor2;
            res = Multiplicacao(valor1,valor2);
            cout << "Resultado: " << valor1 << " X " << valor2 << " e = " << res <<endl;

        }
        else if (opcao == 4){
            system("cls");
            cout << "------Multiplicacao-----\n";
            cout << "Escreva o primeiro valor\n";
            cin >> valor1;
            cout << "Escreva o segundo valor\n";
            cin >> valor2;
            res = Divisao(valor1,valor2);
            cout << "Resultado: " << valor1 << " / " << valor2 << " e = " << res <<endl;
        }
        break;

    case 2:
        system("cls");
        cout << "-----Tabuada-----\n";
        cout << "Deseja ver a tabuada de que numero?\n";
        cin >> valor1;
        Tabuada(valor1);
        break;

    case 3:
        system("cls");
        cout << "-----Contagem decrescente----\n";
        cout << "Deseja fazer a contagem decrescente de que numero\n";
        cin >> valor1;
        Decrescente(valor1);
        break;

    case 4:
        system("cls");
        cout << "-------Contagem Crescente------\n";
        cout << "Deseja fazer a contagem crescente de que numero\n";
        cin >> valor1;
        Crescente(valor1);
        break;

    case 5:
        Forca();
        break;

    case 6:
        Pedra_Papel_Tesoura();
        break;

    default:
        cout << "Opcao fora do menu\n";
        break;


    }
    return 0;
}


void Menu(){

    cout << "--------------------------------------\n";
    cout << "\tMENU EXERCICIOS\n";
    cout << "--------------------------------------\n";
    cout << "[1] - Calculadora\n";
    cout << "[2] - Tabuada\n";
    cout << "[3] - Contagem decrescente\n";
    cout << "[4] - Contagem Crescente\n";
    cout << "[5] - Jogo da forca\n";
    cout << "[6] - Pedra Papel Tesoura\n";
    cout << "--------------------------------------\n";
    cout << "[0] - Sair\n";
    cout << "--------------------------------------\n";
    cout << "Escolha uma opcao\n";

}


double Soma(double n1, double n2){

    double resultado = n1 + n2;

    return resultado;
}

double Subtracao (double nu1, double nu2){

    double resultado = nu1 - nu2;

    return resultado;
}

double Multiplicacao (double num1, double num2){

    double resultado = num1 * num2;

    return resultado;
}
double Divisao(double nume1, double nume2){

    return nume1 / nume2;
}

void Tabuada(int valor){
    int res;

    cout << "Tabuada do numero " << valor <<endl;
    for (int i = 1; i <= 12; i++){

        res = valor * i;
        cout << valor << " x " << i << " = " << res << endl;
    }

}

void Decrescente(int numero){

    cout << "Contagem...\n";
    while (numero >= 0){
        cout << numero << " ";
        numero--;
    }
    cout << endl;
}

void Crescente(int numero){
    int n = 0;

    cout << "Contagem...\n";
    while (numero >= n){

        cout << n << " ";
        n++;
    }
    cout << endl;
}

void Forca(){

    int tente = 6;
    char palavra[30];
    char advinhou[30];
    int tamanho = 0, i = 0, acerto = 0;
    char letra;
    string nome;
    bool jogo = false, jogador = false;

    system("cls");
    cout << "------------Jogo da Forca------------\n";
    cout << "Quem esta a jogar?\n";
    cin >> nome;
    cout << "Escreva a palavra secreta [" << nome << "]" <<endl;
    cin >> palavra;

    while (palavra[i] != '\0'){
        i++;
        tamanho++;
    }
    advinhou[tamanho];

    for (int i = 0; i < tamanho; i++){
        advinhou[i] = '*';
    }

    while (jogo == false){

        system("cls");
        Forca_();
        cout << "Tentativas: "<< tente << endl;
        cout << "Jogador: " << nome <<endl;
        cout << "Acertos: " << acerto << endl;
        cout << "\n";
        for (int i = 0; i < tamanho; i++){
            cout << advinhou[i] << " ";
        }

        cout << "\n";
        cout << "Escreva uma letra " << nome <<endl;;
        cin >> letra;

        for (int i = 0; i < tamanho; i++){

            if (letra == palavra[i]){
                advinhou[i] = letra;
                acerto+=1;
                jogador = true;
            }
        }

        if (!jogador){
            tente--;
        }

        if (acerto == tamanho){

            cout << "A palavra secreta e: " << " ";
            for (int i = 0; i < tamanho; i++){
                cout << advinhou[i] << " ";
            }
            cout << "\n";
            cout << "Parabens voce Ganhou :)\n";
            jogo = true;
        }
        else if (tente == 0){
            cout << "A palavra secreta e: " << " ";
            for (int i = 0; i < tamanho; i++){
                cout << advinhou[i] << " ";
            }
            cout << "\n";
            cout << "Perdeu ._.\n";
            jogo = true;
        }

    }
}

void Pedra_Papel_Tesoura(){

    int computador,jogador;
    srand(time(0));
    computador = 1 + rand()% 3;
    cout << "-------------------------------------\n";
    cout << "\t*Pedra - Papel - Tesoura*\n";
    cout << "-------------------------------------\n";
    cout << "[1] - Pedra\n";
    cout << "[2] - Papel\n";
    cout << "[3] - Tesoura\n";
    cout << "O que vai jogar\n";
    cin >> jogador;

    if (computador == jogador){
        cout << "EMPATE\n";
    }
    else if (computador == 1 && jogador == 2){
        cout << "Jogador: Papel\n";
        cout << "Computador: Pedra\n";
        cout << "Resultado: Voce ganhou\n";
    }
    else if (computador == 2 && jogador == 3){
        cout << "Jogador: Tesoura\n";
        cout << "Computador: Papel\n";
        cout << "Resultado: Voce ganhou\n";
    }
    else if (computador == 3 && jogador == 1){
        cout << "Jogador: Pedra\n";
        cout << "Computador: Tesoura\n";
        cout << "Resultado: Voce ganhou\n";
    }
    else if (jogador == 1 && computador == 2){
        cout << "Jogador: Pedra\n";
        cout << "Computador: Papel\n";
        cout << "Resultado: Computador ganhou\n";
    }
    else if (jogador == 2 && computador == 3){
        cout << "Jogador: Papel\n";
        cout << "Computador: Tesoura\n";
        cout << "Resultado: Computador ganhou\n";
    }
    else if (jogador == 3 && computador == 1){
        cout << "Jogador: Tesoura\n";
        cout << "Computador: Papel\n";
        cout << "Resultado: Computador ganhou\n";
    }
    cout << computador << endl;


}

void Forca_(){

    cout << "----Forca----\n";
    cout << "\t----------------\n";
    cout << "\t|            |\n";
    cout << "\t|          ----\n";
    cout << "\t|          |. |\n";
    cout << "\t|          ----\n";
    cout << "\t|\n";


}



