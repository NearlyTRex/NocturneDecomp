// Name: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_00579f30
// Address: 00579f30
// Address Range: [[00579f30, 00579f6a]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_00579f30(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_00579f30(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int sfx_handle;
  
  sfx_handle = slot->hardware_buffer_handle;
  if (((0 < sfx_handle) && (sfx_handle < 0x1f)) && (*(int *)(sfx_handle * 0x24 + 0x2c823e0) != 0)) {
    sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00577880(sfx_handle);
    return;
  }
  sound_sndmain_cpp_logSoundError_FUN_005773f0("DirectSoundDevice::killSfx - handle wasn't valid, call ignored");
  return;
}
