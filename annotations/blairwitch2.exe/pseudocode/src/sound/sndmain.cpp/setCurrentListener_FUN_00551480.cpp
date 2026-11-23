// Name: sound_sndmain.cpp_setCurrentListener_FUN_00551480
// Address: 00551480
// Address Range: [[00551480, 0055148f]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setCurrentListener_FUN_00551480(int listener_index)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setCurrentListener_FUN_00551480(int listener_index)

{
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  g_INT_026484b8 = listener_index;
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 6213;
    core_main_c_displayErrorAndQuit_FUN_004e4500("unlockSound - sound was not locked!");
  }
  if (g_SoundLockCount == 1) {
    sound_sndmain_cpp_flushSoundChanges_FUN_00553380();
  }
  g_SoundLockCount = g_SoundLockCount + -1;
  wincore_winrun_cpp_releaseMutex_FUN_0058fd00(g_SoundMutex);
  return;
}
