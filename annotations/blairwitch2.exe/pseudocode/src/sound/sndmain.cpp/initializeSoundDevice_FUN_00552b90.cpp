// Name: sound_sndmain.cpp_initializeSoundDevice_FUN_00552b90
// Address: 00552b90
// Address Range: [[00552b90, 00552c3c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00552b90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00552b90(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_closeSoundDevice_FUN_00552c40();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectSoundDevice_FUN_00552aa0(DAT_0061bcac);
  if (-1 < DAT_0061bcac) {
    if (*(int *)(DAT_0061bcac * 0x118 + 0x26486c0) == 0) {
      _DAT_02648e80 =
           sound_sndwav_cpp_getWavOutDevice_FUN_005589e0
                     (*(UINT *)(DAT_0061bcac * 0x118 + 0x26486c4));
    }
    if (*(int *)(DAT_0061bcac * 0x118 + 0x26486c0) == 1) {
      _DAT_02648e80 =
           (CWavOutDevice *)
           sound_snddx_cpp_getDirectSoundDevice_FUN_00557910
                     (*(UINT *)(DAT_0061bcac * 0x118 + 0x26486c4));
    }
    if (_DAT_02648e80 == (CWavOutDevice *)0x0) {
      return 0;
    }
    _DAT_02648e88 = (*((_DAT_02648e80->base).vtable)->hasHardware3D)(&_DAT_02648e80->base);
    return 1;
  }
  return 0;
}
