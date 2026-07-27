// Name: sound_sndmain.cpp_FUN_00527e10
// Address: 00527e10
// Address Range: [[00527e10, 00527e34]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00527e10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00527e10(void)

{
  if (0 < _DAT_02dbd34c) {
    return;
  }
  _DAT_02dbd34c = _DAT_02dbd34c + 1;
  sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
  sound_sndmain_cpp_freeAllSamples_FUN_00527c30();
  _DAT_02dbd34c = _DAT_02dbd34c + -1;
  return;
}
