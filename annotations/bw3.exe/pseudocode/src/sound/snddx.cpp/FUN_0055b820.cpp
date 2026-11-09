// Name: sound_snddx.cpp_FUN_0055b820
// Address: 0055b820
// Address Range: [[0055b820, 0055b841]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_0055b820(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_FUN_0055b820(uint param_1,uint param_2,uint param_3,uint param_4)

{
  if (_DAT_02cf49d0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02cf49d0 + 0x40))(_DAT_02cf49d0,param_2,param_3,param_4,1);
  return;
}
