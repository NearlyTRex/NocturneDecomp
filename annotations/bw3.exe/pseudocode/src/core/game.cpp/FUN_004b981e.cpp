// Name: core_game.cpp_FUN_004b981e
// Address: 004b981e
// Address Range: [[004b981e, 004b9847]]
// Convention: unknown
// Signature: void core_game_cpp_FUN_004b981e(int param_1,uint *param_2)

#include "nocturne.h"

void core_game_cpp_FUN_004b981e(int param_1,uint *param_2)

{
  if ((&DAT_01d21fa0)[param_1] != (&DAT_01c6cef0)[param_1]) {
    *param_2 = (uint)(byte)(&DAT_01c6cef0)[param_1];
    return;
  }
  *param_2 = 0;
  return;
}
