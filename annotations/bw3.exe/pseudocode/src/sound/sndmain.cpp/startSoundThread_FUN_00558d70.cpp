// Name: sound_sndmain.cpp_startSoundThread_FUN_00558d70
// Address: 00558d70
// Address Range: [[00558d70, 00558e0d]]
// Convention: unknown
// Signature: int sound_sndmain_cpp_startSoundThread_FUN_00558d70(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_sndmain_cpp_startSoundThread_FUN_00558d70(float param_1)

{
  int iVar1;
  HANDLE hThread;
  
  iVar1 = sound_sndmain_cpp_killSoundThread_FUN_00558e10();
  if (iVar1 != 0) {
    _DAT_02cf340c = param_1;
    if (param_1 < (float)_DAT_005d3c92) {
      _DAT_02cf340c = 0.002;
    }
    _DAT_02cf3410 = 0;
    _DAT_02cf3414 = 0;
    hThread = wincore_winrun_cpp_createThread_FUN_005819b0
                        (sound_sndmain_cpp_audioThreadProc_FUN_00558d20,(LPVOID)0x0);
    if ((hThread != (HANDLE)0x0) &&
       (iVar1 = wincore_winrun_cpp_setThreadPriority_FUN_005819e0(hThread,3), iVar1 != 0)) {
      iVar1 = 0;
      do {
        if (_DAT_02cf3410 != 0) {
          return _DAT_02cf3410;
        }
        iVar1 = iVar1 + 1;
        wincore_winrun_cpp_sleep_FUN_00581a40(0.01);
      } while (iVar1 < 100);
      return _DAT_02cf3410;
    }
  }
  return 0;
}
