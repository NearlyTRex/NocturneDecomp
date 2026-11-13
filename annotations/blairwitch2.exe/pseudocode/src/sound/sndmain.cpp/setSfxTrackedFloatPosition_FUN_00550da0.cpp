// Name: sound_sndmain.cpp_setSfxTrackedFloatPosition_FUN_00550da0
// Address: 00550da0
// Address Range: [[00550da0, 00550ddb]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_00550da0(uint sfx_handle,CVector3f *position_source_ptr)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxTrackedFloatPosition_FUN_00550da0(uint sfx_handle,CVector3f *position_source_ptr)

{
  uint uVar1;
  CSfxSlot *pCVar2;
  
  pCVar2 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0054d3a0(sfx_handle,1);
  if (pCVar2 == (CSfxSlot *)0x0) {
    return 0;
  }
  (pCVar2->options).position_source_ptr = position_source_ptr;
  uVar1 = pCVar2->changed_flags;
  (pCVar2->options).position_format = 1;
  *(byte *)&pCVar2->changed_flags = (byte)uVar1 | 2;
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return 1;
}
