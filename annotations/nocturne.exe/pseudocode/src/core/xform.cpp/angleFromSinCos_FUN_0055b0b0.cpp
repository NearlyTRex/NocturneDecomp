// Name: core_xform.cpp_angleFromSinCos_FUN_0055b0b0
// Address: 0055b0b0
// Address Range: [[0055b0b0, 0055b17d]]
// Convention: __cdecl
// Signature: float __cdecl core_xform_cpp_angleFromSinCos_FUN_0055b0b0(double sin_value,double cos_value)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_xform_cpp_angleFromSinCos_FUN_0055b0b0(double sin_value,double cos_value)

{
  float10 fVar1;
  double dVar2;
  float local_c;
  
  if ((_DAT_0059825e <= sin_value) || (sin_value <= _DAT_00598266)) {
    if ((_DAT_0059826e < cos_value) && (cos_value < 1.0)) {
      dVar2 = acos(cos_value);
      local_c = (float)dVar2;
    }
    if (sin_value < 0.0) {
      local_c = -local_c;
    }
  }
  else {
    fVar1 = asin((float10)sin_value);
    local_c = (float)fVar1;
    if (cos_value < 0.0) {
      local_c = (float)_DAT_00598276 - local_c;
    }
  }
  if (local_c < (float)_DAT_0059827e) {
    local_c = local_c + _DAT_00598286;
  }
  if ((float)_DAT_00598276 < local_c) {
    return local_c + _DAT_0059828a;
  }
  return local_c;
}
