// Name: core_game.cpp_beginProfileTimer_FUN_004bd4cc
// Address: 004bd4cc
// Address Range: [[004bd4cc, 004bd4e9]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_beginProfileTimer_FUN_004bd4cc(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_beginProfileTimer_FUN_004bd4cc(void)

{
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  _DAT_01cb8118 = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  return;
}
