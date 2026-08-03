// Name: core_game.cpp_CGame_loadAssets_FUN_004a3660
// Address: 004a3660
// Address Range: [[004a3660, 004a3694]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_loadAssets_FUN_004a3660(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_loadAssets_FUN_004a3660(CGame *this_ptr)

{
  core_set_cpp_CDemonSet_loadAssets_FUN_0050d280(g_CDemonSet_PTR_005be368);
  core_fire_cpp_CFireEffect_loadAssets_FUN_0048af70(g_CFireEffect_PTR_005b80f0);
  core_gore_cpp_CGore_loadAssets_FUN_004b04b0(g_CGore_PTR_005b96c4);
  core_inv_cpp_loadAssets_FUN_004befa0();
  return;
}
