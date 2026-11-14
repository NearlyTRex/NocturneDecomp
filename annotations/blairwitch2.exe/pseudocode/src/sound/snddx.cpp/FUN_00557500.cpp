// Name: sound_snddx.cpp_FUN_00557500
// Address: 00557500
// Address Range: [[00557500, 0055753a]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_00557500(undefined4 param_1,int param_2)

#include "nocturne.h"

void sound_snddx_cpp_FUN_00557500(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x60);
  if (((0 < iVar1) && (iVar1 < 0x1f)) && (*(int *)(iVar1 * 0x24 + 0x264ac10) != 0)) {
    sound_snddx_cpp_FUN_00554e50(iVar1);
    return;
  }
  sound_sndmain_cpp_logSoundError_FUN_005549c0("DirectSoundDevice::killSfx - handle wasn't valid, call ignored");
  return;
}
