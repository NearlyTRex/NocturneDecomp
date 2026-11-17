// Name: core_inv.cpp_CInventory_toggleDetailView_FUN_004fc370
// Address: 004fc370
// Address Range: [[004fc370, 004fc3d3]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_004fc370(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_004fc370(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner == g_CHero_PTR_ARRAY_01d06aa4[g_INT_01d06ab4]) {
    this_ptr->render_mode_flag = (uint)(this_ptr->render_mode_flag == 0);
    if (0.0 < this_ptr->item_highlight_timer) {
      core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004fa710(this_ptr);
    }
    if (0.0 < this_ptr->weapon_highlight_timer) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fa6c0(this_ptr,0);
      return;
    }
  }
  return;
}
