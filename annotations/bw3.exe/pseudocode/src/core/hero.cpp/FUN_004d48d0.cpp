// Name: core_hero.cpp_FUN_004d48d0
// Address: 004d48d0
// Address Range: [[004d48d0, 004d48fb]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004d48d0(void)

#include "nocturne.h"

void core_hero_cpp_FUN_004d48d0(void)

{
  if (*(int *)&g_CGamePtr->field_0x264 == 0) {
    (*(code *)**(uint **)&g_CGamePtr->field_0xb8c)(g_CGamePtr,1);
    return;
  }
  (*(code *)**(uint **)&g_CGamePtr->field_0xb8c)(g_CGamePtr,0);
  return;
}
