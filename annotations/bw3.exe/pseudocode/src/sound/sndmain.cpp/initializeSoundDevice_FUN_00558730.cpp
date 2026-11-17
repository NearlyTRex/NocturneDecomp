// Name: sound_sndmain.cpp_initializeSoundDevice_FUN_00558730
// Address: 00558730
// Address Range: [[00558730, 005587dc]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00558730(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_initializeSoundDevice_FUN_00558730(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_closeSoundDevice_FUN_005587e0();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectSoundDevice_FUN_00558640(g_INT_0060423c);
  if (-1 < g_INT_0060423c) {
    if (g_SSoundDeviceInfo_ARRAY_02cf29c0[g_INT_0060423c].api_type == 0) {
      g_CSoundDevice_PTR_02cf3280 =
           &sound_sndwav_cpp_getWavOutDevice_FUN_0055e540
                      (g_SSoundDeviceInfo_ARRAY_02cf29c0[g_INT_0060423c].device_id)->base;
    }
    if (g_SSoundDeviceInfo_ARRAY_02cf29c0[g_INT_0060423c].api_type == 1) {
      g_CSoundDevice_PTR_02cf3280 =
           &sound_snddx_cpp_getDirectSoundDevice_FUN_0055d470
                      (g_SSoundDeviceInfo_ARRAY_02cf29c0[g_INT_0060423c].device_id)->base;
    }
    if (g_CSoundDevice_PTR_02cf3280 == (CSoundDevice *)0x0) {
      return 0;
    }
    g_INT_02cf3288 =
         (*g_CSoundDevice_PTR_02cf3280->vtable->hasHardware3D)(g_CSoundDevice_PTR_02cf3280);
    return 1;
  }
  return 0;
}
