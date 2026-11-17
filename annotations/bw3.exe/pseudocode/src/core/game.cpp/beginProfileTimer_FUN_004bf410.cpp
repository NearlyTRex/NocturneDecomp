// Name: core_game.cpp_beginProfileTimer_FUN_004bf410
// Address: 004bf410
// Address Range: [[004bf410, 004bf429]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_beginProfileTimer_FUN_004bf410(void)

#include "nocturne.h"

void __cdecl core_game_cpp_beginProfileTimer_FUN_004bf410(void)

{
  if (g_CGamePtr->profile_mode != 1) {
    return;
  }
  g_INT_01d22c98 = wincore_winrun_cpp_getTime_FUN_005806a0();
  return;
}
