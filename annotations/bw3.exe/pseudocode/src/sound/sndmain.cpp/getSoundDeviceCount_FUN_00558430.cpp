// Name: sound_sndmain.cpp_getSoundDeviceCount_FUN_00558430
// Address: 00558430
// Address Range: [[00558430, 005584bd]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_00558430(void)

{
  int iVar1;
  UINT UVar2;
  
  if (-1 < DAT_00604238) {
    return DAT_00604238;
  }
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  DAT_00604238 = 0;
  UVar2 = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavOutDevice_FUN_0055e4a0
                      (UVar2,(SSoundDeviceInfo *)(DAT_00604238 * 0x118 + 0x2cf29c0));
    if (iVar1 == 0) break;
    DAT_00604238 = DAT_00604238 + 1;
    UVar2 = UVar2 + 1;
  } while (DAT_00604238 < 8);
  UVar2 = 0;
  while ((DAT_00604238 < 8 &&
         (iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0055d3c0
                            (UVar2,(SSoundDeviceInfo *)(DAT_00604238 * 0x118 + 0x2cf29c0)),
         iVar1 != 0))) {
    DAT_00604238 = DAT_00604238 + 1;
    UVar2 = UVar2 + 1;
  }
  return DAT_00604238;
}
