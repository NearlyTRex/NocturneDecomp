// Name: sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0
// Address: 005afcc0
// Address Range: [[005afcc0, 005afd5e]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0(CDirectSoundDevice * this_ptr, CSfxSlot * slot)

#include "nocturne.h"

int __cdecl
sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_005afcc0
          (CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  uint error_code;
  char *pcVar2;
  char acStack_194 [400];
  byte local_4 [4];
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((0 < iVar1) && (iVar1 < 0x1f)) &&
      (g_DirectSoundHardwareSfxBuffers[iVar1] != (IDirectSoundBuffer *)0x0)) &&
     (g_DirectSound3DBufferInterfaces[iVar1] != (IDirectSound3DBuffer *)0x0)) {
    error_code = (*g_DirectSoundHardwareSfxBuffers[iVar1]->vtable->GetStatus)
                           (g_DirectSoundHardwareSfxBuffers[iVar1],(LPDWORD)local_4);
    if (error_code != 0) {
      pcVar2 = sound_snddx_cpp_getDirectSoundErrorString_FUN_005ade70(error_code);
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_194,"DirectSux: Unable to %s.  (%s)","Get active sfx secondary buffer status",
                 pcVar2);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_194);
      return 0;
    }
    if ((local_4[0] & 1) != 0) {
      return 1;
    }
  }
  return 0;
}
