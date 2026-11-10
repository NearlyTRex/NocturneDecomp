// Name: core_hero.cpp_CHero_toggleGoggles_FUN_004ec9e0
// Address: 004ec9e0
// Address Range: [[004ec9e0, 004eca0b]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_toggleGoggles_FUN_004ec9e0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_toggleGoggles_FUN_004ec9e0(CHero *this_ptr)

{
  if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    (*(code *)**(uint **)&g_CGamePtr->field_0xb00)(g_CGamePtr,1);
    return;
  }
  (*(code *)**(uint **)&g_CGamePtr->field_0xb00)(g_CGamePtr,0);
  return;
}
