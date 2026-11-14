// Name: sound_sndmain.cpp_isSampleLoaded_FUN_00557540
// Address: 00557540
// Address Range: [[00557540, 00557566]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSampleLoaded_FUN_00557540(char *sample_name)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSampleLoaded_FUN_00557540(char *sample_name)

{
  CSfxSample *pCVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  pCVar1 = sound_sndmain_cpp_getSfxSample_FUN_00551d20(sample_name);
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  return (uint)(pCVar1 != (CSfxSample *)0x0);
}
