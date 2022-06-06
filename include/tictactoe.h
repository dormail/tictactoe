/**
 * @file tictactoe.h
 * @author Matthias Maile (matthias.maile@pm.me)
 * @brief 
 * @version 0.1
 * @date 2022-06-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef TICTACTOE_H
#define TICTACTOE_H

int mark_field(int game_state[], unsigned int const player, unsigned int const position);
int move(int game_state[], unsigned int const player);

void print_field(int const game_state[]);

char fieldtochar(int const field_state, char const player1, char const player2);
char fieldtochar_default(int const field_state);

#endif