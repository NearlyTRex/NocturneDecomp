// Name: sound_sndmain.cpp_unlockSound_FUN_00528890
// Address: 00528890
// Address Range: [[00528890, 005288e0]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_unlockSound_FUN_00528890(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_unlockSound_FUN_00528890(void)

{
  if (_DAT_02dc84bc < 1) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0x130d;
    core_main_c_FUN_004c8440("unlockSound - sound was not locked!");
  }
  _DAT_02dc84bc = _DAT_02dc84bc + -1;
  wincore_winrun_cpp_releaseMutex_FUN_00559c30(_DAT_02dc84b8);
  return;
}
