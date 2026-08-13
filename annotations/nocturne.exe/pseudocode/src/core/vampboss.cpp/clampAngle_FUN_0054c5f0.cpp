// Name: core_vampboss.cpp_clampAngle_FUN_0054c5f0
// Address: 0054c5f0
// Address Range: [[0054c5f0, 0054c651]]
// Convention: __cdecl
// Signature: float __cdecl core_vampboss_cpp_clampAngle_FUN_0054c5f0(float angle,float max_angle)

#include "nocturne.h"

float __cdecl core_vampboss_cpp_clampAngle_FUN_0054c5f0(float angle,float max_angle)

{
  float fVar1;
  float fVar2;
  
  fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(angle);
  fVar2 = -max_angle;
  if ((-max_angle <= fVar1) && (fVar2 = max_angle, fVar1 <= max_angle)) {
    return fVar1;
  }
  return fVar2;
}
