// Name: core_game.cpp_CGame_loadAssets_FUN_004bd430
// Address: 004bd430
// Address Range: [[004bd430, 004bd464]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_loadAssets_FUN_004bd430(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_loadAssets_FUN_004bd430(CGame *this_ptr)

{
  core_set_cpp_CDemonSet_loadAssets_FUN_00539ee0(g_CDemonSetPtr);
  core_fire_cpp_CFireEffect_loadAssets_FUN_004a24a0(0x01C73654);
  core_gore_cpp_CGore_loadAssets_FUN_004cec70(g_CGorePtr);
  core_inv_cpp_loadAssets_FUN_004da570();
  return;
}
