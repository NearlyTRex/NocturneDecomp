// Name: sound_snddx.cpp_FUN_00555cb0
// Address: 00555cb0
// Address Range: [[00555cb0, 00555cd5]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_00555cb0(undefined4 param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_FUN_00555cb0(uint param_1,float param_2)

{
  if (_DAT_0264a5d0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_0264a5d0 + 0x2c))(_DAT_0264a5d0,param_2 * _DAT_005e9bf9,0);
  return;
}
