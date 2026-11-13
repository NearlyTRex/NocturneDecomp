// Name: sound_sndmain.cpp_isSampleLoaded_FUN_005519b0
// Address: 005519b0
// Address Range: [[005519b0, 005519d6]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSampleLoaded_FUN_005519b0(char *sample_name)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSampleLoaded_FUN_005519b0(char *sample_name)

{
  CSfxSample *pCVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  pCVar1 = sound_sndmain_cpp_getSfxSample_FUN_0054c1c0(sample_name);
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  return (uint)(pCVar1 != (CSfxSample *)0x0);
}
