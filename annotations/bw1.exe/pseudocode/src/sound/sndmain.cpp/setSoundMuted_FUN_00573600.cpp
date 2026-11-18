// Name: sound_sndmain.cpp_setSoundMuted_FUN_00573600
// Address: 00573600
// Address Range: [[00573600, 00573611]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_00573600(int muted)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSoundMuted_FUN_00573600(int muted)

{
  int iVar1;
  
  g_SoundMuted = muted;
  if (muted == 0) {
    return 0;
  }
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
