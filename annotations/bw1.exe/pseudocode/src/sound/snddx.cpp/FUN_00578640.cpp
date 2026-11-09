// Name: sound_snddx.cpp_FUN_00578640
// Address: 00578640
// Address Range: [[00578640, 00578673]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_00578640(undefined4 param_1,double param_2,double param_3,double param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_FUN_00578640(uint param_1,double param_2,double param_3,double param_4)

{
  if (_DAT_02c81da0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02c81da0 + 0x38))(_DAT_02c81da0,(float)param_2,(float)param_3,(float)param_4,1)
  ;
  return;
}
