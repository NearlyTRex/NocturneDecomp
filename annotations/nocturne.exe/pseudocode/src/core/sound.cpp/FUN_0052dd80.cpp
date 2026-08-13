// Name: core_sound.cpp_FUN_0052dd80
// Address: 0052dd80
// Address Range: [[0052dd80, 0052dd84]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_FUN_0052dd80(CSound *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_FUN_0052dd80(CSound *this_ptr)

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
