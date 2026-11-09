// Name: sound_sndmain.cpp_initializeRecordingDevice_FUN_005758e0
// Address: 005758e0
// Address Range: [[005758e0, 0057593b]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_initializeRecordingDevice_FUN_005758e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_initializeRecordingDevice_FUN_005758e0(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_releaseRecordingDevice_FUN_00575940();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectRecordingDevice_FUN_00575870(DAT_0062331c);
  if (-1 < DAT_0062331c) {
    if (*(int *)(DAT_0062331c * 0x108 + 0x2c808f8) == 0) {
      _DAT_02c81038 =
           sound_sndwav_cpp_getWavInDevice_FUN_0057b500(*(UINT *)(DAT_0062331c * 0x108 + 0x2c808fc))
      ;
    }
    if (_DAT_02c81038 != (CWavInDevice *)0x0) {
      return 1;
    }
  }
  return 0;
}
