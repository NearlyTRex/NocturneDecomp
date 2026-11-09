// Name: core_game.cpp_CGame_loadAssets_FUN_004d5e40
// Address: 004d5e40
// Address Range: [[004d5e40, 004d5e74]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_loadAssets_FUN_004d5e40(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_loadAssets_FUN_004d5e40(CGame *this_ptr)

{
  core_set_cpp_CDemonSet_loadAssets_FUN_00554550(g_CDemonSetPtr);
  core_fire_cpp_CFireEffect_loadAssets_FUN_004b5ac0(0x01C57074);
  core_gore_cpp_CGore_loadAssets_FUN_004e6310(g_CGorePtr);
  core_inv_cpp_FUN_004f70e0();
  return;
}
