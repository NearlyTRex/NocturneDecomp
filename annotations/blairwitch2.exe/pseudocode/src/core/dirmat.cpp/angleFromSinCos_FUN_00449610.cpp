// Name: core_dirmat.cpp_angleFromSinCos_FUN_00449610
// Address: 00449610
// Address Range: [[00449610, 004496dd]]
// Convention: __cdecl
// Signature: float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_00449610(double y,double x)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_00449610(double y,double x)

{
  float10 fVar1;
  uint uStack_8;
  
  if ((_DAT_005cf167 <= y) || (y <= _DAT_005cf16f)) {
    if (_DAT_005cf177 < x) {
      if (x < 1.0) {
        fVar1 = (float10)x;
        acos();
        uStack_8 = (float)fVar1;
      }
      else {
        uStack_8 = 0.0;
      }
    }
    else {
      uStack_8 = 3.1415927;
    }
    if (y < 0.0) {
      uStack_8 = -uStack_8;
    }
  }
  else {
    fVar1 = (float10)y;
    asin();
    uStack_8 = (float)fVar1;
    if (x < 0.0) {
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
