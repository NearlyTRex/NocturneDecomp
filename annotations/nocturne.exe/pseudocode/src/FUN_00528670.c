// Name: FUN_00528670
// Address: 00528670
// Address Range: [[00528670, 005286c0]]
// Convention: unknown
// Signature: void FUN_00528670(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00528670(void)

{
  _DAT_02dc84b0 = 1;
  while( true ) {
    if (_DAT_02dc84b4 != 0) {
      _DAT_02dc84b0 = 0;
      return;
    }
    sound_sndmain_cpp_processAudio_FUN_005288f0();
    if (_DAT_02dc84b4 != 0) break;
    wincore_winrun_cpp_sleep_FUN_00559cc0(_DAT_02dc84a8,_DAT_02dc84ac);
  }
  _DAT_02dc84b0 = 0;
  return;
}
