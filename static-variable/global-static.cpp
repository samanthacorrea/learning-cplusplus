//
// Created by samantha on 17/12/2020.
//

#include <iostream>

// estando declarada de forma global, essa variável pode ser acessada de qualquer função
static int x = 0;
void soma();

int main() {
    soma();
    soma();
    soma();
    soma();

    return 0;
}

/*
 * As variáveis local static não podem ser acessadas de fora de sua função, mas não é definida necessariamente como uma
 * variável local. O compilador cria um armazenamento permanente para essa variável. A variável local static não pode
 * ser acessada de qualquer função.
 * Esse tipo de variável proporciona ao programador criar funções que dependem de um valor que não pode ser zerado. Isso
 * quer dizer que o valor da variável x não vai ser reiniciado toda vez que a função soma for chamada. O valor x vai
 * atualizar o valor toda vez que a função for chamada.
 */
void soma() {
    x = x + 1;
    std::cout << x << "\n";
}