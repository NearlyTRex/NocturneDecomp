// Name: core_hero.cpp_CHero_toggleGoggles_FUN_004d48d0
// Address: 004d48d0
// Address Range: [[004d48d0, 004d48fb]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_toggleGoggles_FUN_004d48d0(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_toggleGoggles_FUN_004d48d0(CHero *this_ptr)

{
  if (g_CGamePtr->goggles_active == 0) {
    (**(code **)g_CGamePtr->vtable)(g_CGamePtr,1);
    return;
  }
  (**(code **)g_CGamePtr->vtable)(g_CGamePtr,0);
  return;
}
