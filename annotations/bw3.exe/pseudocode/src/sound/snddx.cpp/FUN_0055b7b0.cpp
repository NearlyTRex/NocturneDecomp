// Name: sound_snddx.cpp_FUN_0055b7b0
// Address: 0055b7b0
// Address Range: [[0055b7b0, 0055b7e3]]
// Convention: unknown
// Signature: void sound_snddx_cpp_FUN_0055b7b0(undefined4 param_1,double param_2,double param_3,double param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sound_snddx_cpp_FUN_0055b7b0(uint param_1,double param_2,double param_3,double param_4)

{
  if (_DAT_02cf49d0 == (int *)0x0) {
    return;
  }
  (**(code **)(*_DAT_02cf49d0 + 0x38))(_DAT_02cf49d0,(float)param_2,(float)param_3,(float)param_4,1)
  ;
  return;
}
