// Name: core_charactr.cpp_FUN_0042cc80
// Address: 0042cc80
// Address Range: [[0042cc80, 0042cce1]]
// Convention: unknown
// Signature: float core_charactr_cpp_FUN_0042cc80(undefined4 param_1,float param_2)

#include "nocturne.h"

float core_charactr_cpp_FUN_0042cc80(uint param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(param_1);
  fVar2 = -param_2;
  if ((-param_2 <= fVar1) && (fVar2 = param_2, fVar1 <= param_2)) {
    return fVar1;
  }
  return fVar2;
}
