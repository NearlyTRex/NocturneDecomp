// Name: sound_sndmain.cpp_resetSoundDevice_FUN_005750e0
// Address: 005750e0
// Address Range: [[005750e0, 00575111]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005750e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005750e0(void)

{
  int iVar1;
  
  sound_sndmain_cpp_killAllSfx_FUN_00573b00();
  if (_DAT_02c80650 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02c80650 + 8))(_DAT_02c80650);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _DAT_02c80654 = 0;
  sound_sndmain_cpp_freeMixBuffers_FUN_0056f630();
  return 1;
}
