// Name: core_dirmat.cpp_angleFromSinCos_FUN_0045b8e0
// Address: 0045b8e0
// Address Range: [[0045b8e0, 0045b9ad]]
// Convention: __cdecl
// Signature: float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_0045b8e0(double y,double x)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_0045b8e0(double y,double x)

{
  float10 fVar1;
  double dVar2;
  float fStack_c;
  
  if ((_DAT_005bb13e <= y) || (y <= _DAT_005bb146)) {
    if ((_DAT_005bb14e < x) && (x < 1.0)) {
      dVar2 = acos(x);
      fStack_c = (float)dVar2;
    }
    if (y < 0.0) {
      fStack_c = -fStack_c;
    }
  }
  else {
    fVar1 = asin((float10)y);
    fStack_c = (float)fVar1;
    if (x < 0.0) {
      fStack_c = (float)_DAT_005bb156 - fStack_c;
    }
  }
  if (fStack_c < (float)_DAT_005bb15e) {
    fStack_c = fStack_c + _DAT_005bb166;
  }
  if ((float)_DAT_005bb156 < fStack_c) {
    return fStack_c + _DAT_005bb16a;
  }
  return fStack_c;
}
