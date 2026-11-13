// Name: sound_sndmain.cpp_getSoundDeviceCount_FUN_005752c0
// Address: 005752c0
// Address Range: [[005752c0, 0057534d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_005752c0(void)

{
  int iVar1;
  UINT UVar2;
  
  if (-1 < DAT_006232f8) {
    return DAT_006232f8;
  }
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  DAT_006232f8 = 0;
  UVar2 = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavOutDevice_FUN_0057b370
                      (UVar2,(SSoundDeviceInfo *)(DAT_006232f8 * 0x118 + 0x2c7fd90));
    if (iVar1 == 0) break;
    DAT_006232f8 = DAT_006232f8 + 1;
    UVar2 = UVar2 + 1;
  } while (DAT_006232f8 < 8);
  UVar2 = 0;
  while ((DAT_006232f8 < 8 &&
         (iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0057a290
                            (UVar2,(SSoundDeviceInfo *)(DAT_006232f8 * 0x118 + 0x2c7fd90)),
         iVar1 != 0))) {
    DAT_006232f8 = DAT_006232f8 + 1;
    UVar2 = UVar2 + 1;
  }
  return DAT_006232f8;
}
