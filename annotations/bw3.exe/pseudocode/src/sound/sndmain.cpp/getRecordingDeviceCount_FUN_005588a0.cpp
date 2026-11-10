// Name: sound_sndmain.cpp_getRecordingDeviceCount_FUN_005588a0
// Address: 005588a0
// Address Range: [[005588a0, 005588fd]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_005588a0(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_005588a0(void)

{
  int iVar1;
  int iVar2;
  
  if (-1 < DAT_00604254) {
    return DAT_00604254;
  }
  sound_sndmain_cpp_lockSound_FUN_00558e90();
  sound_sndmain_cpp_FUN_00556fd0();
  DAT_00604254 = 0;
  iVar2 = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavInDevice_FUN_0055e590
                      (iVar2,DAT_00604254 * 0x108 + 0x2cf3428);
    if (iVar1 == 0) {
      return DAT_00604238;
    }
    DAT_00604254 = DAT_00604254 + 1;
    iVar2 = iVar2 + 1;
  } while (DAT_00604254 < 8);
  return DAT_00604238;
}
