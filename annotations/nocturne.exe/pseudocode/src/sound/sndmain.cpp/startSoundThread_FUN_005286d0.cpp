// Name: sound_sndmain.cpp_startSoundThread_FUN_005286d0
// Address: 005286d0
// Address Range: [[005286d0, 0052877b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_startSoundThread_FUN_005286d0(double latency_seconds)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_startSoundThread_FUN_005286d0(double latency_seconds)

{
  double dVar1;
  int iVar2;
  HANDLE hThread;
  int iVar3;
  
  iVar2 = sound_sndmain_cpp_killSoundThread_FUN_00528780();
  dVar1 = __BITCAST_DOUBLE(CONCAT44(_DAT_02dc84ac,_DAT_02dc84a8));
  if (iVar2 != 0) {
    if (latency_seconds < 0.002) {
      latency_seconds = 0.002;
    }
    iVar2 = 0;
    _DAT_02dc84b0 = 0;
    _DAT_02dc84b4 = 0;
    _DAT_02dc84a8 = latency_seconds;
    hThread = wincore_winrun_cpp_createThread_FUN_00559c50
                        (sound_sndmain_cpp_audioThreadProc_FUN_00528670,(LPVOID)0x0);
    dVar1 = _DAT_02dc84a8;
    if (hThread != (HANDLE)0x0) {
      iVar3 = wincore_winrun_cpp_setThreadPriority_FUN_00559c80(hThread,3);
      dVar1 = _DAT_02dc84a8;
      if (iVar3 != 0) {
        do {
          dVar1 = _DAT_02dc84a8;
          if (_DAT_02dc84b0 != 0) break;
          iVar2 = iVar2 + 1;
          wincore_winrun_cpp_sleep_FUN_00559cc0(0.01);
          dVar1 = _DAT_02dc84a8;
        } while (iVar2 < 100);
        _DAT_02dc84ac = (uint)((ulonglong)dVar1 >> 0x20);
        _DAT_02dc84a8 = SUB84(__BITCAST_UINT64(dVar1),0);
        return _DAT_02dc84b0;
      }
    }
  }
  _DAT_02dc84ac = (uint)((ulonglong)dVar1 >> 0x20);
  _DAT_02dc84a8 = SUB84(__BITCAST_UINT64(dVar1),0);
  return 0;
}
