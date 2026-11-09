// Name: sound_sndmain.cpp_stopRecordingDevice_FUN_00558ce0
// Address: 00558ce0
// Address Range: [[00558ce0, 00558d18]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00558ce0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00558ce0(void)

{
  int iVar1;
  
  sound_sndmain_cpp_FUN_00558e90();
  if (_DAT_02cf3c68 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02cf3c68 + 8))(_DAT_02cf3c68);
    if (iVar1 == 0) {
      sound_sndmain_cpp_FUN_00556fd0();
      return 0;
    }
  }
  _DAT_02cf3c6c = 0;
  sound_sndmain_cpp_FUN_00556fd0();
  return 1;
}
