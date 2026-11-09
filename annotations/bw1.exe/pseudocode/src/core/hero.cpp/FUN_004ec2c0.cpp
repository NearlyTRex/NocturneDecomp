// Name: core_hero.cpp_FUN_004ec2c0
// Address: 004ec2c0
// Address Range: [[004ec2c0, 004ec2ff]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004ec2c0(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004ec2c0(CHero *this_ptr,int hand_index)

{
  if (*(CDemonActor **)(this_ptr + hand_index * 0x78 + 0x25b0) == (CDemonActor *)0x0) {
    return;
  }
  core_inv_cpp_FUN_004f7690
            ((CInventory *)(this_ptr + 0x1fae8),
             *(CDemonActor **)(this_ptr + hand_index * 0x78 + 0x25b0),1);
  *(uint *)(this_ptr + hand_index * 0x78 + 0x25b0) = 0;
  return;
}
