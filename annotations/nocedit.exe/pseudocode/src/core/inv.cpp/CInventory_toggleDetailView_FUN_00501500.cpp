// Name: core_inv.cpp_CInventory_toggleDetailView_FUN_00501500
// Address: 00501500
// Address Range: [[00501500, 00501563]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_00501500(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_00501500(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner == g_HeroActors[g_LocalHeroIndex]) {
    this_ptr->render_mode_flag = (uint)(this_ptr->render_mode_flag == 0);
    if (0.0 < this_ptr->item_highlight_timer) {
      core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(this_ptr);
    }
    if (0.0 < this_ptr->weapon_highlight_timer) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(this_ptr,0);
      return;
    }
  }
  return;
}
