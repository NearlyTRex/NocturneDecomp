// Name: core_dirmat.cpp_angleFromSinCos_FUN_0045f770
// Address: 0045f770
// Address Range: [[0045f770, 0045f83d]]
// Convention: __cdecl
// Signature: float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_0045f770(double y,double x)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_0045f770(double y,double x)

{
  float10 fVar1;
  double dVar2;
  float fStack_c;
  
  if ((_DAT_005d8a60 <= y) || (y <= _DAT_005d8a68)) {
    if ((_DAT_005d8a70 < x) && (x < 1.0)) {
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
      fStack_c = (float)_DAT_005d8a78 - fStack_c;
    }
  }
  if (fStack_c < (float)_DAT_005d8a80) {
    fStack_c = fStack_c + _DAT_005d8a88;
  }
  if ((float)_DAT_005d8a78 < fStack_c) {
    return fStack_c + _DAT_005d8a8c;
  }
  return fStack_c;
}
