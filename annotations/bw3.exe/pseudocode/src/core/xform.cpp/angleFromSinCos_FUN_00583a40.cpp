// Name: core_xform.cpp_angleFromSinCos_FUN_00583a40
// Address: 00583a40
// Address Range: [[00583a40, 00583b0e]]
// Convention: __cdecl
// Signature: float __cdecl core_xform_cpp_angleFromSinCos_FUN_00583a40(float sin_value,float cos_value)

#include "nocturne.h"

float __cdecl core_xform_cpp_angleFromSinCos_FUN_00583a40(float sin_value,float cos_value)

{
  float10 fVar1;
  double dVar2;
  float unaff_retaddr;
  float fStack_8;
  
  if ((0.707f <= sin_value) || (sin_value <= -0.707f)) {
    if ((-1.0f < cos_value) && ((int)cos_value < 0x3f800000)) {
      dVar2 = acos((double)cos_value);
      fStack_8 = (float)dVar2;
    }
    if (unaff_retaddr < 0.0) {
      fStack_8 = -fStack_8;
    }
  }
  else {
    fVar1 = asin((float10)sin_value);
    fStack_8 = (float)fVar1;
    if (sin_value < 0.0) {
      fStack_8 = 3.141593f - fStack_8;
    }
  }
  if (fStack_8 < -3.141593f) {
    fStack_8 = fStack_8 + 6.283185f;
  }
  if (3.141593f < fStack_8) {
    return fStack_8 + -6.283185f;
  }
  return fStack_8;
}
