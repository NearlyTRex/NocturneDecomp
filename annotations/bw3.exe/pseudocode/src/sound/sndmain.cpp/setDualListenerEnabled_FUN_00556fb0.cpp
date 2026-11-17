// Name: sound_sndmain.cpp_setDualListenerEnabled_FUN_00556fb0
// Address: 00556fb0
// Address Range: [[00556fb0, 00556fcf]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setDualListenerEnabled_FUN_00556fb0(int enabled)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setDualListenerEnabled_FUN_00556fb0(int enabled)

{
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  g_INT_02cf28bc = enabled;
  if (enabled == 0) {
    g_INT_02cf28b8 = enabled;
  }
  if (g_INT_02cf341c < 1) {
    g_CHAR_PTR_01d71de0 = "..\\sound\\sndmain.cpp";
    g_INT_01d71de4 = 0x184f;
    core_main_c_displayErrorAndQuit_FUN_004e4330("unlockSound - sound was not locked!");
  }
  if (g_INT_02cf341c == 1) {
    sound_sndmain_cpp_flushSoundChanges_FUN_00558f20();
  }
  g_INT_02cf341c = g_INT_02cf341c + -1;
  wincore_winrun_cpp_releaseMutex_FUN_00581990(g_HANDLE_02cf3418);
  return;
}
