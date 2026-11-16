// Name: core_game.cpp_CGame_onSetLoaded_FUN_004dc000
// Address: 004dc000
// Address Range: [[004dc000, 004dc037]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_onSetLoaded_FUN_004dc000(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_onSetLoaded_FUN_004dc000(CGame *this_ptr)

{
  _DAT_01cd0c94 = 1;
  core_set_cpp_CDemonSet_setGamma_FUN_00555830(g_CDemonSetPtr,this_ptr->gamma);
  _DAT_01cd0c24 = 0;
  _DAT_01cd0c64 = 0;
  return;
}
