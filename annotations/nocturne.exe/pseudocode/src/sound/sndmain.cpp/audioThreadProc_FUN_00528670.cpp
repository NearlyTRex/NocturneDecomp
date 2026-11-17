// Name: sound_sndmain.cpp_audioThreadProc_FUN_00528670
// Address: 00528670
// Address Range: [[00528670, 005286c0]]
// Convention: __cdecl
// Signature: DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00528670(LPVOID lpThreadParam)

#include "nocturne.h"

DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00528670(LPVOID lpThreadParam)

{
  g_AudioThreadRunning = 1;
  while( true ) {
    if (g_AudioThreadShutdownFlag != 0) {
      g_AudioThreadRunning = 0;
      return 0;
    }
    sound_sndmain_cpp_processAudio_FUN_005288f0();
    if (g_AudioThreadShutdownFlag != 0) break;
    wincore_winrun_cpp_sleep_FUN_00559cc0
              (__BITCAST_DOUBLE(CONCAT44(g_AudioLatencySeconds._4_4_,g_AudioLatencySeconds._0_4_)));
  }
  g_AudioThreadRunning = 0;
  return 0;
}
