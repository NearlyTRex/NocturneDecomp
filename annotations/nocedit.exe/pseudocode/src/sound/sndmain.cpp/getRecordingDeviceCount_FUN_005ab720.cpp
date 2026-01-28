// Name: sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
// Address: 005ab720
// Address Range: [[005ab720, 005ab77d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_005ab720(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_005ab720(void)

{
  int iVar1;
  UINT device_id;
  
  if (-1 < g_RecordingDeviceCount) {
    return g_RecordingDeviceCount;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  g_RecordingDeviceCount = 0;
  device_id = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavInDevice_FUN_005b1560
                      (device_id,g_RecordingDevices + g_RecordingDeviceCount);
    if (iVar1 == 0) {
      return g_SoundDeviceCount;
    }
    g_RecordingDeviceCount = g_RecordingDeviceCount + 1;
    device_id = device_id + 1;
  } while (g_RecordingDeviceCount < 8);
  return g_SoundDeviceCount;
}
