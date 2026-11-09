// Name: core_game.cpp_CGame_loadAssets_FUN_004bb050
// Address: 004bb050
// Address Range: [[004bb050, 004bb084]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_loadAssets_FUN_004bb050(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_loadAssets_FUN_004bb050(CGame *this_ptr)

{
  core_set_cpp_CDemonSet_loadAssets_FUN_005332a0(g_CDemonSetPtr);
  core_fire_cpp_CFireEffect_loadAssets_FUN_0049d1c0(0x01C3DEB4);
  core_gore_cpp_CGore_loadAssets_FUN_004c9b00(g_CGorePtr);
  core_inv_cpp_loadAssets_FUN_004da990();
  return;
}
