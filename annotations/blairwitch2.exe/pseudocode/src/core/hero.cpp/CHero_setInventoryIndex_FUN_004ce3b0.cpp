// Name: core_hero.cpp_CHero_setInventoryIndex_FUN_004ce3b0
// Address: 004ce3b0
// Address Range: [[004ce3b0, 004ce3c4]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_setInventoryIndex_FUN_004ce3b0(CHero *this_ptr,int index)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_setInventoryIndex_FUN_004ce3b0(CHero *this_ptr,int index)

{
  *(int *)(this_ptr + 0x247e4) = index;
  *(int *)(this_ptr + 0x2563c) = index;
  return;
}
