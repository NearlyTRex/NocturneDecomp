// Name: sound_sndmain.cpp_setDualListenerEnabled_FUN_00573e50
// Address: 00573e50
// Address Range: [[00573e50, 00573e6f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setDualListenerEnabled_FUN_00573e50(int enabled)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_setDualListenerEnabled_FUN_00573e50(int enabled)

{
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  _DAT_02c7fc8c = enabled;
  if (enabled == 0) {
    _DAT_02c7fc88 = enabled;
  }
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
