// Name: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_0055d0a0
// Address: 0055d0a0
// Address Range: [[0055d0a0, 0055d0da]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_0055d0a0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_0055d0a0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int sfx_handle;
  
  sfx_handle = slot->hardware_buffer_handle;
  if (((0 < sfx_handle) && (sfx_handle < 0x1f)) && (*(int *)(sfx_handle * 0x24 + 0x2cf500c) != 0)) {
    sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_0055a9f0(sfx_handle);
    return;
  }
  sound_sndmain_cpp_logSoundError_FUN_0055a560("DirectSoundDevice::killSfx - handle wasn't valid, call ignored");
  return;
}
