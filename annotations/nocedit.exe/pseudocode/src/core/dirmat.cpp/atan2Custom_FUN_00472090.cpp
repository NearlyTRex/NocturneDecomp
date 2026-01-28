// Name: core_dirmat.cpp_atan2Custom_FUN_00472090
// Address: 00472090
// Address Range: [[00472090, 0047215d]]
// Convention: __cdecl
// Signature: float __cdecl core_dirmat_cpp_atan2Custom_FUN_00472090(double y,double x)

#include "nocturne.h"

float __cdecl core_dirmat_cpp_atan2Custom_FUN_00472090(double y,double x)

{
  float10 fVar1;
  double dVar2;
  float local_c;
  
  if ((0.70699999999999996 <= y) || (y <= -0.70699999999999996)) {
    if ((-1 < x) && (x < 1.0)) {
      dVar2 = crt_math_c_acos_FUN_00600162(x);
      local_c = (float)dVar2;
    }
    if (y < 0.0) {
      local_c = -local_c;
    }
  }
  else {
    fVar1 = crt_math_c_asin_FUN_00600b94((float10)y);
    local_c = (float)fVar1;
    if (x < 0.0) {
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
