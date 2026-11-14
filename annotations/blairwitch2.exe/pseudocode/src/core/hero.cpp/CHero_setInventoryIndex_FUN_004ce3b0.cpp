// Name: core_hero.cpp_CHero_setInventoryIndex_FUN_004ce3b0
// Address: 004ce3b0
// Address Range: [[004ce3b0, 004ce3c4]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_setInventoryIndex_FUN_004ce3b0(CHero *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_setInventoryIndex_FUN_004ce3b0(CHero *this_ptr,int index)

{
  this_ptr->inventories[0].current_group = index;
  this_ptr->hero_inventory_index = index;
  return;
}
