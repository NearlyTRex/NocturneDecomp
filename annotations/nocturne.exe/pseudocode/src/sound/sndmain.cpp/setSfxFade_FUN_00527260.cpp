// Name: sound_sndmain.cpp_setSfxFade_FUN_00527260
// Address: 00527260
// Address Range: [[00527260, 005272ab]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxFade_FUN_00527260(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxFade_FUN_00527260(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (iVar1 == 0) {
    return 0;
  }
  *(float *)(iVar1 + 0x108) = target_volume;
  *(float *)(iVar1 + 0x10c) = fade_duration;
  *(float *)(iVar1 + 0x110) = (float)stop_after_fade;
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
