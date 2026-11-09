// Name: sound_snddx.cpp_FUN_00555c10
// Address: 00555c10
// Address Range: [[00555c10, 00555c43]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_00555c10(undefined4 param_1,double param_2,double param_3,double param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_FUN_00555c10(uint param_1,double param_2,double param_3,double param_4)

{
  if (_DAT_0264a5d0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_0264a5d0 + 0x38))(_DAT_0264a5d0,(float)param_2,(float)param_3,(float)param_4,1)
  ;
  return;
}
