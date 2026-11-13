// Name: sound_sndmain.cpp_setSfxVolume_FUN_00573950
// Address: 00573950
// Address Range: [[00573950, 0057397c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_00573950(uint sfx_handle,float volume)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxVolume_FUN_00573950(uint sfx_handle,float volume)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0056fa10(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar1->options).current_volume = volume;
  *(byte *)&pCVar1->changed_flags = (byte)pCVar1->changed_flags | 8;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 1;
}
