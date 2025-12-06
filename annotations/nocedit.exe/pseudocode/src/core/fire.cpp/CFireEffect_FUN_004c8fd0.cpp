// Name: core_fire.cpp_CFireEffect_FUN_004c8fd0
// Address: 004c8fd0
// Address Range: [[004c8fd0, 004c9053]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c8fd0(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8fd0(CFireEffect *this_ptr)

{
  int in_stack_00000014;
  
  core_fire_cpp_FUN_004c5680();
  g_GunFlameActiveListHead = (CGunFlame *)(g_GunFlameActiveListHead->field0_0x0 + 1);
  if ((int)g_GunFlameActiveListHead < 10) {
    if (in_stack_00000014 == 0) {
      return;
    }
  }
  else {
    g_GunFlameActiveListHead = (CGunFlame *)0x0;
    if (in_stack_00000014 == 0) {
      return;
    }
  }
  core_set_cpp_CDemonSet_FUN_00570fa0(g_CDemonSetPtr);
  return;
}
