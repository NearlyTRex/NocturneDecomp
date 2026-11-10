// Name: core_hero.cpp_CHero_addCarriedItemToInventory_FUN_004d41a0
// Address: 004d41a0
// Address Range: [[004d41a0, 004d41df]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004d41a0(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_addCarriedItemToInventory_FUN_004d41a0(CHero *this_ptr,int hand_index)

{
  if (*(CDemonActor **)(this_ptr + hand_index * 0x78 + 0x25b0) == (CDemonActor *)0x0) {
    return;
  }
  core_inv_cpp_FUN_004da880
            ((CInventory *)(this_ptr + 0x206e8),
             *(CDemonActor **)(this_ptr + hand_index * 0x78 + 0x25b0),1);
  *(uint *)(this_ptr + hand_index * 0x78 + 0x25b0) = 0;
  return;
}
