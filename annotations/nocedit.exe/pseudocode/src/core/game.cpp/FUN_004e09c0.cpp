// Name: core_game.cpp_FUN_004e09c0
// Address: 004e09c0
// Address Range: [[004e09c0, 004e0a95]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e09c0()

#include "nocturne.h"

/* Signature: byte core_game.cpp_FUN_004e09c0(uint param_1) */

void core_game_cpp_FUN_004e09c0(void)

{
  int in_stack_00000004;
  
  if (DAT_02d831ec != 0) {
    if (DAT_02d831ec < 4) {
      if ((DAT_02d831ec != 2) ||
         (DAT_02d831f0 = ((float)*(int *)(in_stack_00000004 + 0x260) * (float)256) /
                         ((float)31457280 / (float)g_WindowHeight) + DAT_02d831f0,
         DAT_02d831f0 <= (float)g_WindowWidth)) {
        if ((DAT_02d831ec == 3) &&
           (DAT_02d831f0 = DAT_02d831f0 -
                           ((float)*(int *)(in_stack_00000004 + 0x260) * (float)256) /
                           ((float)31457280 / (float)g_WindowHeight), DAT_02d831f0 < 0.0)) {
          DAT_02d831f0 = 0.0;
          DAT_02d831ec = 4;
          return;
        }
        if (DAT_02d831ec == 1) {
          DAT_02d831ec = 2;
        }
      }
      else {
        DAT_02d831ec = 0;
      }
    }
    else {
      DAT_02d831ec = 5;
    }
  }
  return;
}
