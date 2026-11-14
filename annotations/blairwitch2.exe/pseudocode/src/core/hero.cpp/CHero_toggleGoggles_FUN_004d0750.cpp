// Name: core_hero.cpp_CHero_toggleGoggles_FUN_004d0750
// Address: 004d0750
// Address Range: [[004d0750, 004d077b]]
// Convention: __cdecl
// Signature: void __cdecl core_hero_cpp_CHero_toggleGoggles_FUN_004d0750(CHero *this_ptr)

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_toggleGoggles_FUN_004d0750(CHero *this_ptr)

{
  if (g_CGamePtr->goggles_active == 0) {
    (**(code **)g_CGamePtr->vtable)(g_CGamePtr,1);
    return;
  }
  (**(code **)g_CGamePtr->vtable)(g_CGamePtr,0);
  return;
}
