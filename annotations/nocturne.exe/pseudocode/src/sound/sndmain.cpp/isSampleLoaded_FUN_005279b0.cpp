// Name: sound_sndmain.cpp_isSampleLoaded_FUN_005279b0
// Address: 005279b0
// Address Range: [[005279b0, 005279d6]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSampleLoaded_FUN_005279b0(char *sample_name)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSampleLoaded_FUN_005279b0(char *sample_name)

{
  CSfxSample *pCVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00528800();
  pCVar1 = sound_sndmain_cpp_getSfxSample_FUN_00522480(sample_name);
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return (uint)(pCVar1 != (CSfxSample *)0x0);
}
