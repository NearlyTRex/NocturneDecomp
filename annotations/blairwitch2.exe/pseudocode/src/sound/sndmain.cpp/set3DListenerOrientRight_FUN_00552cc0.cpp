// Name: sound_sndmain.cpp_set3DListenerOrientRight_FUN_00552cc0
// Address: 00552cc0
// Address Range: [[00552cc0, 00552cfd]]
// Convention: __cdecl
// Signature: void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00552cc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_sndmain_cpp_set3DListenerOrientRight_FUN_00552cc0(uint param_1,uint param_2,uint param_3)

{
  _DAT_02649000 = param_1;
  _DAT_02649004 = param_2;
  _DAT_02649008 = param_3;
  if (_DAT_02648e80 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02648e80 + 0x2c))(_DAT_02648e80,param_1,param_2,param_3);
  return;
}
