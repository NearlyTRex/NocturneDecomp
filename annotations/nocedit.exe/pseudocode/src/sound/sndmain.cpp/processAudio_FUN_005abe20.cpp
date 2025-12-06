// Name: sound_sndmain.cpp_processAudio_FUN_005abe20
// Address: 005abe20
// Address Range: [[005abe20, 005abe96]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_processAudio_FUN_005abe20(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_processAudio_FUN_005abe20(void)

{
  int iVar1;
  
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = wincore_winrun_cpp_waitForMutexTimeout_FUN_005f4010
                      (g_SoundMutex,g_AudioLatencySeconds * 3);
    if (iVar1 != 0) {
      g_SoundLockCount = g_SoundLockCount + 1;
      (*g_CSoundDevicePtr->vtable->poll)(g_CSoundDevicePtr);
      sound_sndmain_cpp_pollAllStreams_FUN_005ace90(0);
      g_SoundLockCount = g_SoundLockCount + -1;
      wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_SoundMutex);
      return;
    }
  }
  return;
}
