// Name: core_inv.cpp_CInventory_toggleDetailView_FUN_004defa0
// Address: 004defa0
// Address Range: [[004defa0, 004df003]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_004defa0(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_004defa0(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner == g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]) {
    this_ptr->render_mode_flag = (uint)(this_ptr->render_mode_flag == 0);
    if (0.0 < this_ptr->item_highlight_timer) {
      core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004dd2c0(this_ptr);
    }
    if (0.0 < this_ptr->weapon_highlight_timer) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004dd270(this_ptr,0);
      return;
    }
  }
  return;
}
