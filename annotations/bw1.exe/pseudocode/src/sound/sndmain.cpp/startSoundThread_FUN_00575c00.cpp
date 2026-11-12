// Name: sound_sndmain.cpp_startSoundThread_FUN_00575c00
// Address: 00575c00
// Address Range: [[00575c00, 00575c9d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_startSoundThread_FUN_00575c00(double latency_seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_startSoundThread_FUN_00575c00(double latency_seconds)

{
  int iVar1;
  HANDLE hThread;
  
  iVar1 = sound_sndmain_cpp_killSoundThread_FUN_00575ca0();
  if (iVar1 != 0) {
    _DAT_02c807dc = latency_seconds._0_4_;
    if (latency_seconds._0_4_ < (float)_DAT_005f4398) {
      _DAT_02c807dc = 0.002;
    }
    _DAT_02c807e0 = 0;
    _DAT_02c807e4 = 0;
    hThread = wincore_winrun_cpp_createThread_FUN_005b37d0
                        (sound_sndmain_cpp_audioThreadProc_FUN_00575bb0,(LPVOID)0x0);
    if ((hThread != (HANDLE)0x0) &&
       (iVar1 = wincore_winrun_cpp_setThreadPriority_FUN_005b3800(hThread,3), iVar1 != 0)) {
      iVar1 = 0;
      do {
        if (_DAT_02c807e0 != 0) {
          return _DAT_02c807e0;
        }
        iVar1 = iVar1 + 1;
        wincore_winrun_cpp_sleep_FUN_005b3860(0.01);
      } while (iVar1 < 100);
      return _DAT_02c807e0;
    }
  }
  return 0;
}
