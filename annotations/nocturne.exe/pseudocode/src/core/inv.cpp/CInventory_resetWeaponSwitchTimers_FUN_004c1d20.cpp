// Name: core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20
// Address: 004c1d20
// Address Range: [[004c1d20, 004c1d60]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20(CInventory *this_ptr,int reset_both)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20(CInventory *this_ptr,int reset_both)

{
  if ((CHero *)this_ptr->owner == g_HeroActors[g_LocalHeroIndex]) {
    this_ptr->item_highlight_timer = 0.0;
    this_ptr->weapon_highlight_timer = 5.0;
    if (reset_both != 0) {
      this_ptr->ammo_detail_timer = 5.0;
      return;
    }
  }
  return;
}
