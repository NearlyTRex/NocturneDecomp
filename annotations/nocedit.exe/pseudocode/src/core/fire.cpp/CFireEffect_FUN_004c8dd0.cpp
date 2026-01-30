// Name: core_fire.cpp_CFireEffect_FUN_004c8dd0
// Address: 004c8dd0
// Address Range: [[004c8dd0, 004c8e3e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_FUN_004c8dd0(CFireEffect *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c8dd0(CFireEffect *this_ptr)

{
  int iVar1;
  uint in_stack_00000018;
  
  iVar1 = core_fire_cpp_CFireEffect_FUN_004c8e40(this_ptr);
  *(uint *)(g_TossPool[iVar1].unk2 + 0x260) = in_stack_00000018;
  sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_005a98b0
            (*(uint *)(g_TossPool[iVar1].unk2 + 0x260),(CVector3f *)g_TossPool[iVar1].unk2);
  return;
}
