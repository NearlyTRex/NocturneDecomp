// Name: sound_sndmain.cpp_isSfxPlaying_FUN_00550b70
// Address: 00550b70
// Address Range: [[00550b70, 00550bb2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)

{
  uint uVar1;
  CSfxSlot *pCVar2;
  
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_00552b30();
  if ((int)uVar1 < 1) {
    pCVar2 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0054d3a0(sfx_handle,0);
    return (uint)(pCVar2 != (CSfxSlot *)0x0);
  }
  pCVar2 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0054d3a0(sfx_handle,1);
  if (pCVar2 == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return 1;
}
