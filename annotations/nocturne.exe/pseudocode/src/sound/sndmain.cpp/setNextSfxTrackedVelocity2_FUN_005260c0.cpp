// Name: sound_sndmain.cpp_setNextSfxTrackedVelocity2_FUN_005260c0
// Address: 005260c0
// Address Range: [[005260c0, 005260ed]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_005260c0(CVector3d *velocity_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setNextSfxTrackedVelocity2_FUN_005260c0(CVector3d *velocity_source_ptr)

{
  int iVar1;
  
  iVar1 = _DAT_02dc1b74;
  g_CSfxOptions_ARRAY_02dc1b78[_DAT_02dc1b74].velocity_format = 2;
  g_CSfxOptions_ARRAY_02dc1b78[iVar1].velocity_source_ptr = velocity_source_ptr;
  return;
}
