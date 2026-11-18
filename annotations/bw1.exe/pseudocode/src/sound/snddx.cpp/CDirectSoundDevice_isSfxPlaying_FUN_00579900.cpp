// Name: sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_00579900
// Address: 00579900
// Address Range: [[00579900, 005799a1]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_00579900(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_00579900(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  uint error_code;
  char acStack_194 [400];
  byte abStack_4 [4];
  
  iVar1 = slot->hardware_buffer_handle;
  if (((0 < iVar1) && (iVar1 < 0x1f)) &&
     (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9] != (IDirectSoundBuffer *)0x0)) {
    error_code = (*g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9]->vtable->GetStatus)
                           (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9],(LPDWORD)abStack_4);
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(error_code);
      _sprintf(acStack_194,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_194);
      return 0;
    }
    if ((abStack_4[0] & 1) != 0) {
      return 1;
    }
  }
  return 0;
}
