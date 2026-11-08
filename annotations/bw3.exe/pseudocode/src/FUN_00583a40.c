// Name: FUN_00583a40
// Address: 00583a40
// Address Range: [[00583a40, 00583b0e]]
// Convention: unknown
// Signature: float FUN_00583a40(float param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00583a40(float param_1,float param_2)

{
  float10 fVar1;
  uint uStack_4;
  
  if ((_DAT_005d80db <= param_1) || (param_1 <= _DAT_005d80df)) {
    if (_DAT_005d80e3 < param_2) {
      if ((int)param_2 < 0x3f800000) {
        fVar1 = (float10)param_2;
        FUN_005a4b74();
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
    FUN_005a4b46();
    uStack_4 = (float)fVar1;
    if (param_2 < 0.0) {
      uStack_4 = _DAT_005d80e7 - uStack_4;
    }
  }
  if (uStack_4 < _DAT_005d80eb) {
    uStack_4 = uStack_4 + _DAT_005d80ef;
  }
  if (uStack_4 <= _DAT_005d80e7) {
    return uStack_4;
  }
  return uStack_4 + _DAT_005d80f3;
}
