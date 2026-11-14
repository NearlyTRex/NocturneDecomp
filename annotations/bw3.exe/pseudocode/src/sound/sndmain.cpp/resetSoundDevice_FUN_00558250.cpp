// Name: sound_sndmain.cpp_resetSoundDevice_FUN_00558250
// Address: 00558250
// Address Range: [[00558250, 00558281]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_00558250(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_00558250(void)

{
  int iVar1;
  
  sound_sndmain_cpp_killAllSfx_FUN_00556c60();
  if (_DAT_02cf3280 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02cf3280 + 8))(_DAT_02cf3280);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _DAT_02cf3284 = 0;
  sound_sndmain_cpp_freeMixBuffers_FUN_00552b30();
  return 1;
}
