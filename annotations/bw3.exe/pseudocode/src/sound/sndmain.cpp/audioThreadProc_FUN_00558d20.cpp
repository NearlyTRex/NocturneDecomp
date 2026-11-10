// Name: sound_sndmain.cpp_audioThreadProc_FUN_00558d20
// Address: 00558d20
// Address Range: [[00558d20, 00558d6f]]
// Convention: unknown
// Signature: undefined4 sound_sndmain_cpp_audioThreadProc_FUN_00558d20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint sound_sndmain_cpp_audioThreadProc_FUN_00558d20(void)

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
