// Name: sound_sndmain.cpp_initializeRecordingDevice_FUN_005758e0
// Address: 005758e0
// Address Range: [[005758e0, 0057593b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_initializeRecordingDevice_FUN_005758e0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_initializeRecordingDevice_FUN_005758e0(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_releaseRecordingDevice_FUN_00575940();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectRecordingDevice_FUN_00575870(g_INT_0062331c);
  if (-1 < g_INT_0062331c) {
    if (g_SRecordingDeviceInfo_ARRAY_02c807f8[g_INT_0062331c].api_type == 0) {
      g_CSoundDevice_PTR_02c81038 =
           &sound_sndwav_cpp_getWavInDevice_FUN_0057b500
                      (g_SRecordingDeviceInfo_ARRAY_02c807f8[g_INT_0062331c].device_id)->base;
    }
    if (g_CSoundDevice_PTR_02c81038 != (CSoundDevice *)0x0) {
      return 1;
    }
  }
  return 0;
}
