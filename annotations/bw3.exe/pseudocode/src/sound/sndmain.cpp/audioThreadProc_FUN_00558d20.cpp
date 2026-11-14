// Name: sound_sndmain.cpp_audioThreadProc_FUN_00558d20
// Address: 00558d20
// Address Range: [[00558d20, 00558d6f]]
// Convention: __cdecl
// Signature: DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00558d20(LPVOID lpThreadParam)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

DWORD __cdecl sound_sndmain_cpp_audioThreadProc_FUN_00558d20(LPVOID lpThreadParam)

{
  _DAT_02cf3410 = 1;
  while( true ) {
    if (_DAT_02cf3414 != 0) {
      _DAT_02cf3410 = 0;
      return 0;
    }
    sound_sndmain_cpp_processAudio_FUN_00559120();
    if (_DAT_02cf3414 != 0) break;
    wincore_winrun_cpp_sleep_FUN_00581a40((double)_DAT_02cf340c);
  }
  _DAT_02cf3410 = 0;
  return 0;
}
