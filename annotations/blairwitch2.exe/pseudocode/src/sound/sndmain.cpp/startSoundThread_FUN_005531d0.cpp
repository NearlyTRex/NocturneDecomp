// Name: sound_sndmain.cpp_startSoundThread_FUN_005531d0
// Address: 005531d0
// Address Range: [[005531d0, 0055326d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_startSoundThread_FUN_005531d0(double latency_seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_startSoundThread_FUN_005531d0(double latency_seconds)

{
  int iVar1;
  HANDLE hThread;
  
  iVar1 = sound_sndmain_cpp_killSoundThread_FUN_00553270();
  if (iVar1 != 0) {
    _DAT_0264900c = latency_seconds._0_4_;
    if (latency_seconds._0_4_ < (float)_DAT_005e919e) {
      _DAT_0264900c = 0.002;
    }
    _DAT_02649010 = 0;
    _DAT_02649014 = 0;
    hThread = wincore_winrun_cpp_createThread_FUN_0058fd20
                        (sound_sndmain_cpp_audioThreadProc_FUN_00553180,(LPVOID)0x0);
    if ((hThread != (HANDLE)0x0) &&
       (iVar1 = wincore_winrun_cpp_setThreadPriority_FUN_0058fd50(hThread,3), iVar1 != 0)) {
      iVar1 = 0;
      do {
        if (_DAT_02649010 != 0) {
          return _DAT_02649010;
        }
        iVar1 = iVar1 + 1;
        wincore_winrun_cpp_sleep_FUN_0058fd90(0.01);
      } while (iVar1 < 100);
      return _DAT_02649010;
    }
  }
  return 0;
}
