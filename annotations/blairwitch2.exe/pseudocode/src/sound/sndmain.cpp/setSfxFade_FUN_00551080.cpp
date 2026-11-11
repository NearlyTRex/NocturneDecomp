// Name: sound_sndmain.cpp_setSfxFade_FUN_00551080
// Address: 00551080
// Address Range: [[00551080, 005510cb]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxFade_FUN_00551080(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxFade_FUN_00551080(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_FUN_0054d3a0(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  pCVar1->fade_target_volume = target_volume;
  pCVar1->fade_time_remaining = fade_duration;
  pCVar1->stop_after_fade = (float)stop_after_fade;
  sound_sndmain_cpp_FUN_00551440();
  return 1;
}
