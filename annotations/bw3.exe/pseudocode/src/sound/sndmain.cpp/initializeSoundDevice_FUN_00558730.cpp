// Name: sound_sndmain.cpp_initializeSoundDevice_FUN_00558730
// Address: 00558730
// Address Range: [[00558730, 005587dc]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00558730(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00558730(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_closeSoundDevice_FUN_005587e0();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectSoundDevice_FUN_00558640(DAT_0060423c);
  if (-1 < DAT_0060423c) {
    if (*(int *)(DAT_0060423c * 0x118 + 0x2cf2ac0) == 0) {
      _DAT_02cf3280 =
           sound_sndwav_cpp_getWavOutDevice_FUN_0055e540
                     (*(UINT *)(DAT_0060423c * 0x118 + 0x2cf2ac4));
    }
    if (*(int *)(DAT_0060423c * 0x118 + 0x2cf2ac0) == 1) {
      _DAT_02cf3280 =
           (CWavOutDevice *)
           sound_snddx_cpp_getDirectSoundDevice_FUN_0055d470
                     (*(UINT *)(DAT_0060423c * 0x118 + 0x2cf2ac4));
    }
    if (_DAT_02cf3280 == (CWavOutDevice *)0x0) {
      return 0;
    }
    _DAT_02cf3288 = (*((_DAT_02cf3280->base).vtable)->hasHardware3D)(&_DAT_02cf3280->base);
    return 1;
  }
  return 0;
}
