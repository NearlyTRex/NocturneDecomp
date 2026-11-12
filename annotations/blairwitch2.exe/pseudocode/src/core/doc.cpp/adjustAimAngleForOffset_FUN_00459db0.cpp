// Name: core_doc.cpp_adjustAimAngleForOffset_FUN_00459db0
// Address: 00459db0
// Address Range: [[00459db0, 00459e3a]]
// Convention: __cdecl
// Signature: void __cdecl core_doc_cpp_adjustAimAngleForOffset_FUN_00459db0(float *angle,float distance,float offset)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_doc_cpp_adjustAimAngleForOffset_FUN_00459db0(float *angle,float distance,float offset)

{
  float fVar1;
  float10 fVar2;
  
  if ((((float)_DAT_005d0517 <= distance) &&
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
    fVar1 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(*angle);
    *angle = fVar1;
  }
  return;
}
