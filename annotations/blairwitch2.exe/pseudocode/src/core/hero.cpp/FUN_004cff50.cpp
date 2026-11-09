// Name: core_hero.cpp_FUN_004cff50
// Address: 004cff50
// Address Range: [[004cff50, 004cff84]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004cff50(CHero *this_ptr,int hand_index)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004cff50(CHero *this_ptr,int hand_index)

{
  if (*(int *)(this_ptr + 0x25608) == 0) {
    return;
  }
  core_charactr_cpp_FUN_00428b10(this_ptr,hand_index,*(int *)(this_ptr + 0x25608),0x3dcccccd,0);
  *(uint *)(this_ptr + 0x25608) = 0;
  return;
}
