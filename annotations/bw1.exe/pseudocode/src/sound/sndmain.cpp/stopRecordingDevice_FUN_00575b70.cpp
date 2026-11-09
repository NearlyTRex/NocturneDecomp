// Name: sound_sndmain.cpp_stopRecordingDevice_FUN_00575b70
// Address: 00575b70
// Address Range: [[00575b70, 00575ba8]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00575b70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00575b70(void)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  if (_DAT_02c81038 != (int *)0x0) {
    iVar1 = (**(code **)(*_DAT_02c81038 + 8))(_DAT_02c81038);
    if (iVar1 == 0) {
      sound_sndmain_cpp_FUN_00573e70();
      return 0;
    }
  }
  _DAT_02c8103c = 0;
  sound_sndmain_cpp_FUN_00573e70();
  return 1;
}
