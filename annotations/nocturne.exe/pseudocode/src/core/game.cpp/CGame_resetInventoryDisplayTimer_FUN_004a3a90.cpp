// Name: core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004a3a90
// Address: 004a3a90
// Address Range: [[004a3a90, 004a3aaa]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004a3a90(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004a3a90(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0
            (&g_HeroActors[g_LocalHeroIndex]->inventory);
  return;
}
