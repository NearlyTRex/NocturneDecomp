// Name: sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
// Address: 005ab130
// Address Range: [[005ab130, 005ab161]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005ab130(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_resetSoundDevice_FUN_005ab130(void)

{
  int iVar1;
  
  sound_sndmain_cpp_killAllSfx_FUN_005a9cc0();
  if (g_CSoundDevicePtr != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevicePtr->vtable->reset)(g_CSoundDevicePtr);
    if (iVar1 == 0) {
      return 0;
    }
  }
  g_SoundBusyFlag = 0;
  sound_sndmain_cpp_freeMixBuffers_FUN_005a5900();
  return 1;
}
