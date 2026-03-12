// Name: core_dcube.cpp_intersectVerticalCylinderSegment_FUN_00455ed0
// Address: 00455ed0
// Address Range: [[00455ed0, 0045603c]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0(CVector3f *segment_start,CVector3f *segment_end,float radius,float *out_height)

#include "nocturne.h"

uint __cdecl core_dcube_cpp_intersectVerticalCylinderSegment_FUN_00455ed0(CVector3f *segment_start,CVector3f *segment_end,float radius,float *out_height)

{
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar5;
  float fVar4;
  float fVar2;
  float fVar3;
  float fVar1;
  
  fVar3 = segment_end->x - segment_start->x;
  fVar1 = segment_end->z - segment_start->z;
  fVar2 = fVar1 * fVar1 + fVar3 * fVar3;
  if (0.0 < fVar2) {
    fVar5 = (segment_start->x * fVar3 + segment_start->z * fVar1) *
            (float)2;
    fVar6 = fVar5 * fVar5 -
            fVar2 * (float)4 *
            ((segment_start->x * segment_start->x + segment_start->z * segment_start->z) -
            radius * radius);
    if (0.0 <= fVar6) {
      fVar7 = (-fVar5 - SQRT(fVar6)) / (fVar2 * (float)2);
      uVar5 = 0;
      if (((0.0 <= fVar7) && (fVar7 <= 1.0)) &&
         (fVar4 = (segment_end->y - segment_start->y) * fVar7 + segment_start->y,
         *out_height < fVar4)) {
        uVar5 = 1;
        *out_height = fVar4;
      }
      fVar5 = (SQRT(fVar6) - fVar5) / (fVar2 * (float)2);
      if (((0.0 <= fVar5) && (fVar5 <= 1.0)) &&
         (fVar5 = (segment_end->y - segment_start->y) * fVar5 + segment_start->y,
         *out_height < fVar5)) {
        uVar5 = 1;
        *out_height = fVar5;
      }
      return uVar5;
    }
  }
  return 0;
}
