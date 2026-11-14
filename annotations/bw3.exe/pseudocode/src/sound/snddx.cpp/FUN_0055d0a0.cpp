// Name: sound_snddx.cpp_FUN_0055d0a0
// Address: 0055d0a0
// Address Range: [[0055d0a0, 0055d0da]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_0055d0a0(undefined4 param_1,int param_2)

#include "nocturne.h"

void sound_snddx_cpp_FUN_0055d0a0(uint param_1,int param_2)

{
  int sfx_handle;
  
  sfx_handle = *(int *)(param_2 + 0x60);
  if (((0 < sfx_handle) && (sfx_handle < 0x1f)) && (*(int *)(sfx_handle * 0x24 + 0x2cf500c) != 0)) {
    sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_0055a9f0(sfx_handle);
    return;
  }
  sound_sndmain_cpp_logSoundError_FUN_0055a560("DirectSoundDevice::killSfx - handle wasn't valid, call ignored");
  return;
}
