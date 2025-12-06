// Name: core_game.cpp_CGame_FUN_004e07a0
// Address: 004e07a0
// Address Range: [[004e07a0, 004e07d4]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_FUN_004e07a0(CGame * this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_FUN_004e07a0(CGame *this_ptr)

{
  core_set_cpp_CDemonSet_FUN_0056fb80(g_CDemonSetPtr);
  core_fire_cpp_CFireEffect_loadAssets_FUN_004c7ab0(g_CFireEffectPtr);
  core_gore_cpp_CGore_FUN_004ede60(g_CGorePtr);
  core_inv_cpp_loadInventory_FUN_004fd220();
  return;
}
