// Name: sound_snddx.cpp_CDirectSoundDevice_hasHardware3D_FUN_0055b700
// Address: 0055b700
// Address Range: [[0055b700, 0055b7ad]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_0055b700(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_0055b700(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  uint error_code;
  char acStack_1f4 [400];
  DSCAPS DStack_64;
  
  if (g_IDirectSound_PTR_02cf49c4 == (IDirectSound *)0x0) {
    iVar1 = 0;
  }
  else if (_DAT_02cf49d0 == 0) {
    memset(&DStack_64,0,0x60);
    DStack_64.dwSize = 0x60;
    error_code = (*g_IDirectSound_PTR_02cf49c4->vtable->GetCaps)
                           (g_IDirectSound_PTR_02cf49c4,&DStack_64);
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(error_code);
      _sprintf(acStack_1f4,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_1f4);
      return 0;
    }
    iVar1 = 0;
    if (DStack_64.dwMaxHwMixingStaticBuffers != 0) {
      return 1;
    }
  }
  else {
    iVar1 = 2;
  }
  return iVar1;
}
