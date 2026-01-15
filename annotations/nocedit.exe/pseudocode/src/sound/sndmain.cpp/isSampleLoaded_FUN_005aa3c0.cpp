// Name: sound_sndmain.cpp_isSampleLoaded_FUN_005aa3c0
// Address: 005aa3c0
// Address Range: [[005aa3c0, 005aa3e6]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_isSampleLoaded_FUN_005aa3c0(char * sample_name)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isSampleLoaded_FUN_005aa3c0(char *sample_name)

{
  CSfxSample *pCVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  pCVar1 = sound_sndmain_cpp_getSfxSample_FUN_005a4c80(sample_name);
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return (uint)(pCVar1 != (CSfxSample *)0x0);
}
