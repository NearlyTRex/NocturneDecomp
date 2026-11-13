// Name: sound_sndmain.cpp_setSfxFade_FUN_00573ab0
// Address: 00573ab0
// Address Range: [[00573ab0, 00573afb]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxFade_FUN_00573ab0(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxFade_FUN_00573ab0(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0056fa10(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  pCVar1->fade_target_volume = target_volume;
  pCVar1->fade_time_remaining = fade_duration;
  pCVar1->stop_after_fade = (float)stop_after_fade;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 1;
}
