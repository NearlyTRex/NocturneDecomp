// Name: core_hero.cpp_CHero_removeMatchingKeys_FUN_004ec300
// Address: 004ec300
// Address Range: [[004ec300, 004ec317]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_removeMatchingKeys_FUN_004ec300(CHero *this_ptr,uint key_mask)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_removeMatchingKeys_FUN_004ec300(CHero *this_ptr,uint key_mask)

{
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_004fc310(&this_ptr->inventory,key_mask);
  return;
}
