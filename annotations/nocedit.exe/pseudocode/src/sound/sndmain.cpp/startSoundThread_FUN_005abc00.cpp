// Name: sound_sndmain.cpp_startSoundThread_FUN_005abc00
// Address: 005abc00
// Address Range: [[005abc00, 005abcab]]
// Convention: __cdecl
// Signature: HANDLE sound_sndmain.cpp_startSoundThread_FUN_005abc00(double latency_seconds)

#include "nocturne.h"

HANDLE __cdecl sound_sndmain_cpp_startSoundThread_FUN_005abc00(double latency_seconds)

{
  double dVar1;
  int iVar2;
  HANDLE hThread;
  int extraout_EAX;
  
  iVar2 = sound_sndmain_cpp_killSoundThread_FUN_005abcb0();
  dVar1 = (double)CONCAT44(g_AudioLatencySeconds._4_4_,g_AudioLatencySeconds._0_4_);
  if (iVar2 != 0) {
    if (latency_seconds < 0.002) {
      latency_seconds = 0.002;
    }
    iVar2 = 0;
    g_AudioThreadRunning = 0;
    g_AudioThreadShutdownFlag = 0;
    g_AudioLatencySeconds = latency_seconds;
    hThread = wincore_winrun_cpp_createThread_FUN_005f4070
                        (sound_sndmain_cpp_audioThreadProc_FUN_005abba0,(LPVOID)0x0);
    dVar1 = g_AudioLatencySeconds;
    if (hThread != (HANDLE)0x0) {
      wincore_winrun_cpp_setThreadPriority_FUN_005f40a0(hThread,3);
      dVar1 = g_AudioLatencySeconds;
      if (extraout_EAX != 0) {
        do {
          dVar1 = g_AudioLatencySeconds;
          if (g_AudioThreadRunning != 0) break;
          iVar2 = iVar2 + 1;
          wincore_winrun_cpp_sleep_FUN_005f40e0(0.01);
          dVar1 = g_AudioLatencySeconds;
        } while (iVar2 < 100);
        g_AudioLatencySeconds._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
        g_AudioLatencySeconds._0_4_ = SUB84(dVar1,0);
        return (HANDLE)g_AudioThreadRunning;
      }
    }
  }
  g_AudioLatencySeconds._4_4_ = (uint)((ulonglong)dVar1 >> 0x20);
  g_AudioLatencySeconds._0_4_ = SUB84(dVar1,0);
  return (HANDLE)0x0;
}
