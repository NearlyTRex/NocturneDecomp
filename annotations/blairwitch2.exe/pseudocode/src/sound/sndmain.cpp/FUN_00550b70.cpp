// Name: sound_sndmain.cpp_FUN_00550b70
// Address: 00550b70
// Address Range: [[00550b70, 00550bb2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_FUN_00550b70(uint sfx_handle)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_FUN_00550b70(uint sfx_handle)

{
  int extraout_EAX;
  CSfxSlot *pCVar1;
  int unaff_retaddr;
  
  sound_sndmain_cpp_FUN_00552b30(unaff_retaddr);
  if (extraout_EAX < 1) {
    pCVar1 = sound_sndmain_cpp_FUN_0054d3a0(sfx_handle,0);
    return (uint)(pCVar1 != (CSfxSlot *)0x0);
  }
  pCVar1 = sound_sndmain_cpp_FUN_0054d3a0(sfx_handle,1);
  if (pCVar1 == (CSfxSlot *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_FUN_00551440();
  return 1;
}
