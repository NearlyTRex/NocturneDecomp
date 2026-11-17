// Name: core_game.cpp_beginProfileTimer_FUN_004bd4d0
// Address: 004bd4d0
// Address Range: [[004bd4d0, 004bd4e9]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_beginProfileTimer_FUN_004bd4d0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_beginProfileTimer_FUN_004bd4d0(void)

{
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_0058e9e0();
  return;
}
