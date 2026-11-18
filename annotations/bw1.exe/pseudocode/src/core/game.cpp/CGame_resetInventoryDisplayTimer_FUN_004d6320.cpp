// Name: core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320
// Address: 004d6320
// Address Range: [[004d6320, 004d633a]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004d6320(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004fa740
            (&g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]->inventory);
  return;
}
