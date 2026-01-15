// Name: sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0
// Address: 005aaeb0
// Address Range: [[005aaeb0, 005aaee3]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_005aaeb0(void)

{
  if (0 < g_ShutdownInProgress) {
    return;
  }
  g_ShutdownInProgress = g_ShutdownInProgress + 1;
  sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
  sound_sndmain_cpp_closeSoundDevice_FUN_005ab660();
  sound_sndmain_cpp_stopRecordingDevice_FUN_005abb60();
  sound_sndmain_cpp_releaseRecordingDevice_FUN_005ab930();
  sound_sndmain_cpp_freeAllSamples_FUN_005aa660();
  g_ShutdownInProgress = g_ShutdownInProgress + -1;
  return;
}
