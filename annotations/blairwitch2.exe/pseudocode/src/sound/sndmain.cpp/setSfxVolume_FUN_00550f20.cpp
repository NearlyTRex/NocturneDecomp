// Name: sound_sndmain.cpp_setSfxVolume_FUN_00550f20
// Address: 00550f20
// Address Range: [[00550f20, 00550f4c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_00550f20(uint sfx_handle,float volume)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_00550f20(uint sfx_handle,float volume)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0054d3a0(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar1->options).current_volume = volume;
  *(byte *)&pCVar1->changed_flags = (byte)pCVar1->changed_flags | 8;
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return 1;
}
