#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
        //Declaração de variáveis
        int valor, n100, n50, n10, n5;
        valor=n100=n50=n10=n5=0;
        //Execução
        cout << "Como dar o troco\n";
        cout << "Digite o valor em R$ :";
        cin >> valor;
        n100= valor/100;
        valor=valor%100;
        n50=valor/50;
        valor=valor%50;
        n10=valor/10;
        valor=valor%10;
        n5=valor/5;
        valor=valor%5;
        cout << "Voce dara "<< n100 << " notas de 100, " << n50 << " notas de 50, " << n10 << " notas de 10, " << n5 << " notas de 5 e " << valor << " notas de 1.";
       
       
        return 0;
}
