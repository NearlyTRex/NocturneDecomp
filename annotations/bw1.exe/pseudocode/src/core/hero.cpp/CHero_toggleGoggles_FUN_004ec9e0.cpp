// Name: core_hero.cpp_CHero_toggleGoggles_FUN_004ec9e0
// Address: 004ec9e0
// Address Range: [[004ec9e0, 004eca0b]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_toggleGoggles_FUN_004ec9e0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_toggleGoggles_FUN_004ec9e0(CHero *this_ptr)

{
  if (g_CGamePtr->goggles_active == 0) {
    (**(code **)g_CGamePtr->vtable)(g_CGamePtr,1);
    return;
  }
  (**(code **)g_CGamePtr->vtable)(g_CGamePtr,0);
  return;
}
