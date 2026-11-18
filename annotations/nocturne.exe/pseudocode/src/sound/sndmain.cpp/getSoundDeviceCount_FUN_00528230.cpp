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
  
  if (-1 < g_SoundDeviceCount) {
    return g_SoundDeviceCount;
  }
  sound_sndmain_cpp_lockSound_FUN_00528800();
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  g_SoundDeviceCount = 0;
  UVar2 = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavOutDevice_FUN_0052c6c0
                      (UVar2,g_SoundDevices + g_SoundDeviceCount);
    if (iVar1 == 0) break;
    g_SoundDeviceCount = g_SoundDeviceCount + 1;
    UVar2 = UVar2 + 1;
  } while (g_SoundDeviceCount < 8);
  UVar2 = 0;
  while ((g_SoundDeviceCount < 8 &&
         (iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_0052be40
                            (UVar2,g_SoundDevices + g_SoundDeviceCount), iVar1 != 0))) {
    g_SoundDeviceCount = g_SoundDeviceCount + 1;
    UVar2 = UVar2 + 1;
  }
  return g_SoundDeviceCount;
}
