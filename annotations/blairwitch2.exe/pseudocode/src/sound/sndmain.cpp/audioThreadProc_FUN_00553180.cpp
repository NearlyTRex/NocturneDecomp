// Name: sound_sndmain.cpp_audioThreadProc_FUN_00553180
// Address: 00553180
// Address Range: [[00553180, 005531cf]]
// Convention: __cdecl
// Signature: DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00553180(LPVOID lpThreadParam)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00553180(LPVOID lpThreadParam)

{
  _DAT_02649010 = 1;
  while( true ) {
    if (_DAT_02649014 != 0) {
      _DAT_02649010 = 0;
      return 0;
    }
    sound_sndmain_cpp_processAudio_FUN_00553580();
    if (_DAT_02649014 != 0) break;
    wincore_winrun_cpp_sleep_FUN_0058fd90((double)_DAT_0264900c);
  }
  _DAT_02649010 = 0;
  return 0;
}
