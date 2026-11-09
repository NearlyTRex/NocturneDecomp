// Name: sound_sndmain.cpp_FUN_00575fb0
// Address: 00575fb0
// Address Range: [[00575fb0, 00576026]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00575fb0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00575fb0(void)

{
  int iVar1;
  
  if (_DAT_02c80650 != (int *)0x0) {
    iVar1 = wincore_winrun_cpp_waitForMutexTimeout_FUN_005b3770
                      (_DAT_02c807e8,(double)(_DAT_02c807dc * _DAT_005f4464));
    if (iVar1 != 0) {
      _DAT_02c807ec = _DAT_02c807ec + 1;
      (**(code **)(*_DAT_02c80650 + 0x10))(_DAT_02c80650);
      sound_sndmain_cpp_pollAllStreams_FUN_00577040(0);
      _DAT_02c807ec = _DAT_02c807ec + -1;
      wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c807e8);
      return;
    }
  }
  return;
}
