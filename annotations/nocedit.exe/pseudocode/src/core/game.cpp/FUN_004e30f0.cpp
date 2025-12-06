// Name: core_game.cpp_FUN_004e30f0
// Address: 004e30f0
// Address Range: [[004e30f0, 004e3109]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e30f0()

#include "nocturne.h"

void core_game_cpp_FUN_004e30f0(void)

{
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  g_ProfileStartTime = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  return;
}
