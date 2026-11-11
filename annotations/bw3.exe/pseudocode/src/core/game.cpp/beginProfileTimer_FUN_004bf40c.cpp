// Name: core_game.cpp_beginProfileTimer_FUN_004bf40c
// Address: 004bf40c
// Address Range: [[004bf40c, 004bf429]]
// Convention: unknown
// Signature: void core_game_cpp_beginProfileTimer_FUN_004bf40c(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_beginProfileTimer_FUN_004bf40c(void)

{
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  _DAT_01d22c98 = wincore_winrun_cpp_getTime_FUN_005806a0();
  return;
}
