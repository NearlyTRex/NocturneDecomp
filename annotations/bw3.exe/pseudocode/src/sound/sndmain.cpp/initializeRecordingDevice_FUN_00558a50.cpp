// Name: sound_sndmain.cpp_initializeRecordingDevice_FUN_00558a50
// Address: 00558a50
// Address Range: [[00558a50, 00558aab]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_initializeRecordingDevice_FUN_00558a50(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_initializeRecordingDevice_FUN_00558a50(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_releaseRecordingDevice_FUN_00558ab0();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectRecordingDevice_FUN_005589e0(g_INT_00604258);
  if (-1 < g_INT_00604258) {
    if (g_SRecordingDeviceInfo_ARRAY_02cf3428[g_INT_00604258].api_type == 0) {
      g_CSoundDevice_PTR_02cf3c68 =
           &sound_sndwav_cpp_getWavInDevice_FUN_0055e630
                      (g_SRecordingDeviceInfo_ARRAY_02cf3428[g_INT_00604258].device_id)->base;
    }
    if (g_CSoundDevice_PTR_02cf3c68 != (CSoundDevice *)0x0) {
      return 1;
    }
  }
  return 0;
}
