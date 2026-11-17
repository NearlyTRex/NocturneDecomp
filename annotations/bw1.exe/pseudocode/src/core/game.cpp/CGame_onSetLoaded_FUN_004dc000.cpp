// Name: core_game.cpp_CGame_onSetLoaded_FUN_004dc000
// Address: 004dc000
// Address Range: [[004dc000, 004dc037]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_onSetLoaded_FUN_004dc000(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_onSetLoaded_FUN_004dc000(CGame *this_ptr)

{
  g_INT_01cd0c94 = 1;
  core_set_cpp_CDemonSet_setGamma_FUN_00555830(g_CDemonSetPtr,this_ptr->gamma);
  g_INT_01cd0c24 = 0;
  g_CHero_PTR_ARRAY_01cd0c60[1] = (CHero *)0x0;
  return;
}
