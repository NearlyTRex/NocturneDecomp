// Name: core_hero.cpp_CHero_removeMatchingKeys_FUN_004f3910
// Address: 004f3910
// Address Range: [[004f3910, 004f3927]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_removeMatchingKeys_FUN_004f3910(CHero *this_ptr,uint key_mask)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_removeMatchingKeys_FUN_004f3910(CHero *this_ptr,uint key_mask)

{
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_005014a0(&this_ptr->inventory,key_mask);
  return;
}
