// Name: sound_sndmain.cpp_setSfxTrackedFloatVelocity_FUN_00526ff0
// Address: 00526ff0
// Address Range: [[00526ff0, 00527051]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_00526ff0(uint sfx_handle,CVector3f *velocity_source_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSfxTrackedFloatVelocity_FUN_00526ff0(uint sfx_handle,CVector3f *velocity_source_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x40) = 1;
  iVar2 = 1;
  *(CVector3f **)(iVar1 + 0x3c) = velocity_source_ptr;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(iVar1,0);
  if ((*(int *)(iVar1 + 0x6c) != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    iVar2 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,iVar1,4);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return iVar2;
}
