// Name: core_hero.cpp_FUN_004d0750
// Address: 004d0750
// Address Range: [[004d0750, 004d077b]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004d0750(void)

#include "nocturne.h"

void core_hero_cpp_FUN_004d0750(void)

{
  if (g_CGamePtr->goggles_active == 0) {
    (**(code **)g_CGamePtr->vtable)(g_CGamePtr,1);
    return;
  }
  (**(code **)g_CGamePtr->vtable)(g_CGamePtr,0);
  return;
}
