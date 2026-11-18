// Name: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd2f0
// Address: 004dd2f0
// Address Range: [[004dd2f0, 004dd311]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd2f0(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd2f0(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner != g_CHero_PTR_ARRAY_01cedee4[g_INT_01cedef4]) {
    return;
  }
  this_ptr->inventory_display_timer = 5.0;
  return;
}
