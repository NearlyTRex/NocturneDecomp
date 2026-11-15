// Name: sound_snddx.cpp_CDirectSoundDevice_isSfxPlaying_FUN_00556ed0
// Address: 00556ed0
// Address Range: [[00556ed0, 00556f71]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_00556ed0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_isSfxPlaying_FUN_00556ed0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  uint error_code;
  int *piStack_19c;
  byte *puStack_198;
  byte bStack_c;
  byte auStack_4 [4];
  
  iVar1 = slot->hardware_buffer_handle;
  if (((0 < iVar1) && (iVar1 < 0x1f)) && (*(int *)(iVar1 * 0x24 + 0x264ac10) != 0)) {
    puStack_198 = auStack_4;
    piStack_19c = *(int **)(iVar1 * 0x24 + 0x264ac10);
    error_code = (**(code **)(*piStack_19c + 0x24))();
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(error_code);
      _sprintf((char *)&piStack_19c,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0((char *)&piStack_19c);
      return 0;
    }
    if ((bStack_c & 1) != 0) {
      return 1;
    }
  }
  return 0;
}
