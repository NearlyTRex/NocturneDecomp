// Name: sound_sndmain.cpp_setCurrentListener_FUN_00573eb0
// Address: 00573eb0
// Address Range: [[00573eb0, 00573ebf]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_setCurrentListener_FUN_00573eb0(int listener_index)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_setCurrentListener_FUN_00573eb0(int listener_index)

{
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  g_INT_02c7fc88 = listener_index;
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 6204;
    core_main_c_displayErrorAndQuit_FUN_005030e0("unlockSound - sound was not locked!");
  }
  if (g_SoundLockCount == 1) {
    sound_sndmain_cpp_flushSoundChanges_FUN_00575db0();
  }
  g_SoundLockCount = g_SoundLockCount + -1;
  wincore_winrun_cpp_releaseMutex_FUN_005b37b0(g_SoundMutex);
  return;
}
