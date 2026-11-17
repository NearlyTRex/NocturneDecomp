// Name: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0
// Address: 004fa6c0
// Address Range: [[004fa6c0, 004fa700]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0(CInventory *this_ptr,int reset_both)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0(CInventory *this_ptr,int reset_both)

{
  if ((CHero *)this_ptr->owner == g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]) {
    this_ptr->item_highlight_timer = 0.0;
    this_ptr->weapon_highlight_timer = 5.0;
    if (reset_both != 0) {
      this_ptr->ammo_detail_timer = 5.0;
      return;
    }
  }
  return;
}
