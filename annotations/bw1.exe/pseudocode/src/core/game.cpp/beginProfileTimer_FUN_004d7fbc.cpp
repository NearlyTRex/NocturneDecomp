// Name: core_game.cpp_beginProfileTimer_FUN_004d7fbc
// Address: 004d7fbc
// Address Range: [[004d7fbc, 004d7fd9]]
// Convention: unknown
// Signature: void core_game_cpp_beginProfileTimer_FUN_004d7fbc(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_game_cpp_beginProfileTimer_FUN_004d7fbc(void)

{
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  _DAT_01cd0c90 = wincore_winrun_cpp_getTime_FUN_005b2420();
  return;
}
