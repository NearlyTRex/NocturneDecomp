// Name: core_charactr.cpp_clampNormalizedAngle_FUN_0042cc80
// Address: 0042cc80
// Address Range: [[0042cc80, 0042cce1]]
// Convention: __cdecl
// Signature: float __cdecl core_charactr_cpp_clampNormalizedAngle_FUN_0042cc80(float angle,float limit)

#include "nocturne.h"

float __cdecl core_charactr_cpp_clampNormalizedAngle_FUN_0042cc80(float angle,float limit)

{
  float fVar1;
  float fVar2;
  
  fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(angle);
  fVar2 = -limit;
  if ((-limit <= fVar1) && (fVar2 = limit, fVar1 <= limit)) {
    return fVar1;
  }
  return fVar2;
}
