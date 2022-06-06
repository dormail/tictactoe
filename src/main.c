/**
 * @file main.c
 * @author Matthias Maile (matthias.maile@pm.me)
 * @brief 
 * @version 0.1
 * @date 2022-06-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "../include/tictactoe.h"

int main()
{
  int game[9] = {0};
  unsigned int player = 1;
  
  while (1)
  {
    move(game, player);
    print_field(game);
    if (player == 1)
      player = 2;
    else 
      player = 1;
  }

  return 0;
}