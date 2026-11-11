// Name: core_hero.cpp_FUN_004d48d0
// Address: 004d48d0
// Address Range: [[004d48d0, 004d48fb]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004d48d0(void)

#include "nocturne.h"

void core_hero_cpp_FUN_004d48d0(void)

{
  if (g_CGamePtr->goggles_active == 0) {
    (**(code **)g_CGamePtr->vtable)(g_CGamePtr,1);
    return;
  }
  (**(code **)g_CGamePtr->vtable)(g_CGamePtr,0);
  return;
}
