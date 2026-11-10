// Name: core_hero.cpp_CHero_stopNearbyInteraction_FUN_004cfad0
// Address: 004cfad0
// Address Range: [[004cfad0, 004cfaff]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_stopNearbyInteraction_FUN_004cfad0(CHero *this_ptr)

{
  int iVar1;
  
  iVar1 = *(int *)(this_ptr + 0x25618);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(*(int *)(iVar1 + 0x2b0) + 0xac))(iVar1,this_ptr);
  *(uint *)(this_ptr + 0x25618) = 0;
  return;
}
