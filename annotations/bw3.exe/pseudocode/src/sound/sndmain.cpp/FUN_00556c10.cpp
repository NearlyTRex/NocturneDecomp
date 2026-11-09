// Name: sound_sndmain.cpp_FUN_00556c10
// Address: 00556c10
// Address Range: [[00556c10, 00556c5b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_00556c10(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_FUN_00556c10(uint sfx_handle,float target_volume,float fade_duration,int stop_after_fade)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_FUN_00552f10(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  *(float *)&pCVar1->field_0xfc = target_volume;
  *(float *)&pCVar1->field_0x100 = fade_duration;
  *(float *)&pCVar1->field_0x104 = (float)stop_after_fade;
  sound_sndmain_cpp_FUN_00556fd0();
  return 1;
}
