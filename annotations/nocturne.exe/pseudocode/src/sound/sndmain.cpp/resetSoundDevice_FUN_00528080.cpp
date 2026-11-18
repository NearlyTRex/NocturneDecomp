// Name: sound_sndmain.cpp_resetSoundDevice_FUN_00528080
// Address: 00528080
// Address Range: [[00528080, 005280b1]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_00528080(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_00528080(void)

{
  int iVar1;
  
  sound_sndmain_cpp_killAllSfx_FUN_005272b0();
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevicePtr->vtable->reset)(g_CSoundDevicePtr);
    if (iVar1 == 0) {
      return 0;
    }
  }
  g_SoundBusyFlag = 0;
  sound_sndmain_cpp_freeMixBuffers_FUN_005230d0();
  return 1;
}
