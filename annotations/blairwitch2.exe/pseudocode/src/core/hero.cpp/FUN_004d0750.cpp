// Name: core_hero.cpp_FUN_004d0750
// Address: 004d0750
// Address Range: [[004d0750, 004d077b]]
// Convention: unknown
// Signature: void core_hero_cpp_FUN_004d0750(void)

#include "nocturne.h"

void core_hero_cpp_FUN_004d0750(void)

{
  if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    (*(code *)**(uint **)&g_CGamePtr->field_0xb1c)(g_CGamePtr,1);
    return;
  }
  (*(code *)**(uint **)&g_CGamePtr->field_0xb1c)(g_CGamePtr,0);
  return;
}
