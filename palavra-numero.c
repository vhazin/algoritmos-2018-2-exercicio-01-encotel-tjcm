//
//  palavra-numero.c
//  
//
//  Created by Thiago Moraes on 10/08/2018.
//

#include <stdio.h>

int main(void){
    char expressao[31] = "";
    char telefone[31] = "";
    int i = 0;
    
    while(scanf("%s", expressao) != EOF){
        i = 0;
        while(expressao[i] != '\0'){
            if(expressao[i] == 'A' || expressao[i] == 'B' || expressao[i] == 'C'){
                telefone[i] = '2';
            }
            else if(expressao[i] == 'D' || expressao[i] == 'E' || expressao[i] == 'F'){
                telefone[i] = '3';
            }
            else if(expressao[i] == 'G' || expressao[i] == 'H' || expressao[i] == 'I'){
                telefone[i] = '4';
            }
            else if(expressao[i] == 'J' || expressao[i] == 'K' || expressao[i] == 'L'){
                telefone[i] = '5';
            }
            else if(expressao[i] == 'M' || expressao[i] == 'N' || expressao[i] == 'O'){
                telefone[i] = '6';
            }
            else if(expressao[i] == 'P' || expressao[i] == 'Q' || expressao[i] == 'R' || expressao[i] == 'S'){
                telefone[i] = '7';
            }
            else if(expressao[i] == 'T' || expressao[i] == 'U' || expressao[i] == 'V'){
                telefone[i] = '8';
            }
            else if(expressao[i] == 'W' || expressao[i] == 'X' || expressao[i] == 'Y' || expressao[i] == 'Z'){
                telefone[i] = '9';
            }
            else if(expressao[i] == '1' || expressao[i] == '0' || expressao[i] == '-'){
                telefone[i] = expressao[i];
            }
            i++;
        }
        printf("%s", telefone);
        
    }
    return 0;
    
}
