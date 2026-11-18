// Name: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd3c0
// Address: 004dd3c0
// Address Range: [[004dd3c0, 004dd3e1]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd3c0(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004dd3c0(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner != g_CHero_PTR_ARRAY_01d5ba04[g_INT_01d5ba14]) {
    return;
  }
  this_ptr->inventory_display_timer = 5.0;
  return;
}
