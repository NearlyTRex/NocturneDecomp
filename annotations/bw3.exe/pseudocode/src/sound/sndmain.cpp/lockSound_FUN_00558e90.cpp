// Name: sound_sndmain.cpp_lockSound_FUN_00558e90
// Address: 00558e90
// Address Range: [[00558e90, 00558f16]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_lockSound_FUN_00558e90(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_lockSound_FUN_00558e90(void)

{
  if (g_SoundMutex == (HANDLE)0x0) {
    g_SoundMutex = wincore_winrun_cpp_createMutex_FUN_00581920();
    if (g_SoundMutex == (HANDLE)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 6119;
      core_main_c_displayErrorAndQuit_FUN_004e4330("lockSound - unable to create mutex object");
    }
  }
  wincore_winrun_cpp_waitForMutex_FUN_00581930(g_SoundMutex);
  g_SoundLockCount = g_SoundLockCount + 1;
  if (g_SoundLockCount < 100) {
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 6130;
  core_main_c_displayErrorAndQuit_FUN_004e4330("lockSound - lock imbalance?");
  return;
}
