// Name: sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
// Address: 00526c50
// Address Range: [[00526c50, 00526c90]]
// Convention: __cdecl
// Signature: bool __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(undefined4 param_1)

#include "nocturne.h"

bool __cdecl sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(uint param_1)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_hasHardware3DSound_FUN_005284f0();
  if (iVar1 == 0) {
    iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(param_1,0);
    return iVar1 != 0;
  }
  iVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(param_1,1);
  if (iVar1 == 0) {
    return false;
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return true;
}
