// Name: core_inv.cpp_CInventory_toggleDetailView_FUN_004c32e0
// Address: 004c32e0
// Address Range: [[004c32e0, 004c3343]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_004c32e0(CInventory *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_004c32e0(CInventory *this_ptr)

{
  if (this_ptr->owner == *(CDemonActor **)(_DAT_01cae0e8 * 4 + 0x1cae0d8)) {
    this_ptr->render_mode_flag = (uint)(this_ptr->render_mode_flag == 0);
    if (0.0 < this_ptr->item_highlight_timer) {
      core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004c1d70(this_ptr);
    }
    if (0.0 < this_ptr->weapon_highlight_timer) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004c1d20(this_ptr,0);
      return;
    }
  }
  return;
}
