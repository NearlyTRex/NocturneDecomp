// Name: sound_sndmain.cpp_initializeSoundDevice_FUN_005755c0
// Address: 005755c0
// Address Range: [[005755c0, 0057566c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_005755c0(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_closeSoundDevice_FUN_00575670();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectSoundDevice_FUN_005754d0(g_INT_006232fc);
  if (-1 < g_INT_006232fc) {
    if (g_SSoundDeviceInfo_ARRAY_02c7fd90[g_INT_006232fc].api_type == 0) {
      g_CSoundDevice_PTR_02c80650 =
           &sound_sndwav_cpp_getWavOutDevice_FUN_0057b410
                      (g_SSoundDeviceInfo_ARRAY_02c7fd90[g_INT_006232fc].device_id)->base;
    }
    if (g_SSoundDeviceInfo_ARRAY_02c7fd90[g_INT_006232fc].api_type == 1) {
      g_CSoundDevice_PTR_02c80650 =
           &sound_snddx_cpp_getDirectSoundDevice_FUN_0057a340
                      (g_SSoundDeviceInfo_ARRAY_02c7fd90[g_INT_006232fc].device_id)->base;
    }
    if (g_CSoundDevice_PTR_02c80650 == (CSoundDevice *)0x0) {
      return 0;
    }
    g_INT_02c80658 =
         (*g_CSoundDevice_PTR_02c80650->vtable->hasHardware3D)(g_CSoundDevice_PTR_02c80650);
    return 1;
  }
  return 0;
}
