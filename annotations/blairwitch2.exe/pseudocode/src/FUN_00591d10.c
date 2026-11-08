// Name: FUN_00591d10
// Address: 00591d10
// Address Range: [[00591d10, 00591dde]]
// Convention: unknown
// Signature: float FUN_00591d10(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00591d10(float param_1,float param_2)

{
  float10 fVar1;
  uint uStack_4;
  
  if ((_DAT_005eecde <= param_1) || (param_1 <= _DAT_005eece2)) {
    if (_DAT_005eece6 < param_2) {
      if ((int)param_2 < 0x3f800000) {
        fVar1 = (float10)param_2;
        FUN_005b9924();
        uStack_4 = (float)fVar1;
      }
      else {
        uStack_4 = 0.0;
      }
    }
    else {
      uStack_4 = 3.1415927;
    }
    if (param_1 < 0.0) {
      uStack_4 = -uStack_4;
    }
  }
  else {
    fVar1 = (float10)param_1;
    FUN_005b98f6();
    uStack_4 = (float)fVar1;
    if (param_2 < 0.0) {
      uStack_4 = _DAT_005eecea - uStack_4;
    }
  }
  if (uStack_4 < _DAT_005eecee) {
    uStack_4 = uStack_4 + _DAT_005eecf2;
  }
  if (uStack_4 <= _DAT_005eecea) {
    return uStack_4;
  }
  return uStack_4 + _DAT_005eecf6;
}
