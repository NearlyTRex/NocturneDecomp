// Name: sound_sndmain.cpp_audioThreadProc_FUN_00528670
// Address: 00528670
// Address Range: [[00528670, 005286c0]]
// Convention: __cdecl
// Signature: DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00528670(LPVOID lpThreadParam)

#include "nocturne.h"

DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00528670(LPVOID lpThreadParam)

{
  g_INT_02dc84b0 = 1;
  while( true ) {
    if (g_INT_02dc84b4 != 0) {
      g_INT_02dc84b0 = 0;
      return 0;
    }
    sound_sndmain_cpp_processAudio_FUN_005288f0();
    if (g_INT_02dc84b4 != 0) break;
    wincore_winrun_cpp_sleep_FUN_00559cc0
              (__BITCAST_DOUBLE(CONCAT44(g_DOUBLE_02dc84a8._4_4_,g_DOUBLE_02dc84a8._0_4_)));
  }
  g_INT_02dc84b0 = 0;
  return 0;
}
