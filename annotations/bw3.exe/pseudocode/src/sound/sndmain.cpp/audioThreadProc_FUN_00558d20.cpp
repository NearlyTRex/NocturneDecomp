// Name: sound_sndmain.cpp_audioThreadProc_FUN_00558d20
// Address: 00558d20
// Address Range: [[00558d20, 00558d6f]]
// Convention: __cdecl
// Signature: DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00558d20(LPVOID lpThreadParam)

#include "nocturne.h"

DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00558d20(LPVOID lpThreadParam)

{
  g_AudioThreadRunning = 1;
  while( true ) {
    if (g_AudioThreadShutdownFlag != 0) {
      g_AudioThreadRunning = 0;
      return 0;
    }
    sound_sndmain_cpp_processAudio_FUN_00559120();
    if (g_AudioThreadShutdownFlag != 0) break;
    wincore_winrun_cpp_sleep_FUN_00581a40((double)g_FLOAT_02cf340c);
  }
  g_AudioThreadRunning = 0;
  return 0;
}
