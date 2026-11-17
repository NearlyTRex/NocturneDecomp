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
  sound_sndmain_cpp_selectRecordingDevice_FUN_00575870(g_CurrentRecordingDevice);
  if (-1 < g_CurrentRecordingDevice) {
    if (g_RecordingDevices[g_CurrentRecordingDevice].api_type == 0) {
      g_RecordingDeviceInterface =
           &sound_sndwav_cpp_getWavInDevice_FUN_0057b500
                      (g_RecordingDevices[g_CurrentRecordingDevice].device_id)->base;
    }
    if (g_RecordingDeviceInterface != (CSoundDevice *)0x0) {
      return 1;
    }
  }
  return 0;
}
