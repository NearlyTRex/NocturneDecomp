// Name: core_xform.cpp_angleFromSinCos_FUN_00591d10
// Address: 00591d10
// Address Range: [[00591d10, 00591dde]]
// Convention: __cdecl
// Signature: float __cdecl core_xform_cpp_angleFromSinCos_FUN_00591d10(float sin_value,float cos_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_xform_cpp_angleFromSinCos_FUN_00591d10(float sin_value,float cos_value)

{
  float10 fVar1;
  double dVar2;
  float unaff_retaddr;
  float fStack_8;
  
  if ((_DAT_005eecde <= sin_value) || (sin_value <= _DAT_005eece2)) {
    if ((_DAT_005eece6 < cos_value) && ((int)cos_value < 0x3f800000)) {
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
      fStack_8 = _DAT_005eecea - fStack_8;
    }
  }
  if (fStack_8 < _DAT_005eecee) {
    fStack_8 = fStack_8 + _DAT_005eecf2;
  }
  if (_DAT_005eecea < fStack_8) {
    return fStack_8 + _DAT_005eecf6;
  }
  return fStack_8;
}
