# Cadastro de clientes — Programação 1 (C)

Aplicativo de terminal para cadastrar e consultar compradores e produtos, com opções de alteração/exclusão e persistência em arquivo texto.

## Arquivo-fonte
- `main.c`

## Compilação
Com GCC instalado: `gcc -std=c11 -Wall -Wextra -o cadastro main.c`. O fonte pode exigir correções para compiladores modernos: usa `fflush(stdin)`, não valida várias entradas e declara algumas variáveis sem inicialização explícita.

## Dados e segurança
O `clientes.dat` original foi deliberadamente excluído: continha nome e CPF identificáveis. A senha fixa original foi substituída por uma entrada explícita de modo demonstração; isso não implementa autenticação. Nunca usar dados reais nos exemplos. Verificar o menu e persistência antes de apresentar como versão funcional.

## Autoria
Projeto de Programação 1 apresentado por Felipe Lemos Fonseca. Eventuais créditos de equipe ainda precisam ser detalhados. Implementado em C.

