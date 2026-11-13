// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity2_FUN_005728b0
// Address: 005728b0
// Address Range: [[005728b0, 005728d6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_005728b0(CVector3d *velocity_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_005728b0(CVector3d *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_02c78cec * 0x60;
  *(uint *)(iVar1 + 0x2c78d24) = 2;
  *(CVector3d **)(iVar1 + 0x2c78d20) = velocity_source_ptr;
  return;
}
