#include <iostream>

using namespace std;

bool seqFibonacci(int n) {
    int a = 0, b = 1, c = 0;

    // Constroi a sequencia de fibonacci até exceder ou coincidir com o numero
    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }

    // Verifica se o numero inserido é igual ao numero gerado
    return (c == n);
}

int main() {
    int n;

    cout << "Digite o número: ";
    cin >> n;

    if (seqFibonacci(n))
        cout << n << " Pertence a Sequência de Fibonacci." << endl;
    else
        cout << n << " Não pertecence a Sequência Fibonacci." << endl;

    return 0;
}