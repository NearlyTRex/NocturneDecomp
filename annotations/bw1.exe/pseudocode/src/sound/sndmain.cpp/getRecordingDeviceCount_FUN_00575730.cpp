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
  
  if (-1 < g_INT_00623318) {
    return g_INT_00623318;
  }
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  g_INT_00623318 = 0;
  device_id = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavInDevice_FUN_0057b460
                      (device_id,g_SRecordingDeviceInfo_ARRAY_02c807f8 + g_INT_00623318);
    if (iVar1 == 0) {
      return g_INT_006232f8;
    }
    g_INT_00623318 = g_INT_00623318 + 1;
    device_id = device_id + 1;
  } while (g_INT_00623318 < 8);
  return g_INT_006232f8;
}
