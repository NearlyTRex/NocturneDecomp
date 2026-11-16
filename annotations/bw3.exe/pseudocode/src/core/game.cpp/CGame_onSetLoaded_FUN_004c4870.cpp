// Name: core_game.cpp_CGame_onSetLoaded_FUN_004c4870
// Address: 004c4870
// Address Range: [[004c4870, 004c48a7]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_onSetLoaded_FUN_004c4870(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_onSetLoaded_FUN_004c4870(CGame *this_ptr)

{
  _DAT_01d22c9c = 1;
  core_set_cpp_CDemonSet_setGamma_FUN_0053b1c0(g_CDemonSetPtr,this_ptr->gamma);
  _DAT_01d22c2c = 0;
  _DAT_01d22c6c = 0;
  return;
}
