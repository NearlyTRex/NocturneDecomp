// Name: sound_sndmain.cpp_FUN_005735a0
// Address: 005735a0
// Address Range: [[005735a0, 005735e2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_005735a0(uint sfx_handle)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_FUN_005735a0(uint sfx_handle)

{
  int extraout_EAX;
  CSfxSlot *pCVar1;
  int unaff_retaddr;
  
  sound_sndmain_cpp_FUN_00575560(unaff_retaddr);
  if (extraout_EAX < 1) {
    pCVar1 = sound_sndmain_cpp_FUN_0056fa10(sfx_handle,0);
    return (uint)(pCVar1 != (CSfxSlot *)0x0);
  }
  pCVar1 = sound_sndmain_cpp_FUN_0056fa10(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_FUN_00573e70();
  return 1;
}
