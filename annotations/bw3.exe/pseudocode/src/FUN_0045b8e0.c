// Name: FUN_0045b8e0
// Address: 0045b8e0
// Address Range: [[0045b8e0, 0045b9ad]]
// Convention: unknown
// Signature: float FUN_0045b8e0(double param_1,double param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0045b8e0(double param_1,double param_2)

{
  float10 fVar1;
  uint uStack_8;
  
  if ((_DAT_005bb13e <= param_1) || (param_1 <= _DAT_005bb146)) {
    if (_DAT_005bb14e < param_2) {
      if (param_2 < 1.0) {
        fVar1 = (float10)param_2;
        FUN_005a4b74();
        uStack_8 = (float)fVar1;
      }
      else {
        uStack_8 = 0.0;
      }
    }
    else {
      uStack_8 = 3.1415927;
    }
    if (param_1 < 0.0) {
      uStack_8 = -uStack_8;
    }
  }
  else {
    fVar1 = (float10)param_1;
    FUN_005a4b46();
    uStack_8 = (float)fVar1;
    if (param_2 < 0.0) {
      uStack_8 = (float)_DAT_005bb156 - uStack_8;
    }
  }
  if (uStack_8 < (float)_DAT_005bb15e) {
    uStack_8 = uStack_8 + _DAT_005bb166;
  }
  if (uStack_8 <= (float)_DAT_005bb156) {
    return uStack_8;
  }
  return uStack_8 + _DAT_005bb16a;
}
