// Name: sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_005738d0
// Address: 005738d0
// Address Range: [[005738d0, 0057390b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_005738d0(uint sfx_handle,CVector3f *velocity_source_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_005738d0(uint sfx_handle,CVector3f *velocity_source_ptr)

{
  uint uVar1;
  CSfxSlot *pCVar2;
  
  pCVar2 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0056fa10(sfx_handle,1);
  if (pCVar2 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar2->options).velocity_source_ptr = velocity_source_ptr;
  uVar1 = pCVar2->changed_flags;
  (pCVar2->options).velocity_format = 1;
  *(byte *)&pCVar2->changed_flags = (byte)uVar1 | 4;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 1;
}
