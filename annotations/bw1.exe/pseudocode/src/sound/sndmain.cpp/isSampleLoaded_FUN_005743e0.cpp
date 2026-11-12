// Name: sound_sndmain.cpp_isSampleLoaded_FUN_005743e0
// Address: 005743e0
// Address Range: [[005743e0, 00574406]]
// Convention: unknown
// Signature: bool sound_sndmain_cpp_isSampleLoaded_FUN_005743e0(char *param_1)

#include "nocturne.h"

bool sound_sndmain_cpp_isSampleLoaded_FUN_005743e0(char *param_1)

{
  CSfxSample *pCVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  pCVar1 = sound_sndmain_cpp_FUN_0056e830(param_1);
  sound_sndmain_cpp_FUN_00573e70();
  return pCVar1 != (CSfxSample *)0x0;
}
