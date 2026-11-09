// Name: sound_sndmain.cpp_getRecordingDeviceCount_FUN_00575730
// Address: 00575730
// Address Range: [[00575730, 0057578d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_00575730(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_00575730(void)

{
  int iVar1;
  int iVar2;
  
  if (-1 < DAT_00623318) {
    return DAT_00623318;
  }
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  sound_sndmain_cpp_FUN_00573e70();
  DAT_00623318 = 0;
  iVar2 = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavInDevice_FUN_0057b460
                      (iVar2,DAT_00623318 * 0x108 + 0x2c807f8);
    if (iVar1 == 0) {
      return DAT_006232f8;
    }
    DAT_00623318 = DAT_00623318 + 1;
    iVar2 = iVar2 + 1;
  } while (DAT_00623318 < 8);
  return DAT_006232f8;
}
