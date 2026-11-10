// Name: core_hero.cpp_CHero_removeMatchingKeys_FUN_004d0070
// Address: 004d0070
// Address Range: [[004d0070, 004d0087]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_removeMatchingKeys_FUN_004d0070(CHero *this_ptr,uint key_mask)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_removeMatchingKeys_FUN_004d0070(CHero *this_ptr,uint key_mask)

{
  core_inv_cpp_CInventory_removeMatchingKeys_FUN_004def40
            ((CInventory *)(this_ptr + 0x2437c),key_mask);
  return;
}
