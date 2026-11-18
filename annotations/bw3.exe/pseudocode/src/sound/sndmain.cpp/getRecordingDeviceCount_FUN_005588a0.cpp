// Name: sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0
// Address: 005588a0
// Address Range: [[005588a0, 005588fd]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_005588a0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_005588a0(void)

{
  int iVar1;
  UINT device_id;
  
  if (-1 < g_RecordingDeviceCount) {
    return g_RecordingDeviceCount;
  }
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  sound_sndmain_cpp_unlockSound_FUN_00556fd0();
  g_RecordingDeviceCount = 0;
  device_id = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavInDevice_FUN_0055e590
                      (device_id,g_RecordingDevices + g_RecordingDeviceCount);
    if (iVar1 == 0) {
      return g_SoundDeviceCount;
    }
    g_RecordingDeviceCount = g_RecordingDeviceCount + 1;
    device_id = device_id + 1;
  } while (g_RecordingDeviceCount < 8);
  return g_SoundDeviceCount;
}
