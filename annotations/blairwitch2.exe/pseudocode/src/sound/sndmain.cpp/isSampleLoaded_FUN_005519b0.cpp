// Name: sound_sndmain.cpp_isSampleLoaded_FUN_005519b0
// Address: 005519b0
// Address Range: [[005519b0, 005519d6]]
// Convention: unknown
// Signature: bool sound_sndmain_cpp_isSampleLoaded_FUN_005519b0(char *param_1)

#include "nocturne.h"

bool sound_sndmain_cpp_isSampleLoaded_FUN_005519b0(char *param_1)

{
  CSfxSample *pCVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  pCVar1 = sound_sndmain_cpp_FUN_0054c1c0(param_1);
  sound_sndmain_cpp_FUN_00551440();
  return pCVar1 != (CSfxSample *)0x0;
}
