// Name: sound_sndmain.cpp_resetSoundDevice_FUN_00558250
// Address: 00558250
// Address Range: [[00558250, 00558281]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_00558250(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_00558250(void)

{
  int iVar1;
  
  sound_sndmain_cpp_killAllSfx_FUN_00556c60();
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevicePtr->vtable->reset)(g_CSoundDevicePtr);
    if (iVar1 == 0) {
      return 0;
    }
  }
  g_SoundBusyFlag = 0;
  sound_sndmain_cpp_freeMixBuffers_FUN_00552b30();
  return 1;
}
