// Name: sound_sndmain.cpp_killSoundThread_FUN_00575ca0
// Address: 00575ca0
// Address Range: [[00575ca0, 00575d1c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_killSoundThread_FUN_00575ca0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_killSoundThread_FUN_00575ca0(void)

{
  int iVar1;
  
  iVar1 = 0;
  _DAT_02c807e4 = 1;
  do {
    if (_DAT_02c807e0 == 0) break;
    iVar1 = iVar1 + 1;
    wincore_winrun_cpp_sleep_FUN_005b3860(0.01);
  } while (iVar1 < 100);
  if (_DAT_02c807e0 == 0) {
    return 1;
  }
  sound_sndmain_cpp_logSoundError_FUN_005773f0("Mb`?killSoundThread - failed!\n" + 4);
  return (uint)(_DAT_02c807e0 == 0);
}
