// Name: sound_sndmain.cpp_getRecordingDeviceCount_FUN_00552d00
// Address: 00552d00
// Address Range: [[00552d00, 00552d5d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_00552d00(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_00552d00(void)

{
  int iVar1;
  UINT device_id;
  
  if (-1 < g_INT_0061bcc8) {
    return g_INT_0061bcc8;
  }
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  sound_sndmain_cpp_unlockSound_FUN_00551440();
  g_INT_0061bcc8 = 0;
  device_id = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavInDevice_FUN_00558a30
                      (device_id,g_SRecordingDeviceInfo_ARRAY_02649028 + g_INT_0061bcc8);
    if (iVar1 == 0) {
      return g_INT_0061bca8;
    }
    g_INT_0061bcc8 = g_INT_0061bcc8 + 1;
    device_id = device_id + 1;
  } while (g_INT_0061bcc8 < 8);
  return g_INT_0061bca8;
}
