// Name: sound_sndmain.cpp_lockSound_FUN_00575d20
// Address: 00575d20
// Address Range: [[00575d20, 00575da6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_lockSound_FUN_00575d20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_lockSound_FUN_00575d20(void)

{
  if (_DAT_02c807e8 == (HANDLE)0x0) {
    _DAT_02c807e8 = wincore_winrun_cpp_createMutex_FUN_005b3740();
    if (_DAT_02c807e8 == (HANDLE)0x0) {
      _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
      _DAT_01d1d404 = 0x17d4;
      core_main_c_FUN_005030e0("lockSound - unable to create mutex object");
    }
  }
  wincore_winrun_cpp_waitForMutex_FUN_005b3750(_DAT_02c807e8);
  _DAT_02c807ec = _DAT_02c807ec + 1;
  if (_DAT_02c807ec < 100) {
    return;
  }
  _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
  _DAT_01d1d404 = 0x17df;
  core_main_c_FUN_005030e0("lockSound - lock imbalance?");
  return;
}
