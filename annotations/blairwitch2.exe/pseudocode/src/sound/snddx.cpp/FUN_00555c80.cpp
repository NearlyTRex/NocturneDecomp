// Name: sound_snddx.cpp_FUN_00555c80
// Address: 00555c80
// Address Range: [[00555c80, 00555ca1]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_00555c80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_FUN_00555c80(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if (_DAT_0264a5d0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_0264a5d0 + 0x40))(_DAT_0264a5d0,param_2,param_3,param_4,1);
  return;
}
