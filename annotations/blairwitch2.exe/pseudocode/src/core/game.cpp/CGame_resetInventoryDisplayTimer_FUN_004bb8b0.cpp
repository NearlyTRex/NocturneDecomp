// Name: core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004bb8b0
// Address: 004bb8b0
// Address Range: [[004bb8b0, 004bb8ca]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bb8b0(CGame *this_ptr)

#include "nocturne.h"

void __cdecl core_game_cpp_CGame_resetInventoryDisplayTimer_FUN_004bb8b0(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd2f0
            (g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]->inventories);
  return;
}
