// Name: sound_sndmain.cpp_setDualListenerEnabled_FUN_00551420
// Address: 00551420
// Address Range: [[00551420, 0055143f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setDualListenerEnabled_FUN_00551420(int enabled)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setDualListenerEnabled_FUN_00551420(int enabled)

{
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  g_INT_026484bc = enabled;
  if (enabled == 0) {
    g_INT_026484b8 = enabled;
  }
  if (g_INT_0264901c < 1) {
    g_CHAR_PTR_01d046a0 = "..\\sound\\sndmain.cpp";
    g_INT_01d046a4 = 0x1845;
    core_main_c_displayErrorAndQuit_FUN_004e4500("unlockSound - sound was not locked!");
  }
  if (g_INT_0264901c == 1) {
    sound_sndmain_cpp_flushSoundChanges_FUN_00553380();
  }
  g_INT_0264901c = g_INT_0264901c + -1;
  wincore_winrun_cpp_releaseMutex_FUN_0058fd00(g_HANDLE_02649018);
  return;
}
