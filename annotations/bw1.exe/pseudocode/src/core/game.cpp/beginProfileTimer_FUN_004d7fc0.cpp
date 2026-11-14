// Name: core_game.cpp_beginProfileTimer_FUN_004d7fc0
// Address: 004d7fc0
// Address Range: [[004d7fc0, 004d7fd9]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_beginProfileTimer_FUN_004d7fc0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_beginProfileTimer_FUN_004d7fc0(void)

{
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  _DAT_01cd0c90 = wincore_winrun_cpp_getTime_FUN_005b2420();
  return;
}
