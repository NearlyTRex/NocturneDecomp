// Name: sound_snddx.cpp_checkDirectSoundError_FUN_00529bb0
// Address: 00529bb0
// Address Range: [[00529bb0, 00529c04]]
// Convention: unknown
// Signature: undefined4 sound_snddx_cpp_checkDirectSoundError_FUN_00529bb0(uint param_1,undefined4 param_2)

#include "nocturne.h"

uint sound_snddx_cpp_checkDirectSoundError_FUN_00529bb0(uint param_1,uint param_2)

{
  char *pcVar1;
  char acStack_190 [400];
  
  if (param_1 == 0) {
    return 1;
  }
  pcVar1 = sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(param_1);
  _sprintf(acStack_190,"DirectSux: Unable to %s.  (%s)",param_2,pcVar1);
  sound_sndmain_cpp_logSoundError_FUN_00529980(acStack_190);
  return 0;
}
