// Name: sound_snddx.cpp_FUN_00579f30
// Address: 00579f30
// Address Range: [[00579f30, 00579f6a]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_00579f30(undefined4 param_1,int param_2)

#include "nocturne.h"

void sound_snddx_cpp_FUN_00579f30(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x60);
  if (((0 < iVar1) && (iVar1 < 0x1f)) && (*(int *)(iVar1 * 0x24 + 0x2c823e0) != 0)) {
    sound_snddx_cpp_FUN_00577880(iVar1);
    return;
  }
  sound_sndmain_cpp_FUN_005773f0("DirectSoundDevice::killSfx - handle wasn't valid, call ignored");
  return;
}
