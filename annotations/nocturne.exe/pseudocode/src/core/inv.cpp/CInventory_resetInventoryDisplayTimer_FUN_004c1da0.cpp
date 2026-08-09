// Name: core_inv.cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0
// Address: 004c1da0
// Address Range: [[004c1da0, 004c1dc1]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetInventoryDisplayTimer_FUN_004c1da0(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner != g_HeroActors[g_LocalHeroIndex]) {
    return;
  }
  this_ptr->inventory_display_timer = 5.0;
  return;
}
