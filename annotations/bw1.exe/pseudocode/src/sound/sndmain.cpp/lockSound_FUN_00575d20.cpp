// Name: sound_sndmain.cpp_lockSound_FUN_00575d20
// Address: 00575d20
// Address Range: [[00575d20, 00575da6]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_lockSound_FUN_00575d20(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_lockSound_FUN_00575d20(void)

{
  if (g_SoundMutex == (HANDLE)0x0) {
    g_SoundMutex = wincore_winrun_cpp_createMutex_FUN_005b3740();
    if (g_SoundMutex == (HANDLE)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 6100;
      core_main_c_displayErrorAndQuit_FUN_005030e0("lockSound - unable to create mutex object");
    }
  }
  wincore_winrun_cpp_waitForMutex_FUN_005b3750(g_SoundMutex);
  g_SoundLockCount = g_SoundLockCount + 1;
  if (g_SoundLockCount < 100) {
    return;
  }
  g_CurrentFilename = "..\\sound\\sndmain.cpp";
  g_CurrentLineNumber = 6111;
  core_main_c_displayErrorAndQuit_FUN_005030e0("lockSound - lock imbalance?");
  return;
}
