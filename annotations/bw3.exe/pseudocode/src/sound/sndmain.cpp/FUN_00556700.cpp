// Name: sound_sndmain.cpp_FUN_00556700
// Address: 00556700
// Address Range: [[00556700, 00556742]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_00556700(uint sfx_handle)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_FUN_00556700(uint sfx_handle)

{
  int extraout_EAX;
  CSfxSlot *pCVar1;
  int unaff_retaddr;
  
  sound_sndmain_cpp_FUN_005586d0(unaff_retaddr);
  if (extraout_EAX < 1) {
    pCVar1 = sound_sndmain_cpp_FUN_00552f10(sfx_handle,0);
    return (uint)(pCVar1 != (CSfxSlot *)0x0);
  }
  pCVar1 = sound_sndmain_cpp_FUN_00552f10(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_FUN_00556fd0();
  return 1;
}
