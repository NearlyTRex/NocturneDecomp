// Name: core_flies.cpp_CFlies_generateRandomPoint_FUN_0048f9b0
// Address: 0048f9b0
// Address Range: [[0048f9b0, 0048fbde]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_flies_cpp_CFlies_generateRandomPoint_FUN_0048f9b0(CFlies *this_ptr,CVector3f *out_point,CVector3f *reference_point)

#include "nocturne.h"

CVector3f * __cdecl core_flies_cpp_CFlies_generateRandomPoint_FUN_0048f9b0(CFlies *this_ptr,CVector3f *out_point,CVector3f *reference_point)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f local_44 [2];
  CVector3f local_2c;
  float local_18;
  
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0.0,1.0);
  out_point->y = local_18;
  out_point->y = out_point->y * out_point->y * (this_ptr->box_size).y;
  fVar6 = (this_ptr->box_size).x;
  local_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                       (fVar6 * (float)-0.5,fVar6 * (float)0.5);
  out_point->x = local_18;
  fVar6 = (this_ptr->box_size).z;
  fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                    (fVar6 * (float)-0.5,fVar6 * (float)0.5);
  out_point->z = fVar6;
  if (reference_point != (CVector3f *)0x0) {
    fVar6 = out_point->x - reference_point->x;
    fVar4 = out_point->y - reference_point->y;
    fVar5 = out_point->z - reference_point->z;
    fVar3 = SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4);
    if ((float)4 < fVar3) {
      fVar4 = fVar4 * 4.0f;
      fVar5 = fVar5 * 4.0f;
      fVar3 = 1.0 / fVar3;
      fVar1 = reference_point->y;
      fVar2 = reference_point->z;
      if (out_point != &local_2c) {
        out_point->x = reference_point->x + fVar6 * 4.0f * fVar3;
        out_point->y = fVar1 + fVar4 * fVar3;
        out_point->z = fVar2 + fVar5 * fVar3;
        return out_point;
      }
    }
    else if ((fVar3 < 1.0) && (0.0 < fVar3)) {
      fVar3 = 1.0 / fVar3;
      fVar1 = reference_point->y;
      fVar2 = reference_point->z;
      if (out_point != local_44) {
        out_point->x = reference_point->x + fVar6 * fVar3;
        out_point->y = fVar1 + fVar4 * fVar3;
        out_point->z = fVar2 + fVar5 * fVar3;
        return out_point;
      }
    }
  }
  return out_point;
}
