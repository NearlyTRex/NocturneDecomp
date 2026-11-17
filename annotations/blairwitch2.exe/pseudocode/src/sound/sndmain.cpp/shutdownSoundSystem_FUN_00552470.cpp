// Name: sound_sndmain.cpp_shutdownSoundSystem_FUN_00552470
// Address: 00552470
// Address Range: [[00552470, 005524a3]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00552470(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_shutdownSoundSystem_FUN_00552470(void)

{
  if (0 < g_INT_0263ceec) {
    return;
  }
  g_INT_0263ceec = g_INT_0263ceec + 1;
  sound_sndmain_cpp_resetSoundDevice_FUN_005526b0();
  sound_sndmain_cpp_closeSoundDevice_FUN_00552c40();
  sound_sndmain_cpp_stopRecordingDevice_FUN_00553140();
  sound_sndmain_cpp_releaseRecordingDevice_FUN_00552f10();
  sound_sndmain_cpp_freeAllSamples_FUN_00551c70();
  g_INT_0263ceec = g_INT_0263ceec + -1;
  return;
}
