// Name: core_prye.cpp_adjustAimAngleForOffset_FUN_005228c0
// Address: 005228c0
// Address Range: [[005228c0, 0052294a]]
// Convention: __cdecl
// Signature: void __cdecl core_prye_cpp_adjustAimAngleForOffset_FUN_005228c0(float *angle,float distance,float offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_prye_cpp_adjustAimAngleForOffset_FUN_005228c0(float *angle,float distance,float offset)

{
  float fVar1;
  double dVar2;
  
  if ((((float)_DAT_005cd697 <= distance) &&
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
    fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(*angle);
    *angle = fVar1;
  }
  return;
}
