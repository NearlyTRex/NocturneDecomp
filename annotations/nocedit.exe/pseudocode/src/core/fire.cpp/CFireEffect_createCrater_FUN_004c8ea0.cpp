// Name: core_fire.cpp_CFireEffect_createCrater_FUN_004c8ea0
// Address: 004c8ea0
// Address Range: [[004c8ea0, 004c8ee3]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_004c8ea0(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_createCrater_FUN_004c8ea0(CFireEffect *this_ptr)

{
  CVector3f *in_stack_00000008;
  float in_stack_0000000c;
  
  core_fire_cpp_CCrater_activate_FUN_004c4200
            (g_CraterPool + g_CraterAllocIndex,in_stack_00000008,in_stack_0000000c);
  g_CraterAllocIndex = g_CraterAllocIndex + 1;
  if (g_CraterAllocIndex < 0x14) {
    return;
  }
  g_CraterAllocIndex = 0;
  return;
}
