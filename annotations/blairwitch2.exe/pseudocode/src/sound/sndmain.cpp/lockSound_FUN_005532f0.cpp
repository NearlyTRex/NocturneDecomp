// Name: sound_sndmain.cpp_lockSound_FUN_005532f0
// Address: 005532f0
// Address Range: [[005532f0, 00553376]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_lockSound_FUN_005532f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_lockSound_FUN_005532f0(void)

{
  if (_DAT_02649018 == (HANDLE)0x0) {
    _DAT_02649018 = wincore_winrun_cpp_createMutex_FUN_0058fc90();
    if (_DAT_02649018 == (HANDLE)0x0) {
      _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
      _DAT_01d046a4 = 0x17dd;
      core_main_c_FUN_004e4500("lockSound - unable to create mutex object");
    }
  }
  wincore_winrun_cpp_waitForMutex_FUN_0058fca0(_DAT_02649018);
  _DAT_0264901c = _DAT_0264901c + 1;
  if (_DAT_0264901c < 100) {
    return;
  }
  _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
  _DAT_01d046a4 = 0x17e8;
  core_main_c_FUN_004e4500("lockSound - lock imbalance?");
  return;
}
