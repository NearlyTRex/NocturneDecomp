// Name: sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
// Address: 005a96c0
// Address Range: [[005a96c0, 005a96d1]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0(int enable)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0(int enable)

{
  int iVar1;
  
  g_SoundEnabled = enable;
  if (enable == 0) {
    return 0;
  }
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
