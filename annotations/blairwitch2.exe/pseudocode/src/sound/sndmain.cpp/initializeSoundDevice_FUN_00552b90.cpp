// Name: sound_sndmain.cpp_initializeSoundDevice_FUN_00552b90
// Address: 00552b90
// Address Range: [[00552b90, 00552c3c]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00552b90(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00552b90(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_closeSoundDevice_FUN_00552c40();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectSoundDevice_FUN_00552aa0(g_INT_0061bcac);
  if (-1 < g_INT_0061bcac) {
    if (g_SSoundDeviceInfo_ARRAY_026485c0[g_INT_0061bcac].api_type == 0) {
      g_CSoundDevice_PTR_02648e80 =
           &sound_sndwav_cpp_getWavOutDevice_FUN_005589e0
                      (g_SSoundDeviceInfo_ARRAY_026485c0[g_INT_0061bcac].device_id)->base;
    }
    if (g_SSoundDeviceInfo_ARRAY_026485c0[g_INT_0061bcac].api_type == 1) {
      g_CSoundDevice_PTR_02648e80 =
           &sound_snddx_cpp_getDirectSoundDevice_FUN_00557910
                      (g_SSoundDeviceInfo_ARRAY_026485c0[g_INT_0061bcac].device_id)->base;
    }
    if (g_CSoundDevice_PTR_02648e80 == (CSoundDevice *)0x0) {
      return 0;
    }
    g_INT_02648e88 =
         (*g_CSoundDevice_PTR_02648e80->vtable->hasHardware3D)(g_CSoundDevice_PTR_02648e80);
    return 1;
  }
  return 0;
}
