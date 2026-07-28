// Name: sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
// Address: 00526c50
// Address Range: [[00526c50, 00526c90]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
  if (uVar1 == 0) {
    iVar2 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,0);
    return (uint)(iVar2 != 0);
  }
  iVar2 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (iVar2 == 0) {
    return 0;
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
