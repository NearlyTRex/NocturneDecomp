// Name: sound_sndmain.cpp_setSfxPosition_FUN_00526e10
// Address: 00526e10
// Address Range: [[00526e10, 00526e9b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxPosition_FUN_00526e10(uint sfx_handle,double pos_x,double pos_y,double pos_z)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_setSfxPosition_FUN_00526e10(uint sfx_handle,double pos_x,double pos_y,double pos_z)

{
  int iVar1;
  int iVar2;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(iVar1 + 0x1c) = 0;
  *(uint *)(iVar1 + 0x20) = 0;
  *(double *)(iVar1 + 4) = pos_x;
  *(double *)(iVar1 + 0xc) = pos_y;
  iVar2 = 1;
  *(double *)(iVar1 + 0x14) = pos_z;
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(iVar1,0);
  if ((*(int *)(iVar1 + 0x6c) != 0) && (_DAT_02dc8318 != (int *)0x0)) {
    iVar2 = (**(code **)(*_DAT_02dc8318 + 0x40))(_DAT_02dc8318,iVar1,2);
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return iVar2;
}
