// Name: sound_sndmain.cpp_audioThreadProc_FUN_00575bb0
// Address: 00575bb0
// Address Range: [[00575bb0, 00575bff]]
// Convention: __cdecl
// Signature: DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00575bb0(LPVOID lpThreadParam)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00575bb0(LPVOID lpThreadParam)

{
  _DAT_02c807e0 = 1;
  while( true ) {
    if (_DAT_02c807e4 != 0) {
      _DAT_02c807e0 = 0;
      return 0;
    }
    sound_sndmain_cpp_processAudio_FUN_00575fb0();
    if (_DAT_02c807e4 != 0) break;
    wincore_winrun_cpp_sleep_FUN_005b3860((double)_DAT_02c807dc);
  }
  _DAT_02c807e0 = 0;
  return 0;
}
