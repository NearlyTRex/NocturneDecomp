// Name: core_xform.cpp_FUN_005b5860
// Address: 005b5860
// Address Range: [[005b5860, 005b592e]]
// Convention: unknown
// Signature: float core_xform_cpp_FUN_005b5860(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float core_xform_cpp_FUN_005b5860(float param_1,float param_2)

{
  float10 fVar1;
  uint uStack_4;
  
  if ((_DAT_005fa0b0 <= param_1) || (param_1 <= _DAT_005fa0b4)) {
    if (_DAT_005fa0b8 < param_2) {
      if ((int)param_2 < 0x3f800000) {
        fVar1 = (float10)param_2;
        acos();
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
    asin();
    uStack_4 = (float)fVar1;
    if (param_2 < 0.0) {
      uStack_4 = _DAT_005fa0bc - uStack_4;
    }
  }
  if (uStack_4 < _DAT_005fa0c0) {
    uStack_4 = uStack_4 + _DAT_005fa0c4;
  }
  if (uStack_4 <= _DAT_005fa0bc) {
    return uStack_4;
  }
  return uStack_4 + _DAT_005fa0c8;
}
