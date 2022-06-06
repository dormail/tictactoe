/**
 * @file tictactoe.c
 * @author Matthias Maile (matthias.maile@pm.me)
 * @brief
 * @version 0.1
 * @date 2022-06-06
 *
 * @copyright Copyright (c) 2022
 *
 */

#include "tictactoe.h"
#include <stdio.h>

/**
 * @brief 
 * 
 * @param game_state 
 * @param player 
 * @param position 
 * @return int -1 if field already used or invalid position, else 0
 */
int mark_field(int game_state[], unsigned int const player, unsigned int const position)
{
  if (position < 0 || position > 8)
    return -1;
  if(game_state[position] != 0)
    return -1;
  game_state[position] = player;
}

/**
 * @brief 
 * 
 * @param game_state 
 * @param player 
 * @return int -10 bad user input
 */
int move(int game_state[], unsigned int const player)
{
  char input = getchar();
  int field = input - '0';
  --field; // arrays are 0 indexed but not for the player
  
  while ((getchar()) != '\n');

  if (field < 0 || field > 8)
    return -10;

  return mark_field(game_state, player, field);
}

void print_field(int const game_state[])
{
  printf("\n");
  printf("%c | %c | %c\n",
         fieldtochar_default(game_state[0]),
         fieldtochar_default(game_state[1]),
         fieldtochar_default(game_state[2]));
  printf("--+---+--\n");
  printf("%c | %c | %c\n",
         fieldtochar_default(game_state[3]),
         fieldtochar_default(game_state[4]),
         fieldtochar_default(game_state[5]));
  printf("--+---+--\n");
  printf("%c | %c | %c\n",
         fieldtochar_default(game_state[6]),
         fieldtochar_default(game_state[7]),
         fieldtochar_default(game_state[8]));
  printf("\n");
}

char fieldtochar(int const field_state, char const player1, char const player2)
{
  if (field_state == 1)
    return player1;
  if (field_state == 2)
    return player2;

  return ' ';
}

char fieldtochar_default(int const field_state)
{
  return fieldtochar(field_state, 'x', 'o');
}