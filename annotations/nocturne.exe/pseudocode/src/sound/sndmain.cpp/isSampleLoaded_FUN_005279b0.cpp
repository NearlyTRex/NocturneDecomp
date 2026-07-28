// Name: sound_sndmain.cpp_isSampleLoaded_FUN_005279b0
// Address: 005279b0
// Address Range: [[005279b0, 005279d6]]
// Convention: unknown
// Signature: bool sound_sndmain_cpp_isSampleLoaded_FUN_005279b0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

bool sound_sndmain_cpp_isSampleLoaded_FUN_005279b0(void)

{
  CSfxSample *pCVar1;
  char *in_stack_00000004;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  pCVar1 = sound_sndmain_cpp_getSfxSample_FUN_00522480(in_stack_00000004);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return pCVar1 != (CSfxSample *)0x0;
}
