// Name: core_charactr.cpp_FUN_0042b970
// Address: 0042b970
// Address Range: [[0042b970, 0042b9d1]]
// Convention: unknown
// Signature: float core_charactr_cpp_FUN_0042b970(undefined4 param_1,float param_2)

#include "nocturne.h"

float core_charactr_cpp_FUN_0042b970(uint param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(param_1);
  fVar2 = -param_2;
  if ((-param_2 <= fVar1) && (fVar2 = param_2, fVar1 <= param_2)) {
    return fVar1;
  }
  return fVar2;
}
