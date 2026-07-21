// Name: core_sound.cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0
// Address: 0052ecb0
// Address Range: [[0052ecb0, 0052ecdc]]
// Convention: __cdecl
// Signature: void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_sound_cpp_CSound_set3DListenerOrientRight_FUN_0052ecb0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  _DAT_02dc9474 = param_2;
  _DAT_02dc9478 = param_3;
  _DAT_02dc947c = param_4;
  sound_sndmain_cpp_set3DListenerOrientRight_FUN_00528630(param_2,param_3,param_4);
  return;
}
