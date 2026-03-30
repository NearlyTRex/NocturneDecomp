// Name: core_flies.cpp_CFlies_generateRandomPoint_FUN_004cc820
// Address: 004cc820
// Address Range: [[004cc820, 004cc840]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_flies_cpp_CFlies_generateRandomPoint_FUN_004cc820(CFlies *this_ptr,CVector3f *out_point,CVector3f *reference_point)

#include "nocturne.h"

CVector3f * __cdecl core_flies_cpp_CFlies_generateRandomPoint_FUN_004cc820(CFlies *this_ptr,CVector3f *out_point,CVector3f *reference_point)

{
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar6;
  CVector3f local_44 [2];
  CVector3f local_2c;
  float local_18;
  float fVar1;
  float fVar3;
  float fVar2;
  float fVar5;
  float fVar4;
  
  fVar12 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,1.0);
  out_point->y = fVar12;
  out_point->y = out_point->y * out_point->y * (this_ptr->box_size).y;
  fVar12 = (this_ptr->box_size).x;
  fVar12 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                     (fVar12 * (float)-0.5,fVar12 * (float)0.5);
  out_point->x = fVar12;
  fVar12 = (this_ptr->box_size).z;
  fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10
                    (fVar12 * (float)-0.5,fVar12 * (float)0.5);
  out_point->z = fVar6;
  if (reference_point != (CVector3f *)0x0) {
    fVar12 = out_point->x - reference_point->x;
    fVar4 = out_point->y - reference_point->y;
    fVar5 = out_point->z - reference_point->z;
    fVar9 = SQRT(fVar5 * fVar5 + fVar12 * fVar12 + fVar4 * fVar4);
    if ((float)4 < fVar9) {
      fVar10 = fVar4 * 4.0f;
      fVar11 = fVar5 * 4.0f;
      fVar9 = 1.0 / fVar9;
      fVar7 = reference_point->y;
      fVar8 = reference_point->z;
      if (out_point != &local_2c) {
        out_point->x = reference_point->x + fVar12 * 4.0f * fVar9;
        out_point->y = fVar7 + fVar10 * fVar9;
        out_point->z = fVar8 + fVar11 * fVar9;
        return out_point;
      }
    }
    else if ((fVar9 < 1.0) && (0.0 < fVar9)) {
      fVar3 = 1.0 / fVar9;
      fVar1 = reference_point->y;
      fVar2 = reference_point->z;
      if (out_point != local_44) {
        out_point->x = reference_point->x + fVar12 * fVar3;
        out_point->y = fVar1 + fVar4 * fVar3;
        out_point->z = fVar2 + fVar5 * fVar3;
        return out_point;
      }
    }
  }
  return out_point;
}
