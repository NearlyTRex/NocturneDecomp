// Name: sound_sndmain.cpp_getRecordingDeviceCount_FUN_00552d00
// Address: 00552d00
// Address Range: [[00552d00, 00552d5d]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_00552d00(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_00552d00(void)

{
  int iVar1;
  int iVar2;
  
  if (-1 < DAT_0061bcc8) {
    return DAT_0061bcc8;
  }
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  sound_sndmain_cpp_FUN_00551440();
  DAT_0061bcc8 = 0;
  iVar2 = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavInDevice_FUN_00558a30
                      (iVar2,DAT_0061bcc8 * 0x108 + 0x2649028);
    if (iVar1 == 0) {
      return DAT_0061bca8;
    }
    DAT_0061bcc8 = DAT_0061bcc8 + 1;
    iVar2 = iVar2 + 1;
  } while (DAT_0061bcc8 < 8);
  return DAT_0061bca8;
}
