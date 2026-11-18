// Name: sound_sndmain.cpp_audioThreadProc_FUN_00575bb0
// Address: 00575bb0
// Address Range: [[00575bb0, 00575bff]]
// Convention: __cdecl
// Signature: DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00575bb0(LPVOID lpThreadParam)

#include "nocturne.h"

DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00575bb0(LPVOID lpThreadParam)

{
  g_AudioThreadRunning = 1;
  while( true ) {
    if (g_AudioThreadShutdownFlag != 0) {
      g_AudioThreadRunning = 0;
      return 0;
    }
    sound_sndmain_cpp_processAudio_FUN_00575fb0();
    if (g_AudioThreadShutdownFlag != 0) break;
    wincore_winrun_cpp_sleep_FUN_005b3860((double)g_FLOAT_02c807dc);
  }
  g_AudioThreadRunning = 0;
  return 0;
}
