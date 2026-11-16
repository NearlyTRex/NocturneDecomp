// Name: core_xform.cpp_angleFromSinCos_FUN_005b5860
// Address: 005b5860
// Address Range: [[005b5860, 005b592e]]
// Convention: __cdecl
// Signature: float __cdecl core_xform_cpp_angleFromSinCos_FUN_005b5860(float sin_value,float cos_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_xform_cpp_angleFromSinCos_FUN_005b5860(float sin_value,float cos_value)

{
  float10 fVar1;
  double dVar2;
  float unaff_retaddr;
  float fStack_8;
  
  if ((_DAT_005fa0b0 <= sin_value) || (sin_value <= _DAT_005fa0b4)) {
    if ((_DAT_005fa0b8 < cos_value) && ((int)cos_value < 0x3f800000)) {
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
      fStack_8 = _DAT_005fa0bc - fStack_8;
    }
  }
  if (fStack_8 < _DAT_005fa0c0) {
    fStack_8 = fStack_8 + _DAT_005fa0c4;
  }
  if (_DAT_005fa0bc < fStack_8) {
    return fStack_8 + _DAT_005fa0c8;
  }
  return fStack_8;
}
