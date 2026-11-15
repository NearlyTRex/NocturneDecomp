// Name: core_game.cpp_CGame_resetWeaponSwitchTimers_FUN_004bd8f0
// Address: 004bd8f0
// Address Range: [[004bd8f0, 004bd90c]]
// Convention: __cdecl
// Signature: void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004bd8f0(CGame *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004bd8f0(CGame *this_ptr)

{
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340
            ((CInventory *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x206e8),0);
  return;
}
