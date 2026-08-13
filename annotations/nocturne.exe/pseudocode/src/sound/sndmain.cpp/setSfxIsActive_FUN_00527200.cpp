// Name: sound_sndmain.cpp_setSfxIsActive_FUN_00527200
// Address: 00527200
// Address Range: [[00527200, 00527228]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxIsActive_FUN_00527200(uint sfx_handle,int active)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxIsActive_FUN_00527200(uint sfx_handle,int active)

{
  CSfxSlot *pCVar1;
  
  pCVar1 = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  pCVar1->is_active = active;
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
