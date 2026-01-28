// Name: core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0
// Address: 004ffff0
// Address Range: [[004ffff0, 0050001b]]
// Convention: __cdecl
// Signature: void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(CInventory *this_ptr)

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner != g_HeroActors[g_LocalHeroIndex]) {
    return;
  }
  this_ptr->weapon_highlight_timer = 0.0;
  this_ptr->item_highlight_timer = 5.0;
  return;
}
