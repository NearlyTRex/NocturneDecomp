// Name: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270
// Address: 004dd270
// Address Range: [[004dd270, 004dd2b0]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(CInventory *this_ptr,int reset_both)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(CInventory *this_ptr,int reset_both)

{
  if ((CHero *)this_ptr->owner == g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]) {
    this_ptr->item_highlight_timer = 0.0;
    this_ptr->weapon_highlight_timer = 5.0;
    if (reset_both != 0) {
      this_ptr->ammo_detail_timer = 5.0;
      return;
    }
  }
  return;
}
