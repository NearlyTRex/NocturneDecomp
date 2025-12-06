// Name: core_fire.cpp_CFireEffect_FUN_004c8dd0
// Address: 004c8dd0
// Address Range: [[004c8dd0, 004c8e3e]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c8dd0(CFireEffect * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8dd0(CFireEffect *this_ptr)

{
  int iVar1;
  uint in_stack_0000001c;
  
  iVar1 = core_fire_cpp_CFireEffect_FUN_004c8e40(this_ptr);
  *(uint *)(g_TossPool[iVar1].field0_0x0 + 0x3e0) = in_stack_0000001c;
  sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_005a98b0
            (*(uint *)(g_TossPool[iVar1].field0_0x0 + 0x3e0),
             (CVector3f *)(g_TossPool[iVar1].field0_0x0 + 0x180));
  return;
}
