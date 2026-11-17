// Name: sound_sndmain.cpp_shutdownSoundSystem_FUN_00558010
// Address: 00558010
// Address Range: [[00558010, 00558043]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00558010(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00558010(void)

{
  if (0 < g_ShutdownInProgress) {
    return;
  }
  g_ShutdownInProgress = g_ShutdownInProgress + 1;
  sound_sndmain_cpp_resetSoundDevice_FUN_00558250();
  sound_sndmain_cpp_closeSoundDevice_FUN_005587e0();
  sound_sndmain_cpp_stopRecordingDevice_FUN_00558ce0();
  sound_sndmain_cpp_releaseRecordingDevice_FUN_00558ab0();
  sound_sndmain_cpp_freeAllSamples_FUN_00557800();
  g_ShutdownInProgress = g_ShutdownInProgress + -1;
  return;
}
