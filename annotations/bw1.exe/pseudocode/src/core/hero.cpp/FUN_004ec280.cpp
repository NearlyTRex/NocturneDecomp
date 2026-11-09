// Name: core_hero.cpp_FUN_004ec280
// Address: 004ec280
// Address Range: [[004ec280, 004ec2b4]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004ec280(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004ec280(CHero *this_ptr,int hand_index)

{
  if (*(int *)(this_ptr + 0x1ff78) == 0) {
    return;
  }
  core_charactr_cpp_FUN_004325b0(this_ptr,hand_index,*(int *)(this_ptr + 0x1ff78),0x3dcccccd,0);
  *(uint *)(this_ptr + 0x1ff78) = 0;
  return;
}
