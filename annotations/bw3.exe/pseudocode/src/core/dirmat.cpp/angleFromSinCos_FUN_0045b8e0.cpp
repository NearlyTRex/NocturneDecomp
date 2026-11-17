// Name: core_dirmat.cpp_angleFromSinCos_FUN_0045b8e0
// Address: 0045b8e0
// Address Range: [[0045b8e0, 0045b9ad]]
// Convention: __cdecl
// Signature: float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_0045b8e0(double y,double x)

#include "nocturne.h"

float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_0045b8e0(double y,double x)

{
  float10 fVar1;
  double dVar2;
  float fStack_c;
  
  if ((0.70699999999999996 <= y) || (y <= -0.70699999999999996)) {
    if ((-1 < x) && (x < 1.0)) {
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
      fStack_c = (float)3.1415926535900001 - fStack_c;
    }
  }
  if (fStack_c < (float)-3.1415926535900001) {
    fStack_c = fStack_c + 6.283185f;
  }
  if ((float)3.1415926535900001 < fStack_c) {
    return fStack_c + -6.283185f;
  }
  return fStack_c;
}
