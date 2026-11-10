// Name: sound_sndmain.cpp_processAudio_FUN_00559120
// Address: 00559120
// Address Range: [[00559120, 00559196]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_processAudio_FUN_00559120(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_processAudio_FUN_00559120(void)

{
  int iVar1;
  
  if (_DAT_02cf3280 != (int *)0x0) {
    iVar1 = wincore_winrun_cpp_waitForMutexTimeout_FUN_00581950
                      (_DAT_02cf3418,(double)(_DAT_02cf340c * _DAT_005d3d5e));
    if (iVar1 != 0) {
      _DAT_02cf341c = _DAT_02cf341c + 1;
      (**(code **)(*_DAT_02cf3280 + 0x10))(_DAT_02cf3280);
      sound_sndmain_cpp_pollAllStreams_FUN_0055a1b0(0);
      _DAT_02cf341c = _DAT_02cf341c + -1;
      wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cf3418);
      return;
    }
  }
  return;
}
