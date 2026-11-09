// Name: sound_snddx.cpp_FUN_0055b850
// Address: 0055b850
// Address Range: [[0055b850, 0055b875]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_0055b850(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_FUN_0055b850(uint param_1,float param_2)

{
  if (_DAT_02cf49d0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02cf49d0 + 0x2c))(_DAT_02cf49d0,param_2 * _DAT_005d46ed,0);
  return;
}
