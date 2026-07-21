// Name: sound_sndmain.cpp_set3DListenerOrientRight_FUN_00528630
// Address: 00528630
// Address Range: [[00528630, 0052866d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(uint param_1,uint param_2,uint param_3)

{
  _DAT_02dc8498 = param_1;
  _DAT_02dc849c = param_2;
  _DAT_02dc84a0 = param_3;
  if (_DAT_02dc8318 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02dc8318 + 0x28))(_DAT_02dc8318,param_1,param_2,param_3);
  return;
}
