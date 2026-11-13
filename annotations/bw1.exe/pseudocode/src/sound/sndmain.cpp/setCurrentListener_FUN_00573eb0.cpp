// Name: sound_sndmain.cpp_setCurrentListener_FUN_00573eb0
// Address: 00573eb0
// Address Range: [[00573eb0, 00573ebf]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setCurrentListener_FUN_00573eb0(int listener_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setCurrentListener_FUN_00573eb0(int listener_index)

{
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  _DAT_02c7fc88 = listener_index;
  if (_DAT_02c807ec < 1) {
    _DAT_01d1d400 = "..\\sound\\sndmain.cpp";
    _DAT_01d1d404 = 0x183c;
    core_main_c_FUN_005030e0("unlockSound - sound was not locked!");
  }
  if (_DAT_02c807ec == 1) {
    sound_sndmain_cpp_flushSoundChanges_FUN_00575db0();
  }
  _DAT_02c807ec = _DAT_02c807ec + -1;
  wincore_winrun_cpp_releaseMutex_FUN_005b37b0(_DAT_02c807e8);
  return;
}
