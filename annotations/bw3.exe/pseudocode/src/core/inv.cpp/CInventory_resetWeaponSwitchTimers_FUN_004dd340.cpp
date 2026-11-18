// Name: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340
// Address: 004dd340
// Address Range: [[004dd340, 004dd380]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(CInventory *this_ptr,int reset_both)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd340(CInventory *this_ptr,int reset_both)

{
  if ((CHero *)this_ptr->owner == g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]) {
    this_ptr->item_highlight_timer = 0.0;
    this_ptr->weapon_highlight_timer = 5.0;
    if (reset_both != 0) {
      this_ptr->ammo_detail_timer = 5.0;
      return;
    }
  }
  return;
}
