// Name: sound_sndmain.cpp_unlockSound_FUN_005abdc0
// Address: 005abdc0
// Address Range: [[005abdc0, 005abe10]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_unlockSound_FUN_005abdc0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_unlockSound_FUN_005abdc0(void)

{
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x1586;
    core_main_c_displayErrorAndQuit_FUN_00506f10("unlockSound - sound was not locked!");
  }
  g_SoundLockCount = g_SoundLockCount + -1;
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_SoundMutex);
  return;
}
