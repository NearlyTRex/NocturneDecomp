// Name: core_game.cpp_beginProfileTimer_FUN_004e30f0
// Address: 004e30f0
// Address Range: [[004e30f0, 004e3109]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_beginProfileTimer_FUN_004e30f0(void)

#include "nocturne.h"

void __cdecl core_game_cpp_beginProfileTimer_FUN_004e30f0(void)

{
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  return;
}
