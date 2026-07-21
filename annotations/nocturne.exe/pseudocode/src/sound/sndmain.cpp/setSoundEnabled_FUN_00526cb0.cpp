// Name: sound_sndmain.cpp_setSoundEnabled_FUN_00526cb0
// Address: 00526cb0
// Address Range: [[00526cb0, 00526cc1]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(int param_1)

{
  int iVar1;
  
  _DAT_02dc8324 = param_1;
  if (param_1 == 0) {
    return 0;
  }
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
