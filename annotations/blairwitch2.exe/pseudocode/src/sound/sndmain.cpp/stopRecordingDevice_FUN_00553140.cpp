// Name: sound_sndmain.cpp_stopRecordingDevice_FUN_00553140
// Address: 00553140
// Address Range: [[00553140, 00553178]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00553140(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00553140(void)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_005532f0();
  if (_DAT_02649868 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02649868 + 8))(_DAT_02649868);
    if (iVar1 == 0) {
      sound_sndmain_cpp_FUN_00551440();
      return 0;
    }
  }
  _DAT_0264986c = 0;
  sound_sndmain_cpp_FUN_00551440();
  return 1;
}
