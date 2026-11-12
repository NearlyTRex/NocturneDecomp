// Name: core_charactr.cpp_clampFloat_FUN_0042cc30
// Address: 0042cc30
// Address Range: [[0042cc30, 0042cc79]]
// Convention: unknown
// Signature: float core_charactr_cpp_clampFloat_FUN_0042cc30(float param_1,float param_2)

#include "nocturne.h"

float core_charactr_cpp_clampFloat_FUN_0042cc30(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = -param_2;
  if ((-param_2 <= param_1) && (fVar1 = param_2, param_1 <= param_2)) {
    return param_1;
  }
  return fVar1;
}
