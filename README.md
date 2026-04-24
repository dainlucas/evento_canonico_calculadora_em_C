# Calculadora em C com Raylib

## Objetivo do Projeto
Este modesto projeto foi feito com o objetivo de treinar e praticar conceitos da programação em C. Consiste em uma calculadora com interface gráfica, desenvolvida para exercitar o uso de variáveis, estruturas de controle, captura de eventos de mouse e a integração com bibliotecas externas.

## Dependências
Para compilar e rodar o projeto, é necessário:
* Um compilador C (como o GCC).
* A biblioteca gráfica **Raylib** devidamente instalada e configurada no seu ambiente.

## Como Compilar
Abra o seu terminal na pasta onde o arquivo do código fonte está localizado (por exemplo, `main.c`). Utilize o compilador vinculando as bibliotecas necessárias da Raylib. 

Um exemplo de comando padrão utilizando o GCC é:

```bash
gcc main.c -o calculadora -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
```

*Nota: As flags de compilação podem variar dependendo do seu sistema operacional (Windows, macOS ou Linux). Consulte a documentação da Raylib para os comandos exatos do seu sistema.*

## Como Executar
Após a compilação ser concluída sem erros, execute o arquivo gerado através do terminal:

* No Linux ou macOS:
```bash
./calculadora
```
* No Windows:
```cmd
calculadora.exe
```
