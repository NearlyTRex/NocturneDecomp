// Name: sound_snddx.cpp_CDirectSoundDevice_hasHardware3D_FUN_00555b60
// Address: 00555b60
// Address Range: [[00555b60, 00555c0d]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_00555b60(CDirectSoundDevice *this_ptr)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_hasHardware3D_FUN_00555b60(CDirectSoundDevice *this_ptr)

{
  int iVar1;
  uint error_code;
  char acStack_1f4 [400];
  DSCAPS DStack_64;
  
  if (g_DirectSound == (IDirectSound *)0x0) {
    iVar1 = 0;
  }
  else if (g_DirectSound3DListener == (IDirectSound3DListener *)0x0) {
    memset(&DStack_64,0,0x60);
    DStack_64.dwSize = 0x60;
    error_code = (*g_DirectSound->vtable->GetCaps)(g_DirectSound,&DStack_64);
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(error_code);
      _sprintf(acStack_1f4,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_1f4);
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
