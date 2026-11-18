// Name: sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730
// Address: 00575730
// Address Range: [[00575730, 0057578d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_00575730(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_00575730(void)

{
  int iVar1;
  UINT device_id;
  
  if (-1 < g_RecordingDeviceCount) {
    return g_RecordingDeviceCount;
  }
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  g_RecordingDeviceCount = 0;
  device_id = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavInDevice_FUN_0057b460
                      (device_id,g_RecordingDevices + g_RecordingDeviceCount);
    if (iVar1 == 0) {
      return g_SoundDeviceCount;
    }
    g_RecordingDeviceCount = g_RecordingDeviceCount + 1;
    device_id = device_id + 1;
  } while (g_RecordingDeviceCount < 8);
  return g_SoundDeviceCount;
}
