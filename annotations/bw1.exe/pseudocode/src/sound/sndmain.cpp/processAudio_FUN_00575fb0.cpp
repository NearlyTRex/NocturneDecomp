// Name: sound_sndmain.cpp_processAudio_FUN_00575fb0
// Address: 00575fb0
// Address Range: [[00575fb0, 00576026]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_processAudio_FUN_00575fb0(void)

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_processAudio_FUN_00575fb0(void)

{
  int iVar1;
  
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = wincore_winrun_cpp_waitForMutexTimeout_FUN_005b3770
                      (g_SoundMutex,(double)(g_FLOAT_02c807dc * 3.0f));
    if (iVar1 != 0) {
      g_SoundLockCount = g_SoundLockCount + 1;
      (*g_CSoundDevicePtr->vtable->poll)(g_CSoundDevicePtr);
      sound_sndmain_cpp_pollAllStreams_FUN_00577040(0);
      g_SoundLockCount = g_SoundLockCount + -1;
      wincore_winrun_cpp_releaseMutex_FUN_005b37b0(g_SoundMutex);
      return;
    }
  }
  return;
}
