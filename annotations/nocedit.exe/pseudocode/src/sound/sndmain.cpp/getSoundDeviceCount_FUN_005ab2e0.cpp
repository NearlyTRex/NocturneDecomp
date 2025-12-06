// Name: sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0
// Address: 005ab2e0
// Address Range: [[005ab2e0, 005ab36d]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_getSoundDeviceCount_FUN_005ab2e0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getSoundDeviceCount_FUN_005ab2e0(void)

{
  int iVar1;
  UINT UVar2;
  
  if (-1 < g_SoundDeviceCount) {
    return g_SoundDeviceCount;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  g_SoundDeviceCount = 0;
  UVar2 = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavOutDevice_FUN_005b1470
                      (UVar2,g_SoundDevices + g_SoundDeviceCount);
    if (iVar1 == 0) break;
    g_SoundDeviceCount = g_SoundDeviceCount + 1;
    UVar2 = UVar2 + 1;
  } while (g_SoundDeviceCount < 8);
  UVar2 = 0;
  while ((g_SoundDeviceCount < 8 &&
         (iVar1 = sound_snddx_cpp_enumerateDirectSoundDevice_FUN_005b0390
                            (UVar2,g_SoundDevices + g_SoundDeviceCount), iVar1 != 0))) {
    g_SoundDeviceCount = g_SoundDeviceCount + 1;
    UVar2 = UVar2 + 1;
  }
  return g_SoundDeviceCount;
}
