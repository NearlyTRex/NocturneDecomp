// Name: FUN_0045f770
// Address: 0045f770
// Address Range: [[0045f770, 0045f83d]]
// Convention: unknown
// Signature: float FUN_0045f770(double param_1,double param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_0045f770(double param_1,double param_2)

{
  float10 fVar1;
  uint uStack_8;
  
  if ((_DAT_005d8a60 <= param_1) || (param_1 <= _DAT_005d8a68)) {
    if (_DAT_005d8a70 < param_2) {
      if (param_2 < 1.0) {
        fVar1 = (float10)param_2;
        FUN_005c1d04();
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
    FUN_005c1cd6();
    uStack_8 = (float)fVar1;
    if (param_2 < 0.0) {
      uStack_8 = (float)_DAT_005d8a78 - uStack_8;
    }
  }
  if (uStack_8 < (float)_DAT_005d8a80) {
    uStack_8 = uStack_8 + _DAT_005d8a88;
  }
  if (uStack_8 <= (float)_DAT_005d8a78) {
    return uStack_8;
  }
  return uStack_8 + _DAT_005d8a8c;
}
