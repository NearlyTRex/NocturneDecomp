// Name: core_stranger.cpp_adjustAimAngleForOffset_FUN_0053d700
// Address: 0053d700
// Address Range: [[0053d700, 0053d78a]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_adjustAimAngleForOffset_FUN_0053d700(float *angle,float distance,float offset)

#include "nocturne.h"

void __cdecl core_stranger_cpp_adjustAimAngleForOffset_FUN_0053d700(float *angle,float distance,float offset)

{
  float fVar1;
  double dVar2;
  
  if ((((float)0.01 <= distance) &&
      (dVar2 = (double)(SQRT(distance * distance - offset * offset) / distance), dVar2 < 1.0)) &&
     (0.0 <= dVar2)) {
    dVar2 = acos(dVar2);
    if (offset < 0.0) {
      fVar1 = *angle - (float)dVar2;
    }
    else {
      fVar1 = *angle + (float)dVar2;
    }
    *angle = fVar1;
    fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*angle);
    *angle = fVar1;
  }
  return;
}
