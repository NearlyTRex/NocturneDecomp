// Name: sound_sndmain.cpp_getSoundDeviceCount_FUN_00528230
// Address: 00528230
// Address Range: [[00528230, 005282bd]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_00528230(void)

{
  int iVar1;
  UINT UVar2;
  
  if (-1 < g_INT_005bea70) {
    return g_INT_005bea70;
  }
  sound_sndmain_cpp_lockSound_FUN_00528800();
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  g_INT_005bea70 = 0;
  UVar2 = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavOutDevice_FUN_0052c6c0
                      (UVar2,g_SSoundDeviceInfo_ARRAY_02dc7a58 + g_INT_005bea70);
    if (iVar1 == 0) break;
    g_INT_005bea70 = g_INT_005bea70 + 1;
    UVar2 = UVar2 + 1;
  } while (g_INT_005bea70 < 8);
  UVar2 = 0;
  while ((g_INT_005bea70 < 8 &&
         (iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40
                            (UVar2,g_SSoundDeviceInfo_ARRAY_02dc7a58 + g_INT_005bea70), iVar1 != 0))
        ) {
    g_INT_005bea70 = g_INT_005bea70 + 1;
    UVar2 = UVar2 + 1;
  }
  return g_INT_005bea70;
}
