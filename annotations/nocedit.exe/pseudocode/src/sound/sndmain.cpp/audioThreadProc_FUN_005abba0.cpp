// Name: sound_sndmain.cpp_audioThreadProc_FUN_005abba0
// Address: 005abba0
// Address Range: [[005abba0, 005abbf0]]
// Convention: __cdecl
// Signature: DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_005abba0(LPVOID lpThreadParam)

#include "nocturne.h"

DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_005abba0(LPVOID lpThreadParam)

{
  g_AudioThreadRunning = 1;
  while( true ) {
    if (g_AudioThreadShutdownFlag != 0) {
      g_AudioThreadRunning = 0;
      return 0;
    }
    sound_sndmain_cpp_processAudio_FUN_005abe20();
    if (g_AudioThreadShutdownFlag != 0) break;
    wincore_winrun_cpp_sleep_FUN_005f40e0
              ((double)CONCAT44(g_AudioLatencySeconds._4_4_,g_AudioLatencySeconds._0_4_));
  }
  g_AudioThreadRunning = 0;
  return 0;
}
