// Name: sound_sndmain.cpp_audioThreadProc_FUN_00553180
// Address: 00553180
// Address Range: [[00553180, 005531cf]]
// Convention: __cdecl
// Signature: DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00553180(LPVOID lpThreadParam)

#include "nocturne.h"

DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00553180(LPVOID lpThreadParam)

{
  g_INT_02649010 = 1;
  while( true ) {
    if (g_INT_02649014 != 0) {
      g_INT_02649010 = 0;
      return 0;
    }
    sound_sndmain_cpp_processAudio_FUN_00553580();
    if (g_INT_02649014 != 0) break;
    wincore_winrun_cpp_sleep_FUN_0058fd90((double)g_FLOAT_0264900c);
  }
  g_INT_02649010 = 0;
  return 0;
}
