/*
Feito por: Lucas Ruan
Iniciado em 16/04/2026
Finalizado em 24/04/2026
Um pequeno passo para o Sênior, um grande passo  para o Júnior
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <raylib.h>

int main(){
    
    InitWindow(405, 500, "Calculadora");

    int valor_atual = 0;
    int valor_salvo = 0;
    char operador = ' ';

    while(! WindowShouldClose()){
    
        Rectangle botao_divisao = {314, 102, 66, 48}; 
        Rectangle botao_clear = {29, 418, 66, 48};
        Rectangle botao0 = {124, 418, 66, 48};
        Rectangle botao_ponto = {219, 418, 66, 48};
        Rectangle botao_igual = {314, 418, 66, 48};
        Rectangle botao1 = {29, 342, 66, 48};
        Rectangle botao2 = {124, 342, 66, 48};
        Rectangle botao3 = {219, 342, 66, 48};
        Rectangle botao_mais = {314, 342, 66, 48};
        Rectangle botao4 = {29, 262, 66, 48};
        Rectangle botao5 = {124, 262, 66, 48};
        Rectangle botao6 = {219, 262, 66, 48};
        Rectangle botao_menos = {314, 262, 66, 48};
        Rectangle botao7 = {29, 182, 66, 48};
        Rectangle botao8 = {124, 182, 66, 48};
        Rectangle botao9 = {219, 182, 66, 48};
        Rectangle botao_vezes = {314, 182, 66, 48};        

        if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) == true){
            Vector2 posicao = GetMousePosition();
            
            if (CheckCollisionPointRec(posicao, botao0)){
                valor_atual = (valor_atual * 10) + 0;
            }
            else if (CheckCollisionPointRec(posicao, botao1)){
                valor_atual = (valor_atual * 10) + 1;
            }
            else if (CheckCollisionPointRec(posicao, botao2)){
                valor_atual = (valor_atual * 10) + 2;
            }
            else if (CheckCollisionPointRec(posicao, botao3)){
                valor_atual = (valor_atual * 10) + 3;
            }
            else if (CheckCollisionPointRec(posicao, botao4)){
                valor_atual = (valor_atual * 10) + 4;
            }
            else if (CheckCollisionPointRec(posicao, botao5)){
                valor_atual = (valor_atual * 10) + 5;
            }
            else if (CheckCollisionPointRec(posicao, botao6)){
                valor_atual = (valor_atual * 10) + 6;
            }
            else if (CheckCollisionPointRec(posicao, botao7)){
                valor_atual = (valor_atual * 10) + 7;
            }
            else if (CheckCollisionPointRec(posicao, botao8)){
                valor_atual = (valor_atual * 10) + 8;
            }
            else if (CheckCollisionPointRec(posicao, botao9)){
                valor_atual = (valor_atual * 10) + 9;
            }
            
            else if (CheckCollisionPointRec(posicao, botao_clear)){
                valor_atual = 0;
                valor_salvo = 0;
                operador = ' '; 
            }

            else if (CheckCollisionPointRec(posicao, botao_divisao)){
                valor_salvo = valor_atual;
                operador = '/';
                valor_atual = 0;
            }
            else if (CheckCollisionPointRec(posicao, botao_mais)){
                valor_salvo = valor_atual;
                operador = '+';
                valor_atual = 0;
            }        
            else if (CheckCollisionPointRec(posicao, botao_menos)){
                valor_salvo = valor_atual;
                operador = '-';
                valor_atual = 0;
            }
            else if (CheckCollisionPointRec(posicao, botao_vezes)){
                valor_salvo = valor_atual;
                operador = '*';
                valor_atual = 0;
            }
            else if (CheckCollisionPointRec(posicao, botao_igual)){
                
                switch(operador) {
                    case '+':
                        valor_atual = valor_salvo + valor_atual;
                        break;
                    case '-':
                        valor_atual = valor_salvo - valor_atual;
                        break;
                    case '*':
                        valor_atual = valor_salvo * valor_atual;
                        break;
                    case '/':
                        
                        if (valor_atual != 0) {
                            valor_atual = valor_salvo / valor_atual;
                        } else {
                            valor_atual = 0;
                        }
                        break;
                }
                operador = ' '; 
            }
        }    
            
        BeginDrawing();
        ClearBackground(BLACK);
  
        DrawRectangle(314, 102, 66, 48, DARKGRAY); // /
        DrawRectangle(29, 418, 66, 48, DARKGRAY); // C (clear limpar)
        DrawRectangle(124, 418, 66, 48, DARKGRAY); // 0
        DrawRectangle(219, 418, 66, 48, DARKGRAY); // .
        DrawRectangle(314, 418, 66, 48, DARKGRAY); // =
        DrawRectangle(29, 342, 66, 48, DARKGRAY); // 1
        DrawRectangle(124, 342, 66, 48, DARKGRAY); // 2
        DrawRectangle(219, 342, 66, 48, DARKGRAY); // 3
        DrawRectangle(314, 342, 66, 48, DARKGRAY); // +
        DrawRectangle(29, 262, 66, 48, DARKGRAY); // 4
        DrawRectangle(124, 262, 66, 48, DARKGRAY); // 5
        DrawRectangle(219, 262, 66, 48, DARKGRAY); // 6
        DrawRectangle(314, 262, 66, 48, DARKGRAY); // -
        DrawRectangle(29, 182, 66, 48, DARKGRAY); // 7
        DrawRectangle(124, 182, 66, 48, DARKGRAY); // 8
        DrawRectangle(219, 182, 66, 48, DARKGRAY); // 9
        DrawRectangle(314, 182, 66, 48, DARKGRAY); // x

        DrawText("/", 342, 110, 32, WHITE);
        DrawText("C", 52, 425, 32, WHITE); 
        DrawText("0", 149, 425, 32, WHITE);
        DrawText(".", 250, 425, 32, WHITE);
        DrawText("=", 340, 427, 32, WHITE);
        DrawText("1", 57, 350, 32, WHITE);
        DrawText("2", 149, 350, 32, WHITE);
        DrawText("3", 244, 352, 32, WHITE);    
        DrawText("+", 338, 353, 32, WHITE);
        DrawText("4", 54, 270, 32, WHITE);
        DrawText("5", 149, 270, 32, WHITE);
        DrawText("6", 244, 270, 32, WHITE); 
        DrawText("-", 340, 274, 32, WHITE);
        DrawText("7", 54, 190, 32, WHITE);
        DrawText("8", 149, 190, 32, WHITE);
        DrawText("9", 244, 190, 32, WHITE);
        DrawText("x", 339, 188, 32, WHITE);

        DrawText(TextFormat("%c", operador), 360, 20, 30, LIGHTGRAY);
        DrawText(TextFormat("%d", valor_atual), 28, 58, 48, WHITE);
       
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}
