// Name: sound_sndmain.cpp_lockSound_FUN_005abd30
// Address: 005abd30
// Address Range: [[005abd30, 005abdb6]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_lockSound_FUN_005abd30(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_lockSound_FUN_005abd30(void)

{
  if (g_SoundMutex == (HANDLE)0x0) {
    g_SoundMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    if (g_SoundMutex == (HANDLE)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x1575;
      core_main_c_displayErrorAndQuit_FUN_00506f10("lockSound - unable to create mutex object");
    }
  }
  wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_SoundMutex);
  g_SoundLockCount = g_SoundLockCount + 1;
  if (g_SoundLockCount < 100) {
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 0x157f;
  core_main_c_displayErrorAndQuit_FUN_00506f10("lockSound - lock imbalance?");
  return;
}
