// Name: sound_sndmain.cpp_initializeSoundDevice_FUN_00528500
// Address: 00528500
// Address Range: [[00528500, 005285ac]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00528500(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00528500(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_closeSoundDevice_FUN_005285b0();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectSoundDevice_FUN_00528410(g_INT_005bea74);
  if (-1 < g_INT_005bea74) {
    if (g_SSoundDeviceInfo_ARRAY_02dc7a58[g_INT_005bea74].api_type == 0) {
      g_CSoundDevice_PTR_02dc8318 =
           &sound_sndwav_cpp_getWavOutDevice_FUN_0052c760
                      (g_SSoundDeviceInfo_ARRAY_02dc7a58[g_INT_005bea74].device_id)->base;
    }
    if (g_SSoundDeviceInfo_ARRAY_02dc7a58[g_INT_005bea74].api_type == 1) {
      g_CSoundDevice_PTR_02dc8318 =
           &sound_snddx_cpp_getDirectSoundDevice_FUN_0052bef0
                      (g_SSoundDeviceInfo_ARRAY_02dc7a58[g_INT_005bea74].device_id)->base;
    }
    if (g_CSoundDevice_PTR_02dc8318 == (CSoundDevice *)0x0) {
      return 0;
    }
    g_INT_02dc8320 =
         (*g_CSoundDevice_PTR_02dc8318->vtable->hasHardware3D)(g_CSoundDevice_PTR_02dc8318);
    return 1;
  }
  return 0;
}
