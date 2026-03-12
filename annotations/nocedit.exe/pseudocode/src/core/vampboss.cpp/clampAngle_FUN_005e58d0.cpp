// Name: core_vampboss.cpp_clampAngle_FUN_005e58d0
// Address: 005e58d0
// Address Range: [[005e58d0, 005e5931]]
// Convention: __cdecl
// Signature: float __cdecl core_vampboss_cpp_clampAngle_FUN_005e58d0(float angle,float max_angle)

#include "nocturne.h"

float __cdecl core_vampboss_cpp_clampAngle_FUN_005e58d0(float angle,float max_angle)

{
  float fVar1;
  float fVar2;
  
  fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(angle);
  fVar2 = -max_angle;
  if ((fVar2 <= fVar1) && (fVar2 = max_angle, fVar1 <= max_angle)) {
    return fVar1;
  }
  return fVar2;
}
