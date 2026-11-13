// Name: sound_sndmain.cpp_FUN_00557010
// Address: 00557010
// Address Range: [[00557010, 0055701f]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_FUN_00557010(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void sound_sndmain_cpp_FUN_00557010(void)

{
  uint in_stack_00000004;
  
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  _DAT_02cf28b8 = in_stack_00000004;
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x184f;
    core_main_c_FUN_004e4330("unlockSound - sound was not locked!");
  }
  if (_DAT_02cf341c == 1) {
    sound_sndmain_cpp_FUN_00558f20();
  }
  _DAT_02cf341c = _DAT_02cf341c + -1;
  wincore_winrun_cpp_releaseMutex_FUN_00581990(_DAT_02cf3418);
  return;
}
