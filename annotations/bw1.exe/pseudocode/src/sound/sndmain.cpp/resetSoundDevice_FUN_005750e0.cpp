// Name: sound_sndmain.cpp_resetSoundDevice_FUN_005750e0
// Address: 005750e0
// Address Range: [[005750e0, 00575111]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005750e0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005750e0(void)

{
  int iVar1;
  
  sound_sndmain_cpp_killAllSfx_FUN_00573b00();
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevicePtr->vtable->reset)(g_CSoundDevicePtr);
    if (iVar1 == 0) {
      return 0;
    }
  }
  g_SoundBusyFlag = 0;
  sound_sndmain_cpp_freeMixBuffers_FUN_0056f630();
  return 1;
}
