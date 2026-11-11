// Name: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0
// Address: 004fa6c0
// Address Range: [[004fa6c0, 004fa700]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0(CInventory *this_ptr,int reset_both)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0(CInventory *this_ptr,int reset_both)

{
  if (this_ptr->owner == *(CDemonActor **)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
    this_ptr->item_highlight_timer = 0.0;
    this_ptr->weapon_highlight_timer = 5.0;
    if (reset_both != 0) {
      this_ptr->ammo_detail_timer = 5.0;
      return;
    }
  }
  return;
}
