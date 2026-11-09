// Name: sound_sndmain.cpp_initializeRecordingDevice_FUN_00558a50
// Address: 00558a50
// Address Range: [[00558a50, 00558aab]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_initializeRecordingDevice_FUN_00558a50(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_initializeRecordingDevice_FUN_00558a50(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_releaseRecordingDevice_FUN_00558ab0();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectRecordingDevice_FUN_005589e0(DAT_00604258);
  if (-1 < DAT_00604258) {
    if (*(int *)(DAT_00604258 * 0x108 + 0x2cf3528) == 0) {
      _DAT_02cf3c68 =
           sound_sndwav_cpp_getWavInDevice_FUN_0055e630(*(UINT *)(DAT_00604258 * 0x108 + 0x2cf352c))
      ;
    }
    if (_DAT_02cf3c68 != (CWavInDevice *)0x0) {
      return 1;
    }
  }
  return 0;
}
