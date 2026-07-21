// Name: sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230
// Address: 00528230
// Address Range: [[00528230, 005282bd]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230(void)

{
  int iVar1;
  int iVar2;
  
  if (-1 < DAT_005bea70) {
    return DAT_005bea70;
  }
  sound_sndmain_cpp_lockSound_FUN_00528800();
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  DAT_005bea70 = 0;
  iVar2 = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavOutDevice_FUN_0052c6c0
                      (iVar2,DAT_005bea70 * 0x118 + 0x2dc7a58);
    if (iVar1 == 0) break;
    DAT_005bea70 = DAT_005bea70 + 1;
    iVar2 = iVar2 + 1;
  } while (DAT_005bea70 < 8);
  iVar2 = 0;
  while ((DAT_005bea70 < 8 &&
         (iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40
                            (iVar2,DAT_005bea70 * 0x118 + 0x2dc7a58), iVar1 != 0))) {
    DAT_005bea70 = DAT_005bea70 + 1;
    iVar2 = iVar2 + 1;
  }
  return DAT_005bea70;
}
