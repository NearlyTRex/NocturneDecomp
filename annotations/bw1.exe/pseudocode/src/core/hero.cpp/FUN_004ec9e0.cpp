// Name: core_hero.cpp_FUN_004ec9e0
// Address: 004ec9e0
// Address Range: [[004ec9e0, 004eca0b]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004ec9e0(void)

#include "nocturne.h"

void core_hero_cpp_FUN_004ec9e0(void)

{
  if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    (*(code *)**(uint **)&g_CGamePtr->field_0xb00)(g_CGamePtr,1);
    return;
  }
  (*(code *)**(uint **)&g_CGamePtr->field_0xb00)(g_CGamePtr,0);
  return;
}
