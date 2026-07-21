// Name: sound_sndmain.cpp_lockSound_FUN_00528800
// Address: 00528800
// Address Range: [[00528800, 00528886]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_lockSound_FUN_00528800(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_lockSound_FUN_00528800(void)

{
  if (_DAT_02dc84b8 == 0) {
    _DAT_02dc84b8 = wincore_winrun_cpp_createMutex_FUN_00559bc0();
    if (_DAT_02dc84b8 == 0) {
      _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
      _DAT_01cc4804 = 0x12fc;
      FUN_004c8440("lockSound - unable to create mutex object");
    }
  }
  wincore_winrun_cpp_waitForMutex_FUN_00559bd0(_DAT_02dc84b8);
  _DAT_02dc84bc = _DAT_02dc84bc + 1;
  if (_DAT_02dc84bc < 100) {
    return;
  }
  _DAT_01cc4800 = "..\\sound\\sndmain.cpp";
  _DAT_01cc4804 = 0x1306;
  FUN_004c8440("lockSound - lock imbalance?");
  return;
}
