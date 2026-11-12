// Name: sound_sndmain.cpp_isSampleLoaded_FUN_005743e0
// Address: 005743e0
// Address Range: [[005743e0, 00574406]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_isSampleLoaded_FUN_005743e0(char *sample_name)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSampleLoaded_FUN_005743e0(char *sample_name)

{
  CSfxSample *pCVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  pCVar1 = sound_sndmain_cpp_FUN_0056e830(sample_name);
  sound_sndmain_cpp_FUN_00573e70();
  return (uint)(pCVar1 != (CSfxSample *)0x0);
}
