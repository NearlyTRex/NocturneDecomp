// Name: sound_sndmain.cpp_resetSoundDevice_FUN_00528080
// Address: 00528080
// Address Range: [[00528080, 005280b1]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_00528080(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_00528080(void)

{
  int iVar1;
  
  sound_sndmain_cpp_killAllSfx_FUN_005272b0();
  if (_DAT_02dc8318 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02dc8318 + 8))(_DAT_02dc8318);
    if (iVar1 == 0) {
      return 0;
    }
  }
  _DAT_02dc831c = 0;
  sound_sndmain_cpp_freeMixBuffers_FUN_005230d0();
  return 1;
}
