// Name: sound_sndmain.cpp_unlockSound_FUN_00573e70
// Address: 00573e70
// Address Range: [[00573e70, 00573eaa] [00575f71, 00575fa4]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_unlockSound_FUN_00573e70(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_unlockSound_FUN_00573e70(void)

{
  if (g_SoundLockCount < 1) {
    g_CHAR_PTR_01d1d400 = "..\\sound\\sndmain.cpp";
    g_INT_01d1d404 = 0x183c;
    core_main_c_displayErrorAndQuit_FUN_005030e0("unlockSound - sound was not locked!");
  }
  if (g_SoundLockCount == 1) {
    sound_sndmain_cpp_flushSoundChanges_FUN_00575db0();
  }
  g_SoundLockCount = g_SoundLockCount + -1;
  wincore_winrun_cpp_releaseMutex_FUN_005b37b0(g_SoundMutex);
  return;
}
