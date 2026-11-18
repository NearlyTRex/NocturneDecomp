// Name: core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910
// Address: 004bd910
// Address Range: [[004bd910, 004bd92a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd3c0
            (&g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]->inventory);
  return;
}
