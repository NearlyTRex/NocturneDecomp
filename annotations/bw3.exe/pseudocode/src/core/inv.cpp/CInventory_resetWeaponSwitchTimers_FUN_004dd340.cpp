// Name: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340
// Address: 004dd340
// Address Range: [[004dd340, 004dd380]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(CInventory *this_ptr,int reset_both)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(CInventory *this_ptr,int reset_both)

{
  if (this_ptr->owner == *(CDemonActor **)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
    this_ptr->item_highlight_timer = 0.0;
    this_ptr->weapon_highlight_timer = 5.0;
    if (reset_both != 0) {
      this_ptr->ammo_detail_timer = 5.0;
      return;
    }
  }
  return;
}
