// Name: core_fire.cpp_CFireEffect_FUN_004c8ef0
// Address: 004c8ef0
// Address Range: [[004c8ef0, 004c8f48]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c8ef0(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8ef0(CFireEffect *this_ptr)

{
  int in_stack_00000010;
  
  if (0 < in_stack_00000010) {
    do {
      core_fire_cpp_CGunFlame_FUN_004c4db0(g_GunFlamePool + (int)g_CraterActiveListHead);
      g_CraterActiveListHead = (CCrater *)(g_CraterActiveListHead->field0_0x0 + 1);
      if (499 < (int)g_CraterActiveListHead) {
        g_CraterActiveListHead = (CCrater *)0x0;
      }
      in_stack_00000010 = in_stack_00000010 + -1;
    } while (0 < in_stack_00000010);
  }
  return;
}
