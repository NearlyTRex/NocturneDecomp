// Name: sound_sndmain.cpp_unlockSound_FUN_00556fd0
// Address: 00556fd0
// Address Range: [[00556fd0, 0055700a] [005590e1, 00559114]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_unlockSound_FUN_00556fd0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_unlockSound_FUN_00556fd0(void)

{
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 6223;
    core_main_c_displayErrorAndQuit_FUN_004e4330("unlockSound - sound was not locked!");
  }
  if (g_SoundLockCount == 1) {
    sound_sndmain_cpp_flushSoundChanges_FUN_00558f20();
  }
  g_SoundLockCount = g_SoundLockCount + -1;
  wincore_winrun_cpp_releaseMutex_FUN_00581990(g_SoundMutex);
  return;
}
