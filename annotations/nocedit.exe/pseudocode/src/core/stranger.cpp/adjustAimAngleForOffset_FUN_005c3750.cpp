// Name: core_stranger.cpp_adjustAimAngleForOffset_FUN_005c3750
// Address: 005c3750
// Address Range: [[005c3750, 005c37da]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_adjustAimAngleForOffset_FUN_005c3750(float *angle,float distance,float offset)

#include "nocturne.h"

void __cdecl core_stranger_cpp_adjustAimAngleForOffset_FUN_005c3750(float *angle,float distance,float offset)

{
  double x;
  float fVar2;
  float fVar1;
  double dVar2;
  
  if ((((float)0.01 <= distance) &&
      (x = (double)(SQRT(distance * distance - offset * offset) / distance), x < 1.0)) && (0.0 <= x)
     ) {
    dVar2 = acos(x);
    if (offset < 0.0) {
      fVar2 = *angle - (float)dVar2;
    }
    else {
      fVar2 = *angle + (float)dVar2;
    }
    *angle = fVar2;
    fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(*angle);
    *angle = fVar1;
  }
  return;
}
