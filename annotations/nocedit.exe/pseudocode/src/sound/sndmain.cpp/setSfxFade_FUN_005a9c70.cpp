// Name: sound_sndmain.cpp_setSfxFade_FUN_005a9c70
// Address: 005a9c70
// Address Range: [[005a9c70, 005a9cbb]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSfxFade_FUN_005a9c70(uint sfx_handle, float target_volume, float fade_duration, int stop_after_fade)

#include "nocturne.h"

int __cdecl
sound_sndmain_cpp_setSfxFade_FUN_005a9c70
          (uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  pCVar1->fade_target_volume = target_volume;
  pCVar1->fade_time_remaining = fade_duration;
  pCVar1->stop_after_fade = (int)(float)stop_after_fade;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}
