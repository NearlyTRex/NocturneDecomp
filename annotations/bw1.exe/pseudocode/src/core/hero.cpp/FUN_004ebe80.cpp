// Name: core_hero.cpp_FUN_004ebe80
// Address: 004ebe80
// Address Range: [[004ebe80, 004ebeaf]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_FUN_004ebe80(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_FUN_004ebe80(CHero *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)(this_ptr + 0x1ff88);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0xa4))(iVar1,this_ptr);
  *(uint *)(this_ptr + 0x1ff88) = 0;
  return;
}
