// Name: sound_snddx.cpp_CDirectSoundDevice_killSfx_FUN_00557500
// Address: 00557500
// Address Range: [[00557500, 0055753a]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_00557500(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_killSfx_FUN_00557500(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int sfx_handle;
  
  sfx_handle = slot->hardware_buffer_handle;
  if (((0 < sfx_handle) && (sfx_handle < 0x1f)) && (*(int *)(sfx_handle * 0x24 + 0x264ac10) != 0)) {
    sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00554e50(sfx_handle);
    return;
  }
  sound_sndmain_cpp_logSoundError_FUN_005549c0("DirectSoundDevice::killSfx - handle wasn't valid, call ignored");
  return;
}
