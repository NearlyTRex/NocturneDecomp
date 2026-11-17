// Name: sound_sndmain.cpp_lockSound_FUN_00528800
// Address: 00528800
// Address Range: [[00528800, 00528886]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_lockSound_FUN_00528800(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_lockSound_FUN_00528800(void)

{
  if (g_SoundMutex == (HANDLE)0x0) {
    g_SoundMutex = wincore_winrun_cpp_createMutex_FUN_00559bc0();
    if (g_SoundMutex == (HANDLE)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 4860;
      core_main_c_displayErrorAndQuit_FUN_004c8440("lockSound - unable to create mutex object");
    }
  }
  wincore_winrun_cpp_waitForMutex_FUN_00559bd0(g_SoundMutex);
  g_SoundLockCount = g_SoundLockCount + 1;
  if (g_SoundLockCount < 100) {
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 4870;
  core_main_c_displayErrorAndQuit_FUN_004c8440("lockSound - lock imbalance?");
  return;
}
