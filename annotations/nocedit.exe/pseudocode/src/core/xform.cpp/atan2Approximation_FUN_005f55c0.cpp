// Name: core_xform.cpp_atan2Approximation_FUN_005f55c0
// Address: 005f55c0
// Address Range: [[005f55c0, 005f568d]]
// Convention: __cdecl
// Signature: float __cdecl core_xform_cpp_atan2Approximation_FUN_005f55c0(double sin_value,double cos_value)

#include "nocturne.h"

float __cdecl core_xform_cpp_atan2Approximation_FUN_005f55c0(double sin_value,double cos_value)

{
  float10 fVar1;
  double dVar2;
  float local_c;
  
  if ((0.70699999999999996 <= sin_value) || (sin_value <= -0.70699999999999996)) {
    if ((-1 < cos_value) && (cos_value < 1.0)) {
      dVar2 = crt_math_c_acos_FUN_00600162(cos_value);
      local_c = (float)dVar2;
    }
    if (sin_value < 0.0) {
      local_c = -local_c;
    }
  }
  else {
    fVar1 = crt_math_c_asin_FUN_00600b94((float10)sin_value);
    local_c = (float)fVar1;
    if (cos_value < 0.0) {
      local_c = (float)3.1415926535900001 - local_c;
    }
  }
  if (local_c < (float)-3.1415926535900001) {
    local_c = local_c + 6.283185f;
  }
  if ((float)3.1415926535900001 < local_c) {
    return local_c + -6.283185f;
  }
  return local_c;
}
