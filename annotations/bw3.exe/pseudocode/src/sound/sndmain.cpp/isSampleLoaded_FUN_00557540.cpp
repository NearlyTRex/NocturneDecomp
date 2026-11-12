// Name: sound_sndmain.cpp_isSampleLoaded_FUN_00557540
// Address: 00557540
// Address Range: [[00557540, 00557566]]
// Convention: unknown
// Signature: bool sound_sndmain_cpp_isSampleLoaded_FUN_00557540(char *param_1)

#include "nocturne.h"

bool sound_sndmain_cpp_isSampleLoaded_FUN_00557540(char *param_1)

{
  CSfxSample *pCVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  pCVar1 = sound_sndmain_cpp_FUN_00551d20(param_1);
  sound_sndmain_cpp_FUN_00556fd0();
  return pCVar1 != (CSfxSample *)0x0;
}
