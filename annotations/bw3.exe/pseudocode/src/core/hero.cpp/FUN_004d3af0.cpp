// Name: core_hero.cpp_FUN_004d3af0
// Address: 004d3af0
// Address Range: [[004d3af0, 004d3b1f]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004d3af0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004d3af0(CHero *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)(this_ptr + 0x20ba8);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0xa4))(iVar1,this_ptr);
  *(uint *)(this_ptr + 0x20ba8) = 0;
  return;
}
