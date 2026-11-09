// Name: sound_sndmain.cpp_set3DListenerOrientRight_FUN_005756f0
// Address: 005756f0
// Address Range: [[005756f0, 0057572d]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_005756f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_005756f0(uint param_1,uint param_2,uint param_3)

{
  _DAT_02c807d0 = param_1;
  _DAT_02c807d4 = param_2;
  _DAT_02c807d8 = param_3;
  if (_DAT_02c80650 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02c80650 + 0x2c))(_DAT_02c80650,param_1,param_2,param_3);
  return;
}
