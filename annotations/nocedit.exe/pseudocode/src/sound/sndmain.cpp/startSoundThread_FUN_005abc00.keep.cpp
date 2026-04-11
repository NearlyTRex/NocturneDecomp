// Name: sound_sndmain.cpp_startSoundThread_FUN_005abc00
// Address: 005abc00
// MANUAL RECONSTRUCTION
// Address Range: [[005abc00, 005abcab]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_startSoundThread_FUN_005abc00(double latency_seconds)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_startSoundThread_FUN_005abc00(double latency_seconds)

{
  int iVar2;
  HANDLE hThread;
  int iVar3;

  iVar2 = sound_sndmain_cpp_killSoundThread_FUN_005abcb0();
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
    if (hThread != (HANDLE)0x0) {
      iVar3 = wincore_winrun_cpp_setThreadPriority_FUN_005f40a0(hThread,3);
      if (iVar3 != 0) {
        do {
          if (g_AudioThreadRunning != 0) break;
          iVar2 = iVar2 + 1;
          wincore_winrun_cpp_sleep_FUN_005f40e0(0.01);
        } while (iVar2 < 100);
        return g_AudioThreadRunning;
      }
    }
  }
  return 0;
}
