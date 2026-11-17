// Name: sound_sndmain.cpp_getSoundDeviceCount_FUN_00552890
// Address: 00552890
// Address Range: [[00552890, 0055291d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_00552890(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_00552890(void)

{
  int iVar1;
  UINT UVar2;
  
  if (-1 < g_INT_0061bca8) {
    return g_INT_0061bca8;
  }
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  g_INT_0061bca8 = 0;
  UVar2 = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavOutDevice_FUN_00558940
                      (UVar2,g_SSoundDeviceInfo_ARRAY_026485c0 + g_INT_0061bca8);
    if (iVar1 == 0) break;
    g_INT_0061bca8 = g_INT_0061bca8 + 1;
    UVar2 = UVar2 + 1;
  } while (g_INT_0061bca8 < 8);
  UVar2 = 0;
  while ((g_INT_0061bca8 < 8 &&
         (iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_00557860
                            (UVar2,g_SSoundDeviceInfo_ARRAY_026485c0 + g_INT_0061bca8), iVar1 != 0))
        ) {
    g_INT_0061bca8 = g_INT_0061bca8 + 1;
    UVar2 = UVar2 + 1;
  }
  return g_INT_0061bca8;
}
