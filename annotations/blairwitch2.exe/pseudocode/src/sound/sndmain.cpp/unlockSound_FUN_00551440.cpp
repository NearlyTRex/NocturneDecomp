// Name: sound_sndmain.cpp_unlockSound_FUN_00551440
// Address: 00551440
// Address Range: [[00551440, 0055147a] [00553541, 00553574]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_unlockSound_FUN_00551440(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_unlockSound_FUN_00551440(void)

{
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x1845;
    core_main_c_FUN_004e4500("unlockSound - sound was not locked!");
  }
  if (_DAT_0264901c == 1) {
    sound_sndmain_cpp_flushSoundChanges_FUN_00553380();
  }
  _DAT_0264901c = _DAT_0264901c + -1;
  wincore_winrun_cpp_releaseMutex_FUN_0058fd00(_DAT_02649018);
  return;
}
