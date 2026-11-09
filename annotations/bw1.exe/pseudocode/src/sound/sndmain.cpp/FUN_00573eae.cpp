// Name: sound_sndmain.cpp_FUN_00573eae
// Address: 00573eae
// Address Range: [[00573eae, 00573ebf]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00573eae(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_00573eae(uint param_1)

{
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  _DAT_02c7fc88 = param_1;
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x183c;
    core_main_c_FUN_005030e0("unlockSound - sound was not locked!");
  }
  if (_DAT_02c807ec == 1) {
    sound_sndmain_cpp_FUN_00575db0();
  }
  _DAT_02c807ec = _DAT_02c807ec + -1;
  wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c807e8);
  return;
}
