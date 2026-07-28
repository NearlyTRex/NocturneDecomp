// Name: core_hero.cpp_CHero_removeMatchingKeys_FUN_004b5cb0
// Address: 004b5cb0
// Address Range: [[004b5cb0, 004b5cc7]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_removeMatchingKeys_FUN_004b5cb0(CHero *this_ptr,uint key_mask)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_removeMatchingKeys_FUN_004b5cb0(CHero *this_ptr,uint key_mask)

{
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_004c3280(&this_ptr->inventory,key_mask);
  return;
}
