// Name: sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
// Address: 00526c50
// Address Range: [[00526c50, 00526c90]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)

{
  uint uVar1;
  CSfxSlot *pCVar2;
  
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
  if (uVar1 == 0) {
    pCVar2 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,0);
    return (uint)(pCVar2 != (CSfxSlot *)0x0);
  }
  pCVar2 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (pCVar2 == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
