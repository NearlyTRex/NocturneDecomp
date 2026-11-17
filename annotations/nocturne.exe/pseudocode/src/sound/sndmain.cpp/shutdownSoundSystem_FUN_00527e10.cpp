// Name: sound_sndmain.cpp_shutdownSoundSystem_FUN_00527e10
// Address: 00527e10
// Address Range: [[00527e10, 00527e34]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00527e10(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00527e10(void)

{
  if (0 < g_ShutdownInProgress) {
    return;
  }
  g_ShutdownInProgress = g_ShutdownInProgress + 1;
  sound_sndmain_cpp_resetSoundDevice_FUN_00528080();
  sound_sndmain_cpp_freeAllSamples_FUN_00527c30();
  g_ShutdownInProgress = g_ShutdownInProgress + -1;
  return;
}
