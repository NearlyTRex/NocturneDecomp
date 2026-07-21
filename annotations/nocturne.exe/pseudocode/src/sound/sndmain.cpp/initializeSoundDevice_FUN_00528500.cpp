// Name: sound_sndmain.cpp_initializeSoundDevice_FUN_00528500
// Address: 00528500
// Address Range: [[00528500, 005285ac]]
// Convention: __cdecl
// Signature: undefined4 __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00528500(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00528500(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_closeSoundDevice_FUN_005285b0();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectSoundDevice_FUN_00528410(DAT_005bea74);
  if (-1 < DAT_005bea74) {
    if (*(int *)(DAT_005bea74 * 0x118 + 0x2dc7b58) == 0) {
      _DAT_02dc8318 =
           (int *)sound_sndwav_cpp_getWavOutDevice_FUN_0052c760
                            (*(uint *)(DAT_005bea74 * 0x118 + 0x2dc7b5c));
    }
    if (*(int *)(DAT_005bea74 * 0x118 + 0x2dc7b58) == 1) {
      _DAT_02dc8318 =
           (int *)sound_snddx_cpp_getDirectSoundDevice_FUN_0052bef0
                            (*(uint *)(DAT_005bea74 * 0x118 + 0x2dc7b5c));
    }
    if (_DAT_02dc8318 == (int *)0x0) {
      return 0;
    }
    _DAT_02dc8320 = (**(code **)(*_DAT_02dc8318 + 0x14))(_DAT_02dc8318);
    return 1;
  }
  return 0;
}
