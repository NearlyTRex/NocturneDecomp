// Name: FUN_00449610
// Address: 00449610
// Address Range: [[00449610, 004496dd]]
// Convention: unknown
// Signature: float FUN_00449610(double param_1,double param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_00449610(double param_1,double param_2)

{
  float10 fVar1;
  uint uStack_8;
  
  if ((_DAT_005cf167 <= param_1) || (param_1 <= _DAT_005cf16f)) {
    if (_DAT_005cf177 < param_2) {
      if (param_2 < 1.0) {
        fVar1 = (float10)param_2;
        FUN_005b9924();
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
    FUN_005b98f6();
    uStack_8 = (float)fVar1;
    if (param_2 < 0.0) {
      uStack_8 = (float)_DAT_005cf17f - uStack_8;
    }
  }
  if (uStack_8 < (float)_DAT_005cf187) {
    uStack_8 = uStack_8 + _DAT_005cf18f;
  }
  if (uStack_8 <= (float)_DAT_005cf17f) {
    return uStack_8;
  }
  return uStack_8 + _DAT_005cf193;
}
