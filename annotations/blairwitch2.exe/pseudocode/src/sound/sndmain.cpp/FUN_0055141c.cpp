// Name: sound_sndmain.cpp_FUN_0055141c
// Address: 0055141c
// Address Range: [[0055141c, 0055143f]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_0055141c(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_sndmain_cpp_FUN_0055141c(int param_1)

{
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  _DAT_026484bc = param_1;
  if (param_1 == 0) {
    _DAT_026484b8 = param_1;
  }
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x1845;
    core_main_c_FUN_004e4500("unlockSound - sound was not locked!");
  }
  if (_DAT_0264901c == 1) {
    sound_sndmain_cpp_FUN_00553380();
  }
  _DAT_0264901c = _DAT_0264901c + -1;
  wincore_winrun_cpp_releaseMutex_FUN_0058fd00(_DAT_02649018);
  return;
}
