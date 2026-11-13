// Name: core_stranger.cpp_adjustAimAngleForOffset_FUN_0058e910
// Address: 0058e910
// Address Range: [[0058e910, 0058e99a]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_adjustAimAngleForOffset_FUN_0058e910(float *angle,float distance,float offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_adjustAimAngleForOffset_FUN_0058e910(float *angle,float distance,float offset)

{
  float fVar1;
  float10 fVar2;
  
  if ((((float)_DAT_005f6ec9 <= distance) &&
      (fVar1 = SQRT(distance * distance - offset * offset) / distance, fVar1 < 1.0)) &&
     (0.0 <= fVar1)) {
    fVar2 = (float10)fVar1;
    acos();
    if (offset < 0.0) {
      fVar1 = *angle - (float)fVar2;
    }
    else {
      fVar1 = *angle + (float)fVar2;
    }
    *angle = fVar1;
    fVar1 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(*angle);
    *angle = fVar1;
  }
  return;
}
