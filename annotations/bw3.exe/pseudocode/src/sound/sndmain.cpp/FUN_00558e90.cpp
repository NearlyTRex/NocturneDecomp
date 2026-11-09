// Name: sound_sndmain.cpp_FUN_00558e90
// Address: 00558e90
// Address Range: [[00558e90, 00558f16]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_FUN_00558e90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_FUN_00558e90(void)

{
  if (_DAT_02cf3418 == (HANDLE)0x0) {
    _DAT_02cf3418 = wincore_winrun_cpp_createMutex_FUN_00581920();
    if (_DAT_02cf3418 == (HANDLE)0x0) {
      _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
      _DAT_01d71de4 = 0x17e7;
      core_main_c_FUN_004e4330("lockSound - unable to create mutex object");
    }
  }
  wincore_winrun_cpp_waitForMutex_FUN_00581930(_DAT_02cf3418);
  _DAT_02cf341c = _DAT_02cf341c + 1;
  if (_DAT_02cf341c < 100) {
    return;
  }
  _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
  _DAT_01d71de4 = 0x17f2;
  core_main_c_FUN_004e4330("lockSound - lock imbalance?");
  return;
}
